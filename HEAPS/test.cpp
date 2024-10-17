#include <iostream>
#include <queue>
#include <vector>

int main() {
     // Create a priority queue (max-heap by default)
     std::priority_queue<int> maxHeap;

     // Insert elements into the priority queue
     maxHeap.push(10);
     maxHeap.push(30);
     maxHeap.push(20);
     maxHeap.push(5);

     // Display and remove elements from the priority queue
     std::cout << "Elements in the max-heap priority queue: ";
     while (!maxHeap.empty()) {
          std::cout << maxHeap.top() << " ";
          maxHeap.pop();
     }
     std::cout << std::endl;

     // Create a priority queue (min-heap)
     std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

     // Insert elements into the priority queue
     minHeap.push(10);
     minHeap.push(30);
     minHeap.push(20);
     minHeap.push(5);

     // Display and remove elements from the priority queue
     std::cout << "Elements in the min-heap priority queue: ";
     while (!minHeap.empty()) {
          std::cout << minHeap.top() << " ";
          minHeap.pop();
     }
     std::cout << std::endl;

     return 0;
}