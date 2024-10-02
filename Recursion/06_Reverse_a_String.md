
# Reverse a string






#### Code


```bash
#include<iostream>
using namespace std;

void reverseString(string& str,int i,int j){
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);
  
}

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str); //using getline to take input string with spaces

    cout<<"Original string:"<<str<<endl;

    reverseString(str,0,str.size()-1);

    cout<<"After reversing: "<<str<<endl;

    return 0;
}
```

