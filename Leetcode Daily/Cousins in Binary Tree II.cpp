//Approach 01: Two Passes

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>levelSum;
        
        //calculate the level sum
        while(!q.empty()){
            int n=q.size();
            int sum=0;

            while(n--){
                TreeNode* node=q.front();
                q.pop();

                sum+=node->val;

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

            levelSum.push_back(sum);

        }


        //replace the values of node (levelSum[i]-siblingsum)
        q.push(root);
        root->val=0; //no cousin
        int i=1; //since we have to calculate from level 1 not 0(root)

        while(!q.empty()){
            int n=q.size();

            while(n--){
                TreeNode* node=q.front();
                q.pop();
                

                //siblingSum=leftNode + rightNode
                int siblingSum=
                    (node->left!=NULL ? node->left->val:0)+
                    (node->right!=NULL ? node->right->val:0);
                
                //changing values of left and right nodes while being at parent
                if(node->left){
                    node->left->val=levelSum[i]-siblingSum;
                    q.push(node->left);
                }

                if(node->right){
                    node->right->val=levelSum[i]-siblingSum;
                    q.push(node->right);
                }

            }

            i++;
        }

        return root;
        
    }
};
