# ifndef RBS_H
# define RBS_H
# include "QuickSort.h"
# include <vector>

class RecursiveBinarySearch{
private:
    bool search(std::vector<int>& list, int l, int r, int t);
public:
    bool search(std::vector<int>, int);
};

# endif