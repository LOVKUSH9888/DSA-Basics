#include <iostream>
using namespace std;

int main()
{
    //Intitalization of 2d array
    int x[3][2] = {{0,1}, {1,2}, {2,3}};

    //Logic for printing rows & columns
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <2; j++){
            cout<<x[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}


//Giving the value of column is mandatory

//Passing the value in a function

void func(int m, int n, int arr[][n])       //function prototype

// The following program works only if your compiler is C99 compatible.

#include <iostream>
using namespace std;

// n must be passed before the 2D array

void print(int m, int n, int arr[][n])
{
	int i, j;
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
		printf("%d ", arr[i][j]);
}

int main()
{
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int m = 3, n = 3;
	print(m, n, arr);
	return 0;
}




