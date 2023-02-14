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
