#include<iostream>
using namespace std;

int countDigits(int n){
    if(n<=0){
        return 0;
    }

    return 1 + countDigits(n/10);
}

int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<countDigits(num)<<endl;

    return 0;
}
