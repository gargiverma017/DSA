
# GCD

The Euclidean algorithm calculates the GCD based on the following recursive relation:

gcd(a, b) = gcd(b, a % b) 

The recursion stops when b == 0, where gcd(a, 0) = a




## Code


```bash
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<gcd(a,b)<<endl;

    return 0;
}
```

