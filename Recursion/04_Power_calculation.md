
# GCD

The Euclidean algorithm calculates the GCD based on the following recursive relation:

gcd(a, b) = gcd(b, a % b) 

The recursion stops when b == 0, where gcd(a, 0) = a




## Code


```bash
#include<iostream>
using namespace std;

int powerCalculation(int a,int n){
    if(n<=0){
        return 1;
    }

    return a*powerCalculation(a,n-1);
}

int main(){
    int num,power;
    cout<<"Enter the number"<<endl;
    cin>>num;
    
    cout<<"Enter the power"<<endl;
    cin>>power;
    cout<<powerCalculation(num,power)<<endl;

    return 0;
}
```

