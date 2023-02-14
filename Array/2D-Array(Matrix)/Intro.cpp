//Arr[rows][column]

//Initializing a 2D array...
int arr[4][2] = {    //rows = 4 & column = 2
{1234, 56},
{1212, 33},
{1434, 80},
{1312, 78}
} ;


//Another way

int arr[4][2] = {1234, 56, 1212, 33, 1434, 80, 1312, 78};


//taking Print of the 2d array

#include<iostream>
using namespace std; 
main( ) 
{  
	int arr[4][2] = {
		{ 10, 11 },
		{ 20, 21 },
		{ 30, 31 },
		{ 40, 41 }
		} ;
		
	int i,j;
	
	cout<<"Printing a 2D Array:\n";

	for(i=0;i<4;i++)    //Rows =4
	{
		for(j=0;j<2;j++)  //column = 2
		{
			cout<<"\t"<<arr[i][j];
		}
		cout<<endl;
	}
}

// C++ program to print elements of Three-Dimensional
// Array
#include <iostream>
using namespace std;

int main()
{
	// initializing the 3-dimensional array
	int x[2][3][2] = { { { 0, 1 }, { 2, 3 }, { 4, 5 } },
					{ { 6, 7 }, { 8, 9 }, { 10, 11 } } };

	// output each element's value
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 2; ++k) {
				cout << "Element at x[" << i << "][" << j
					<< "][" << k << "] = " << x[i][j][k]
					<< endl;
			}
		}
	}
	return 0;
}


//Taking input from the user
#include <iostream>
using namespace std;

int main()
{
    // declare a 2D array of size 100x100
    int array[100][100];
    int m, n;

    // take input for the number of rows (m) and columns (n) of the 2D array
    cin>>m>>n;

    // loop to take input for each element of the 2D array

    //Taking input row wise

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j];
        }
    }
    
    //Printing row wise

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j];
        }
        cout<<endl; //This will move to new row
    }

    // return 0 to indicate successful termination of the program
    return 0;
}

//input = 2 3 
//input = 1 2 3 4 5 6

//out put = 123
//out put = 456