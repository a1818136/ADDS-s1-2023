# ifndef QUICKSORT_H
# define QUICKSORT_H
# include "Sort.h"
# include <vector>

class QuickSort:public Sort{
private:
    void sort(std::vector<int>& list, int l, int r);
public:
    std::vector<int> sort(std::vector<int> list);
};

# endif