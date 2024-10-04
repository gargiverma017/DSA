#include<iostream>
using namespace std;

int sumOfNumbers(int n){
    if(n<=0){
        return 0;
    }

    return n + sumOfNumbers(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<sumOfNumbers(num)<<endl;

    return 0;
}
