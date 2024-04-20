//Placement Array//
#include <iostream>
using namespace std;

void isSubset(int arr1[], int arr2[], int m, int n) {
    int i, j;
    int flag;

    for (i = 0; i < m; i++) {
        flag = 1;
        for (j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                flag = 0;
                break;
            }
        }
        if (flag==1)
            break;
    }

    if (j == n)
        cout << "Yes, arr2 is a subset of arr1." << endl;
    else
        cout << "No, arr2 is not a subset of arr1." << endl;
}

// Driver code
int main() {
    int n, m;
    cin >> n;
    cin >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    isSubset(arr1, arr2, n, m);

    return 0;
}



