
# Permutations of a String





#### Code


```bash
#include <iostream>
#include <string>
using namespace std;



void permute(string &str, int left, int right) {
   
    if (left == right) {
        cout << str << endl;
    }
    else {
        for (int i = left; i <= right; i++) {
            swap(str[left], str[i]); 
            permute(str, left + 1, right);  
            swap(str[left], str[i]);  //Backtrack
        }
    }
}

int main() {
    string str;

    // Input the string from the user
    cout << "Enter the string: ";
    cin >> str;

    // Call the permute function
    permute(str, 0, str.length() - 1);

    return 0;
}


```

