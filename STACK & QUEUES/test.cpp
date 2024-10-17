#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
     std::vector<T> elements;

public:
     void push(const T& element) {
          elements.push_back(element);
     }

     void pop() {
          if (!elements.empty()) {
               elements.pop_back();
          } else {
               std::cerr << "Stack is empty!" << std::endl;
          }
     }

     T top() const {
          if (!elements.empty()) {
               return elements.back();
          } else {
               throw std::out_of_range("Stack is empty!");
          }
     }

     bool isEmpty() const {
          return elements.empty();
     }
};

template <typename T>
class Queue {
private:
     std::vector<T> elements;

public:
     void enqueue(const T& element) {
          elements.push_back(element);
     }

     void dequeue() {
          if (!elements.empty()) {
               elements.erase(elements.begin());
          } else {
               std::cerr << "Queue is empty!" << std::endl;
          }
     }

     T front() const {
          if (!elements.empty()) {
               return elements.front();
          } else {
               throw std::out_of_range("Queue is empty!");
          }
     }

     bool isEmpty() const {
          return elements.empty();
     }
};

int main() {
     Stack<int> stack;
     stack.push(1);
     stack.push(2);
     stack.push(3);
     std::cout << "Stack top: " << stack.top() << std::endl;
     stack.pop();
     std::cout << "Stack top after pop: " << stack.top() << std::endl;

     Queue<int> queue;
     queue.enqueue(1);
     queue.enqueue(2);
     queue.enqueue(3);
     std::cout << "Queue front: " << queue.front() << std::endl;
     queue.dequeue();
     std::cout << "Queue front after dequeue: " << queue.front() << std::endl;

     return 0;
}