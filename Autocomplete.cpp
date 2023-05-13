# include "Autocomplete.h"
using namespace std;

#include <string>
#include <vector>


Autocomplete::Autocomplete(){
    this->root = new TrieNode;
    this->insert("bin");
    this->insert("ball");
    this->insert("ballet");
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    TrieNode* curr = root;
    for (const auto c : partialWord){
        int i = c-'a';
        if (curr->children[i] == nullptr){
            return {};
        }
        curr = curr->children[i];
    }
    std::vector<std::string> results;
    searchAllTrie(curr, partialWord, results);
    return results;
}

void Autocomplete::insert(const std::string word){
    TrieNode* curr = root;
    for (auto c : word){
        int i = c-'a';
        if (curr->children[i] == nullptr){
            curr->children[i] = new TrieNode;
        }
        curr = curr->children[i];
    }
    curr->isEndOfWord = true;
}

void Autocomplete::searchAllTrie(const TrieNode* curr, const std::string& prefix, std::vector<std::string>& results){
    if (curr->isEndOfWord == true){
        results.push_back(prefix);
    }
    for (int i=0; i<26; i++){
        if (curr->children[i] != nullptr){
            searchAllTrie(curr->children[i], prefix+char('a'+i), results);
        }
    }
}
