#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Graph {
private:
     unordered_map<int, vector<int>> adjList;

public:
     // Add an edge from vertex u to vertex v
     void addEdge(int u, int v) {
          adjList[u].push_back(v);
     }

     // Print the adjacency list of the graph
     void printGraph() {
          for (auto& pair : adjList) {
               cout << pair.first << ": ";
               for (int v : pair.second) {
                    cout << v << " ";
               }
               cout << endl;
          }
     }
};

int main() {
     Graph g;
     g.addEdge(0, 1);
     g.addEdge(0, 2);
     g.addEdge(1, 2);
     g.addEdge(2, 0);
     g.addEdge(2, 3);
     g.addEdge(3, 3);

     g.printGraph();

     return 0;
}