
// C++ program sort array in even and odd manner. 
// The odd numbers are to be sorted in descending 
// order and the even numbers in ascending order 
#include <bits/stdc++.h> 

#include<iostream>
using namespace std; 

// To do two way sort. First sort even numbers in 
// ascending order, then odd numbers in descending 
// order. 
void twoWaySort(int arr[], int n) 
{ 
	//To store odd Numbers 
	vector<int> odd; 
	
	//To store Even Numbers 
	vector<int> even; 
	
	for(int i=0;i<n;i++){ 
		//If number is even push them to even vector 
		if(arr[i]%2==0){even.push_back(arr[i]);} 
		
		//If number is odd push them to odd vector 
		else{odd.push_back(arr[i]);} 
	} 
		//Sort even array in ascending order 
		sort(even.begin(),even.end()); 
		
		//Sort odd array in descending order 
		sort(odd.begin(),odd.end(),greater<int>()); 
		
		
	int i=0; 
		
	//First store odd numbers to array 
	for(int j=0;j<odd.size();j++){ 
		arr[i]=odd[j]; 
		i++; 
	} 
		
	//Then store even numbers to array 
	for(int j=0;j<even.size();j++){ 
		arr[i]=even[j]; 
		i++; 
	} 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 3, 2, 7, 5, 4 }; 
	int n = sizeof(arr) / sizeof(int); 
	twoWaySort(arr, n); 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 


