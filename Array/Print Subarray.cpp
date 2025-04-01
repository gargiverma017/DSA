#include<bits/stdc++.h>
using namespace std;

void printSubarray(vector<int>&arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}


int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //print subarray
    printSubarray(arr,n);

}
