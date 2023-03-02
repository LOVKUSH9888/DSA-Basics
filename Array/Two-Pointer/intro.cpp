//Pointer in c++ :-)
///Pointer = Pointers are symbolic representations of addresses
//In memories - Symbol Table is created that basically stores the value in Bytes
///Use = Iterate over Array

#include <iostream>
using namespace std;

int main()
{
    
    int i;
    cout <<&i<<endl;     //Ampercent of i == Address of i

    //lets create a Pointer now for storing the above I value 
    int * p = &i;
    cout<<p<<endl;

    //Printing the again i value = Dereference Operator  == *p
    cout << *p << endl;

    //Now if I increase the value of i
    i++; //it means increment i = 1 + 10 = 11;

    ///By doint the above case the Pointer value will also increase
    return 0;
}






// Used for searching pairs in a sorted array.
/*used to solve problems that involve searching, sorting, or manipulating arrays, strings, or linked lists. This approach involves using two pointers (indices) to traverse an array or list in a specific way to solve the problem.

Here are some notes for beginners in C++ who want to learn the two pointer approach:

1.Understand the problem statement: Before applying the two pointer approach, make sure you understand the problem statement and the input/output format. This will help you identify whether the two pointer approach is applicable to the problem.

2.Choose the appropriate type of two pointer approach: There are different types of two pointer approaches such as the sliding window technique, two sum, merge two sorted arrays, and so on. Choose the appropriate type based on the problem requirements.

3.Initialize the pointers: Initialize the two pointers to the appropriate starting positions. For example, if you are using the sliding window technique, initialize the left pointer to the first element and the right pointer to the window size.

4.Traverse the array or list: Traverse the array or list using the two pointers while applying the specific technique. For example, in the sliding window technique, you would move the left and right pointers to adjust the window size.*/

/*5.Update the solution: As you traverse the array or list, update the solution based on the problem requirements. For example, in the sliding window technique, you would update the maximum or minimum sum, length, or count.

6.Check the termination condition: Once the traversal is complete, check the termination condition to ensure that the two pointers have not crossed over each other. If they have, then you have processed all the elements.

7.Debugging: Debugging is an important step to ensure that your two pointer approach is correct. Use print statements or debuggers to check the values of the pointers and the updated solution at each step of the traversal.*/


//Example of sliding wimdow:-
int left = 0, right = 0;
int sum = 0;
int ans = INT_MAX;
while (right < n) {
    sum += arr[right];
    while (sum >= target) {
        ans = min(ans, right - left + 1);
        sum -= arr[left];
        left++;
    }
    right++;
}
if (ans == INT_MAX) {
    ans = 0;
}
return ans;
