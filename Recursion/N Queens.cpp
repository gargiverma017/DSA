//////////////////////////////////////////////////////////////////////////////////
//BRUTE FORCE 
/////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    bool isSafe(int row,int col,vector<string>& board,int n){
        //we will perform operations on i and j ---->>>----i as row and j as col

        //check west
        int i=row;
        int j=col;
        while(j>=0){
            if(board[i][j]=='Q') return false;
            j--;
        }

        //check north-west
        i=row;
        j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            i--;
            j--;
        }

        //check south-west
        i=row;
        j=col;
        while(i<n && j>=0){
            if(board[i][j]=='Q') return false;
            i++;
            j--;
        }

        return true;
    }

    void solve(int col,vector<string>& board,vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(board); //is col came to n
            return;
        }
        for(int i=0;i<n;i++){ //here i is row...we are traversing rows in column
            if(isSafe(i,col,board,n)){
            board[i][col]='Q';
            solve(col+1,board,ans,n);
            board[i][col]='.'; //backtacking
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');

        for(int i=0;i<n;i++){
            board[i]=s;
        }

        solve(0,board,ans,n);

        return ans;
        
    }
};




/////////////////////////////////////////////////////////////////////////////////
//OPTIMISED APPROACH
/////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    
    void solve(int col,vector<string>& board,vector<vector<string>>&ans,int n
                ,vector<int>&leftRow,vector<int>&upperDiagonal,vector<int>&lowerDiagonal){
        if(col==n){
            ans.push_back(board); //is col came to n
            return;
        }
        for(int i=0;i<n;i++){ //here i is row...we are traversing rows in column

            //check condition
            if(leftRow[i]==0 && upperDiagonal[n-1 + col-i]==0 && lowerDiagonal[i+col]==0){
            
            //place the queen and mark everything 1
            board[i][col]='Q';
            leftRow[i]=1;
            upperDiagonal[n-1+col-i]=1;
            lowerDiagonal[i+col]=1;
    
            solve(col+1,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);
            
            //backtracking and mark everything back
            board[i][col]='.'; 
            leftRow[i]=0;
            upperDiagonal[n-1+col-i]=0;
            lowerDiagonal[i+col]=0;
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');

        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        //array initialised with 0
        vector<int>leftRow(n,0);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal(2*n-1,0);

        solve(0,board,ans,n,leftRow,upperDiagonal,lowerDiagonal);

        return ans;
        
    }
};
