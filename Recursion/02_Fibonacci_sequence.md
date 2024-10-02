
# Fibonacci Sequence


Fibonacci Series

Nth term in the Fibonacci Series.

The Fibonacci Series is : 0 1 1 2 3 5 8...



#### Code


```bash
#include <iostream>
using namespace std;

int fib(int n) {
    if(n==1||n==2){
        return n-1;
    }
    
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
```
