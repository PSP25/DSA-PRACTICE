#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>

int main() {
     // Vector
     std::vector<int> vec = {1, 2, 3, 4, 5};
     vec.push_back(6);
     for (int v : vec) std::cout << v << " ";
     std::cout << std::endl;

     // List
     std::list<int> lst = {1, 2, 3, 4, 5};
     lst.push_back(6);
     for (int l : lst) std::cout << l << " ";
     std::cout << std::endl;

     // Deque
     std::deque<int> deq = {1, 2, 3, 4, 5};
     deq.push_back(6);
     for (int d : deq) std::cout << d << " ";
     std::cout << std::endl;

     // Set
     std::set<int> st = {1, 2, 3, 4, 5};
     st.insert(6);
     for (int s : st) std::cout << s << " ";
     std::cout << std::endl;

     // Unordered Set
     std::unordered_set<int> ust = {1, 2, 3, 4, 5};
     ust.insert(6);
     for (int us : ust) std::cout << us << " ";
     std::cout << std::endl;

     // Map
     std::map<int, std::string> mp = {{1, "one"}, {2, "two"}, {3, "three"}};
     mp[4] = "four";
     for (const auto& p : mp) std::cout << p.first << ": " << p.second << " ";
     std::cout << std::endl;

     // Unordered Map
     std::unordered_map<int, std::string> ump = {{1, "one"}, {2, "two"}, {3, "three"}};
     ump[4] = "four";
     for (const auto& p : ump) std::cout << p.first << ": " << p.second << " ";
     std::cout << std::endl;

     // Stack
     std::stack<int> stk;
     stk.push(1);
     stk.push(2);
     stk.push(3);
     while (!stk.empty()) {
          std::cout << stk.top() << " ";
          stk.pop();
     }
     std::cout << std::endl;

     // Queue
     std::queue<int> que;
     que.push(1);
     que.push(2);
     que.push(3);
     while (!que.empty()) {
          std::cout << que.front() << " ";
          que.pop();
     }
     std::cout << std::endl;

     // Priority Queue
     std::priority_queue<int> pq;
     pq.push(1);
     pq.push(2);
     pq.push(3);
     while (!pq.empty()) {
          std::cout << pq.top() << " ";
          pq.pop();
     }
     std::cout << std::endl;

     return 0;
}