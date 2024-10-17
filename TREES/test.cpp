#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
     TreeNode* insertLevelOrder(const vector<int>& arr, int i) {
          if (i >= arr.size()) return nullptr;
          TreeNode* root = new TreeNode(arr[i]);
          root->left = insertLevelOrder(arr, 2 * i + 1);
          root->right = insertLevelOrder(arr, 2 * i + 2);
          return root;
     }

     void inOrder(TreeNode* root) {
          if (root == nullptr) return;
          inOrder(root->left);
          cout << root->val << " ";
          inOrder(root->right);
     }
};

int main() {
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
     BinaryTree tree;
     TreeNode* root = tree.insertLevelOrder(arr, 0);
     cout << "In-order traversal of the binary tree: ";
     tree.inOrder(root);
     cout << endl;
     return 0;
}