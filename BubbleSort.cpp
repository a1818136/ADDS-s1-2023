# include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    int length = list.size();
    int temp;
    for (int i=1; i<length; i++){
        for (int j=0; j<length-i; j++){
            if (list.at(j) > list.at(j+1)){
                list.at(j) = temp;
                list.at(j) = list.at(j+1);
                list.at(j+1) = temp;
            }
        }
    }
}