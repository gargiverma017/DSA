
# Binary Search (Recursion)





#### Code


```bash
#include <iostream>
using namespace std;


int binarySearch(int arr[], int s, int e, int target) {
    if (s > e) {
        return -1;
    }

   
    int mid = s + (e - s) / 2;

   
    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] > target) {
        return binarySearch(arr, s, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, e, target);
}

int main() {
    int n, target;

    
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    int arr[n];

  
    cout << "Enter " << n << " sorted elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Enter the element to search: ";
    cin >> target;

   
    int result = binarySearch(arr, 0, n - 1, target);

   
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

```

