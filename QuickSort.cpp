# include "QuickSort.h"
using namespace std;

void QuickSort::sort(std::vector<int>& list, int l, int r){
    if (list.size() <= 1) return ;

    int pivot, pos, j;
    int i = l;
    if (list.size() > 3) {
        pivot = list.at(2);
        pos = 2;
        j = r;
    }
    else {
        pivot = list.back();
        pos = r;
        j = r-1;
    }
    while (l <= r){
        while (list.at(i) < pivot){
            i++;
        }
        while (list.at(j) > pivot){
            j--;
        }
        if (i < j){ 
            swap(list[i], list[j]);
        }
    }
    swap(list[pos], list[i]);
    sort(list, l, j - 1);
    sort(list, j + 1, r);
}

vector<int> QuickSort::sort(std::vector<int> list){
    vector<int> data = list;
    this->sort(data, 0, data.size()-1);
    return data;
}

/*
vector<int> QuickSort::sort(vector<int> list, vector<int> k){
    if (list.size()-1 <= k.size()){
        return list;
    }
    vector<int> new_k = k;
    vector<int> new_list;
    if (k.size() != 0){
        int k_length = k.size();
        int list_count = 0;
        int k_count = 0;
        vector<vector<int>> vec;
        while(k_length != k_count){
            vector<int> sub_vector;
            if (list_count != k.at(k_count)){
                while(list_count != k.at(k_count)){
                    sub_vector.push_back(list.at(list_count));
                    list_count++;
                }
                vec.push_back(sub_vector);
                sub_vector.clear();
            }
            sub_vector.push_back(list.at(list_count));
            vec.push_back(sub_vector);
            sub_vector.clear();
            list_count++;
            k_count++;
        }
        int vec_length = vec.size();
        for (int i=0; i<vec_length; i++){
            if (vec.at(i).size() >= 1){
                int pivot = partition(vec.at(i));
                int j=0;
                while(j<new_k.size()){
                    if (pivot==new_k.at(j)){
                        break;
                    }
                    if (pivot<new_k.at(j)){
                        new_k.insert(new_k.begin()+j,pivot);
                        break;
                    }
                    j++;
                }
            }
            else {
                int pivot = vec.at(i).at(0);
                int j=0;
                while(j<new_k.size()){
                    if (pivot==new_k.at(j)){
                        break;
                    }
                    if (pivot<new_k.at(j)){
                        new_k.insert(new_k.begin()+j,pivot);
                        break;
                    }
                    j++;
                }
            }
               
        }
    }
    else {
        new_list = list;
        int pivot = partition(new_list);
        new_k.push_back(pivot);
    }
    sort(new_list, new_k);
 }





std::vector<int> QuickSort::sort(std::vector<int> list){
    vector<int> k;
    return sort(list, k);
}
*/