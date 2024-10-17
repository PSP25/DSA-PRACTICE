#include <iostream>

struct Node {
     int data;
     Node* next;
};

class LinkedList {
public:
     LinkedList() : head(nullptr) {}

     void createFromArray(int arr[], int size) {
          if (size == 0) return;
          head = new Node{arr[0], nullptr};
          Node* current = head;
          for (int i = 1; i < size; ++i) {
               current->next = new Node{arr[i], nullptr};
               current = current->next;
          }
     }

     void display() const {
          Node* current = head;
          while (current != nullptr) {
               std::cout << current->data << " ";
               current = current->next;
          }
          std::cout << std::endl;
     }

     ~LinkedList() {
          Node* current = head;
          while (current != nullptr) {
               Node* next = current->next;
               delete current;
               current = next;
          }
     }

private:
     Node* head;
};

int main() {
     int arr[] = {1, 2, 3, 4, 5};
     int size = sizeof(arr) / sizeof(arr[0]);

     LinkedList list;
     list.createFromArray(arr, size);
     list.display();

     return 0;
}