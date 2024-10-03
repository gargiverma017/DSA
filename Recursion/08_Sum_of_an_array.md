
# Sum of an Array





#### Code


```bash
#include<iostream>
using namespace std;

int sumArray(int arr[], int n) {
   
    if (n <= 0) {
        return 0;
    }
    
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    
    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n]; // Declare an array of size 'n'

    // Input elements of the array from the user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = sumArray(arr, n); // Call the recursive function
    cout << "Sum of the array is: " << sum << endl; // Output the sum
    
    return 0;
}
```

