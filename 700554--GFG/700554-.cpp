/* Node Structure
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = nullptr;
        right = nullptr;
    }
}
*/

class Solution {
  public:
    int solve(Node* root, int& ans) {
        // Base Case
        if(root == NULL)  return 0;
        if(root->left == NULL && root->right == NULL)  return root->data;

        
        int lSub = solve(root->left, ans);
        int rSub = solve(root->right, ans);

        
        if(root->left != NULL && root->right != NULL) {
            ans = max(ans, lSub+rSub+root->data);
            return max(lSub, rSub) + root->data;
        }

        
        if(root->left != NULL) {
            return lSub+root->data;
        }

        
        if(root->right != NULL) {
            return rSub+root->data;
        }
    }
    int maxPathSum(Node *root) {
        
        int ans = INT_MIN;

        solve(root, ans);

        if(ans == INT_MIN) {
            return -1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna