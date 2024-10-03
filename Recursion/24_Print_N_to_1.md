
# Print numbers from N to 1





#### Code


```bash
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 1) {
        return;
    }

    cout << n << " ";

    printNumbers(n - 1);
}

int main() {
    int N;

    cout << "Enter a number N: ";
    cin >> N;

    printNumbers(N);

    return 0;
}



```

