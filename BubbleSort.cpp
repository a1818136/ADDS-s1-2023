# include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    vector<int> list1 = list;
    int length = list1.size();
    int temp;
    for (int i=1; i<length; i++){
        for (int j=0; j<length-i; j++){
            if (list1.at(j) > list1.at(j+1)){
                list1.at(j) = temp;
                list1.at(j) = list1.at(j+1);
                list1.at(j+1) = temp;
            }
        }
    }
    return list1;
}