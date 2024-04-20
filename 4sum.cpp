 //4 quad sum equal to k
#include <iostream>
#include <algorithm>

using namespace std;

void fourSum(int nums[], int length, int target) {
    sort(nums, nums + length); // Sorting the input array

    for (int i = 0; i < length - 3; ++i) {
      

        for (int j = i + 1; j < length - 2; ++j) {
           

            int left = j + 1;
            int right = length - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    cout << nums[i] << " " << nums[j] << " " << nums[left] << " " << nums[right] << endl;
                    ++left;
                    --right;
                } else if (sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int nums1[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
    int target1 = 0;
    int length1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Example 1 Output:" << endl;
    fourSum(nums1, length1, target1);

    return 0;
}


