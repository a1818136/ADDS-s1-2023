# include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int>& list, int l, int r, int t) {
    if (l > r) {
        return false;
    }

    int m = l+(r-l)/2;
    if (list[m] == t) {
        return true;
    } 
    else if (list[m] > t) {
        return search(list, l, m - 1, t);
    } 
    else {
        return search(list, m + 1, r, t);
    }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int t){
    std::vector<int> list1 =list;
    return this->search(list1, 0, list.size()-1, t);
}