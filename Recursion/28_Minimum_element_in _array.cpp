#include<iostream>
using namespace std;

int minElement(int arr[], int n) {
   
   //if only one element is left then return it
    if(n==1){
        return arr[0];
    }

    int minimum=minElement(arr,n-1);

    return min(arr[n-1],minimum);
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

    int minimum = minElement(arr, n); 
    cout << "Sum of the array is: " << minimum << endl; 
    return 0;
}
