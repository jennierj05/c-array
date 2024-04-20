/*Find duplicates in O(n) time and O(1) extra space | Set 1
Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and use only constant memory space.

Note: The repeating element should be printed only once.

Example: 

Input: n=7 , array[]={1, 2, 3, 6, 3, 6, 1}
Output: 1, 3, 6
Explanation: The numbers 1 , 3 and 6 appears more than once in the array.*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(int arr[], int n) {
    vector<int> resultSet;

    for (int i = 0; i < n; ++i) {
        // Get the index, the element corresponds to
        int index = abs(arr[i]) - 1;

        // If the number is already negative, it means we are encountering it twice
        if (arr[index] < 0)
            resultSet.push_back(index + 1);

        // Flip the number at the index to negative
        arr[index] *= -1;
    }

    return resultSet;
}

int main() {
    int n = 7;
    int arr[] = {1, 2, 3, 6, 3, 6, 1};

    cout << "Duplicate elements are: ";
    vector<int> duplicates = findDuplicates(arr, n);
    for (int num : duplicates) {
        cout << num << " ";
    }
    
    return 0;
}

