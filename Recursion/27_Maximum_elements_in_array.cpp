#include<iostream>
using namespace std;

int maxElement(int arr[], int n) {
   
   //if only one element is left then return it
    if(n==1){
        return arr[0];
    }

    int maximum=maxElement(arr,n-1);

    return max(arr[n-1],maximum);
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

    int maximum = maxElement(arr, n); 
    cout << "Sum of the array is: " << maximum << endl; 
    return 0;
}
