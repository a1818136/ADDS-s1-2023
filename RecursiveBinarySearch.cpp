# include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int>& list, int l, int r, int t) {
    if (l > r) {
        return false;
    }

    int m = l+(r-l)/2;
    if (list[m] == t) {
        return m;
    } 
    else if (list[m] > t) {
        return search(list, l, m - 1, t);
    } 
    else {
        return search(list, m + 1, r, t);
    }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int t){
    return this->search(list, 0, list.size()-1, t);
}