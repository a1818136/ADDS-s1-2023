# ifndef PREFIX_H
# define PREFIX_H
# include <string>
# include <vector>
struct TrieNode {
    TrieNode* children[2] = {nullptr};
    int routerNumber;
};
class PrefixMatcher {
private:
    TrieNode* root;
public:
    PrefixMatcher();
    void insert(std::string address, int router);
    int selectRouter(std::string networkAddress);
};
# endif