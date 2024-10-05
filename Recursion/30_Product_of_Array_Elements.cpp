#include<iostream>
using namespace std;

int arrayProduct(int arr[], int n) {
   
    if (n <= 0) {
        return 1;
    }
    
    return arr[n - 1] * arrayProduct(arr, n - 1);
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = arrayProduct(arr, n); 
    cout << "Sum of the array is: " << sum << endl; 
    return 0;
}
