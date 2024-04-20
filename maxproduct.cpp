/*Maximum Product Subarray
Given an array that contains both positive and negative integers, the task is to find the product of the maximum product subarray. 

Examples:

Input: arr[] = {6, -3, -10, 0, 2}
Output:  180
Explanation: The subarray is {6, -3, -10}

Input: arr[] = {-1, -3, -10, 0, 60}
Output:   60
Explanation: The subarray is {60}
*/

// C++ program to find Maximum Product Subarray
#include <bits/stdc++.h>
using namespace std;

/* Returns the product
of max product subarray. */
int maxSubarrayProduct(int arr[], int n)
{
	// max positive product
	// ending at the current position
	int max_ending_here = arr[0];

	// min negative product ending
	// at the current position
	int min_ending_here = arr[0];

	// Initialize overall max product
	int max_so_far = arr[0];
	/* Traverse through the array.
	the maximum product subarray ending at an index
	will be the maximum of the element itself,
	the product of element and max product ending previously
	and the min product ending previously. */
	for (int i = 1; i < n; i++) {
		int temp = max({ arr[i], arr[i] * max_ending_here,
						arr[i] * min_ending_here });
		min_ending_here
			= min({ arr[i], arr[i] * max_ending_here,
					arr[i] * min_ending_here });
		max_ending_here = temp;
		max_so_far = max(max_so_far, max_ending_here);
	}
	return max_so_far;
}

// Driver code
int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Sub array product is "
		<< maxSubarrayProduct(arr, n);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)


Input: arr[] = {5, 6, 1, 2, 3, 4}
Output: 1
Explanation: 1 is the minimum element present in the array.

Input: arr[] = {1, 2, 3, 4}
Output: 1



// C++ code to implement the approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function to find the minimum value 
int findMin(int arr[], int n) 
{ 
	int min_ele = arr[0]; 

	// Traversing over array to 
	// find minimum element 
	for (int i = 0; i < n; i++) { 
		if (arr[i] < min_ele) { 
			min_ele = arr[i]; 
		} 
	} 

	return min_ele; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 5, 6, 1, 2, 3, 4 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 

	// Function call 
	cout << findMin(arr, N) << endl; 
	return 0; 
}


