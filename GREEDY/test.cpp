#include <iostream>
#include <vector>
#include <algorithm>

// Function to demonstrate a greedy algorithm
// Example: Activity Selection Problem
void activitySelection(std::vector<std::pair<int, int>>& activities) {
     // Sort activities based on their finish time
     std::sort(activities.begin(), activities.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
          return a.second < b.second;
     });

     std::cout << "Selected activities: " << std::endl;

     // The first activity always gets selected
     int lastFinishTime = activities[0].second;
     std::cout << "(" << activities[0].first << ", " << activities[0].second << ")" << std::endl;

     // Consider the rest of the activities
     for (size_t i = 1; i < activities.size(); ++i) {
          if (activities[i].first >= lastFinishTime) {
               std::cout << "(" << activities[i].first << ", " << activities[i].second << ")" << std::endl;
               lastFinishTime = activities[i].second;
          }
     }
}

int main() {
     // List of activities with their start and finish times
     std::vector<std::pair<int, int>> activities = {
          {1, 3}, {2, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9}
     };

     activitySelection(activities);

     return 0;
}