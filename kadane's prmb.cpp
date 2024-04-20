Longest Substring without repeat


#include <iostream>
using namespace std;

int lis(int arr[], int n) {
    int lis[n], max_len = 0;

    // Initialize LIS values for all indexes
    for (int i = 0; i < n; i++)
        lis[i] = 1;

    // Compute optimized LIS values in bottom-up manner
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    // Pick maximum of all LIS values
    for (int i = 0; i < n; i++)
        if (max_len < lis[i])
            max_len = lis[i];

    return max_len;
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of LIS is " << lis(arr, n);
    return 0;
}




