#include <iostream>
#include <algorithm>

using namespace std;

void twopair(int nums1[], int length1, int target1) {
    // Sort the array to apply two-pointer technique
    sort(nums1, nums1 + length1);

    int left = 0;  // Pointer for the leftmost element
    int right = length1 - 1;  // Pointer for the rightmost element

    while (left < right) {
        int sum = nums1[left] + nums1[right];

        if (sum == target1) {
            // If the sum matches the target, print the pair and update pointers
            cout << nums1[left] << " " << nums1[right] << endl;
            left++;
            right--;
        } else if (sum < target1) {
            // If the sum is less than the target, move the left pointer to the right
            left++;
        } else {
            // If the sum is greater than the target, move the right pointer to the left
            right--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int nums1[n];
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    int target1;
    cin >> target1;

    int length1 = sizeof(nums1) / sizeof(nums1[0]); // Calculate the length of the array
    cout << "Pairs with sum equal to target:" << endl;
    twopair(nums1, length1, target1); // Call the function to find pairs with the given sum

    return 0;
}

