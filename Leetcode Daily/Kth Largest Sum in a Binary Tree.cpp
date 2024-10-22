/*Approach
1)Create an empty list res to store the sums of each level.
2)Use a queue q for level-order traversal, starting with the root node.
3)For each level, calculate the sum of node values by processing all nodes in the queue.
4)Add the left and right children of each node (if they exist) to the queue for the next level.
5)Append the sum of each level to the res list.
6)If k is greater than the number of levels, return -1.
7)Sort the list res in decreasing order.
8)Return the k-th largest sum (which is at index k-1).
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        //level sum for each level
        vector<long long>res;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int n=q.size();
            long long sum=0;
            
            //while processing all nodes at current level
            while(n--){
                TreeNode* node=q.front();
                q.pop();
                sum+= node->val;

                //if right or left of node exist push them into queue
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

            res.push_back(sum);

        }

        //return if kth not exist
        if(k>res.size()){
            return -1;
        }
        
        //decreasing order->add ->greater<datatype>();
        sort(res.begin(),res.end(),greater<long long>());

        return res[k-1];


        
    }
};
