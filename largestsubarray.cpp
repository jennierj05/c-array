/*Find the length of largest subarray with 0 sum
Given an array arr[] of length N, find the length of the longest sub-array with a sum equal to 0.

Examples:

Input: arr[] = {15, -2, 2, -8, 1, 7, 10, 23}
Output: 5
Explanation: The longest sub-array with elements summing up-to 0 is {-2, 2, -8, 1, 7}

Input: arr[] = {1, 2, 3}
Output: 0
Explanation: There is no subarray with 0 sum*/



// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Returns length of the largest
// subarray with 0 sum
int maxLen(int arr[], int N)
{
	// Initialize result
	int max_len = 0; 

	// Pick a starting point
	for (int i = 0; i < N; i++) {

		// Initialize curr_sum for
		// every starting point
		int curr_sum = 0;

		// Try all subarrays starting with 'i'
		for (int j = i; j < N; j++) {
			curr_sum += arr[j];

			// If curr_sum becomes 0, 
			// then update max_len
			// if required
			if (curr_sum == 0)
				max_len = max(max_len, j - i + 1);
		}
	}
	return max_len;
}

// Driver's Code
int main()
{
	int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
	int N = sizeof(arr) / sizeof(arr[0]);

// Function call
	cout << "Length of the longest 0 sum subarray is "
		<< maxLen(arr, N);
	return 0;
}


