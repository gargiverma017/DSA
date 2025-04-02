void input(vector<vector<int>>&matrix,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(vector<vector<int>>&matrix,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int row;
    int col;

    cout<<"Enter the number of row"<<endl;
    cin>>row;

    cout<<"Enter the number of column"<<endl;
    cin>>col;
    vector<vector<int>> matrix1(row,vector<int>(col));
    vector<vector<int>>matrix2(row,vector<int>(col));

    cout<<"Enter the input in first matrix"<<endl;
    input(matrix1,row,col);

    cout<<"Enter the input in second matrix"<<endl;
    input(matrix2,row,col);

    sum(matrix1,matrix2);
}
