int a ; //4 bytes if memory
int a[16]; //16 boxes each of size 4 bytes

// A "contiguous" array is just an array stored in an unbroken block of memory
//Contigueously = boxes are not connected
//Always write same type of array only./
//Example =

#include <iostream>
usinng namespace std;

int main() {
    int a [10];
    a[0] = 2;
    a[4] = 5;

    cout <<a[0]<<a[4]<<endl;

    return 0;
}



//Intialization of array

int a[4] = {1, 2, 3};

// taking print out 

cout << a[0] <<a[1]<< a[2]<< a[3] <<endl;

//Optimized version of printing array is using for loop

here n  = 4; //LEngth of array

for ( int i = 0; i <n; i++ ){
    cout << a[i] << endl;
}  


// Garbage value 
if we print only the first
int a[10]; // if we print it out this will give the garbage value to us later

// We can correct printing it by print : 
int a[10];

for ( int i = 0; i < 10; i++ ){

    a[i] = i*i;  //Logic 

    cout << a[i] << endl;
}

//Output = 0 1 4 9 ........81



//Use  === sizeof
cout <<sizeof(a) << endl;

//This will give 4bytes * index
