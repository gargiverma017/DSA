
# Power Calculation





#### Code


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

