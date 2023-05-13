# ifndef AUTOCOMPLETE_H
# define AUTOCPMPLETE_H
# include <string>
# include <vector>


struct TrieNode{
    bool isEndOfWord = false;
    TrieNode* children[26] = {nullptr};
};

class Autocomplete{
private:
    TrieNode* root;
    void searchAllTrie(const TrieNode* curr, const std::string& prefix, std::vector<std::string>& results);
public:
    Autocomplete();
    std::vector<std::string> getSuggestions(std::string partialWord);
    void insert(std::string word);
};

# endif