/*Find the Factorial of a large number
Find the factorial of a large number. 

What is Factorial of a number?
Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal to n. 

*/

// C++ program to find large
// factorials using BigInteger
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

// Returns Factorial of N
ull factorial(int N)
{

	// Initialize result
	ull f = 1; // Or BigInt 1

	// Multiply f with 2, 3, ...N
	for (ull i = 2; i <= N; i++)
		f *= i;

	return f;
}

// Driver method
int main()
{
	int N = 20;
	cout << factorial(N) << endl;
}

