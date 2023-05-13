# include "PrefixMatcher.h"
# include <string>
# include <vector>
using namespace std;

PrefixMatcher::PrefixMatcher(){
    root = new TrieNode;
}

void PrefixMatcher::insert(string address, int routerNumber){
    TrieNode* node = root;
    for (char c : address) {
        int index = c - '0';
        if (node->children[index] == nullptr) {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNode* node = root;
    int i = 0;
    for (int i=0; i < networkAddress.length() && node->children[networkAddress[i]-'0'] != nullptr; i++) {
        node = node->children[networkAddress[i]-'0'];
    }
    return node->routerNumber;
}
