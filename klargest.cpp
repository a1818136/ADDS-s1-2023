#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int kth_largest(std::vector<int> values, int k) {
  priority_queue<int, vector<int>, greater<int>> prior_queue;
  for (int value : values) {
    prior_queue.push(value);

    if (prior_queue.size() > k) {
      prior_queue.pop();
    }
  }
  return prior_queue.top();
}