//Vector = Dynamic array Class = Inbuilt
/*Arrays are fixed-size collections of elements of the same type*/
/*They are declared using the square bracket notation, like this: int myArray[5];*/


/*Vectors =dynamic arrays that can grow or shrink in size at runtime.*/
/*declared using the std::vector class, like this: std::vector<int> myVector;*/

//Array used for = Fixed size
//Vector used for = Dynamic Collection- comes with == Range checking & automatic resizing

//Link = https://www.geeksforgeeks.org/advantages-of-vector-over-array-in-c/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    //Array Syntax :

	int array[100]; // Static Implementation
	int* arr = new int[100]; // Dynamic Implementation



    //Vector Syntax :

    //Creating vector statically==This vector will automatically deleted once it reach memory
	vector<int> v; // Vector's Implementation == We donnot need to give size  == Vector keep doubling its size & we can insert as much element we wants
	vector<int> v1(10, -2); //giving the size = 10 & elemets are -2


    //Creating vector dynamically == Means we have to delete it by ourself

    vector<int> *vp = new vector<int> ();


     // Inserting Values in Vector
    v.push_back(1);  //Generally this will insert the element from the back
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

     cout << "Size of vector Before Removal=" << v.size() <<endl;


     //Printing the vector
     for(int i = 0; i<v.size(); i++){
       cout<<v[i]<<endl;
   }

   //ANother function for removing
   v.pop_back();

   //ANother function = Capacity

   v.capacity();
    
    return 0;


    //Sorting the vector
    sort(v1.begin(), v1.end());


}

