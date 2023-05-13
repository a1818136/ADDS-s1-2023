# include "Autocomplete.h"
using namespace std;

Autocomplete::Autocomplete(){
    TrieNode* root = new TrieNode;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    TrieNode* curr = root;
    for (auto c : partialWord){
        if (curr->children){
            
        }
    }

}

void Autocomplete::insert(std::string word){

}