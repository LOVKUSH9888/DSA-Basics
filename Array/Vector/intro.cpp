//Vector = Dynamic array Class = Inbuilt
/*Arrays are fixed-size collections of elements of the same type*/
/*They are declared using the square bracket notation, like this: int myArray[5];*/


/*Vectors =dynamic arrays that can grow or shrink in size at runtime.*/
/*declared using the std::vector class, like this: std::vector<int> myVector;*/

//Array used for = Fixed size
//Vector used for = Dynamic Collection- comes with == Range checking & automatic resizing

//Link = https://www.geeksforgeeks.org/advantages-of-vector-over-array-in-c/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int array[100]; // Static Implementation
	int* arr = new int[100]; // Dynamic Implementation
	vector<int> v; // Vector's Implementation == We donnot need to give size 
	return 0;
}

