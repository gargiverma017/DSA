
# Palindrome Check






#### Code


```bash
#include<iostream>
using namespace std;

bool palindromeCheck(string& str,int i,int j){
    if(i>=j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }

    return palindromeCheck(str,i+1,j-1);
  
}

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str); //using getline to take input string with spaces

    if(palindromeCheck(str,0,str.size()-1)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
```

