# include "PrefixMatcher.h"
# include <string>
# include <vector>
using namespace std;

PrefixMatcher::PrefixMatcher(){
    root = new TrieNode;
}

void PrefixMatcher::insert(string address, int routerNum){
    TrieNode* node = root;
    for (auto c : address) {
        int i = c-'0';
        if (node->children[i] == nullptr) {
            node->children[i] = new TrieNode;
        }
        node = node->children[i];
    }
    node->routerNumber = routerNum;
}

int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNode* node = root;
    for (int i=0; i<(int)(networkAddress.length()); i++){
        if (node->children[networkAddress[i]-'0'] == nullptr) break;
        node = node->children[networkAddress[i]-'0'];
    }
    return node->routerNumber;
}
