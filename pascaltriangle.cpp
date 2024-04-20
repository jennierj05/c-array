
#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; i++) {
        int num = 1;

        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}


8)Greatest sum in array
#include <iostream>

using namespace std;

int maxSubArray(int nums[], int size) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < size; ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

int main() {
    int nums1[] = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Output: " << maxSubArray(nums1, sizeof(nums1) / sizeof(nums1[0])) << endl;
    
    return 0;
}

