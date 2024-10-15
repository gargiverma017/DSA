//4 directions
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void maze(int sr,int sc,int er,int ec,string s,vector<vector<bool>>& iSVisited){
    if(sr<0 || sc<0){
        return;
    }
    if(sr>er || sc>ec){
        return;
    }
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }

    if(iSVisited[sr][sc]==true){
        return;
    }
    iSVisited[sr][sc]=true;
    //right
    maze(sr,sc+1,er,ec,s+'R',iSVisited);

    //down
    maze(sr+1,sc,er,ec,s+'D',iSVisited);

    //left
    maze(sr,sc-1,er,ec,s+'L',iSVisited);

    //up
    maze(sr-1,sc,er,ec,s+'U',iSVisited);

    iSVisited[sr][sc]=false;


}

int main(){
    int row=3;
    int col=3;
    string s="";
    //explicitly specify the size during initialization
    vector<vector<bool>>isVisited(row,vector<bool>(col,false));

    maze(0,0,row-1,col-1,s,isVisited);

}
