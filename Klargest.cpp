#include <vector>
using namespace std;

int kth_largest(std::vector<int> values, int k) {
  vector<int> minHeap;
  for (int i=0; i<values.size(); i++) {
    minHeap.push_back(values[i]);
    int index = minHeap.size()-1;
    while (index>0 && minHeap[index]<minHeap[(index-1)/2]) {
      swap(minHeap[index], minHeap[(index-1)/2]);
      index = (index-1)/2;
    }
  }
  int result;
  for (int i=0; i<k; i++) {
    if (minHeap.empty()) {
      break; 
    }
    result = minHeap[0];
    minHeap[0] = minHeap[minHeap.size()-1];
    minHeap.pop_back();
    int index = 0;
    while (1) {
      int left_child = 2*index+1;
      int right_child = 2*index+2;
      int smallest = index;
      if (left_child<minHeap.size() && minHeap[left_child]<minHeap[smallest]) {
        smallest = left_child;
      }
      if (right_child<minHeap.size() && minHeap[right_child]<minHeap[smallest]) {
        smallest = right_child;
      }
      if (smallest == index) {
        break;
      }
      swap(minHeap[index], minHeap[smallest]);
      index = smallest;
    }
  }
  return result;
}
