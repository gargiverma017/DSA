
# Print numbers from 1 to N





#### Code


```bash
#include <iostream>
using namespace std;

void printNumbers(int i, int N) {
    if (i > N) {
        return;
    }

    cout << i << " ";

    printNumbers(i + 1, N);
}

int main() {
    int N;

    cout << "Enter a number N: ";
    cin >> N;

    printNumbers(1, N);

    return 0;
}


```

