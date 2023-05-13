# ifndef PREFIX_H
# define PREFIX_H
# include <string>
# include <vector>
class TrieNode {
public:
    TrieNode* children[2];
    int routerNumber;
    TrieNode() {
        children[0] = nullptr;
        children[1] = nullptr;
        routerNumber = -1;
    }
};
class PrefixMatcher {
private:
    TrieNode* root;
public:
    PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);
};
# endif