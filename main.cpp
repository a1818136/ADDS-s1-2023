# include "BubbleSort.h"
# include "QuickSort.h"
# include "RecursiveBinarySearch.h"
# include <iostream>
# include <string>
#include <sstream>
using namespace std;
int main(){
    
    BubbleSort a;
    QuickSort b;
    RecursiveBinarySearch c;
    vector<int> list;

    int value;
    string values;

    getline(cin,values);
    istringstream ss(values); 
    while (ss >> value) {
        list.push_back(value);
    }
    

    vector<int> l=b.sort(list);

    bool check = c.search(l, 1);
    if (check == true){
        cout<<"true";
        for (int i=0; i<l.size(); i++){
            cout<<" "<<l[i];
        }
    }
    else {
        cout<<"false";
        for (int i=0; i<l.size(); i++){
            cout<<" "<<l[i];
            
        }
    }
    cout<<endl;
}
   