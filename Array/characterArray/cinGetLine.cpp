//Cin property is it will not take = after spaces & tabs && \n {new line}

#include <iostream>
using namespace std;

//Creating length function
int length(char input[]){
    int count = 0;
    for(int i = 0; input[i]!= '\0'; i++){
        count++;
    }
    return count;
}


int main()
{
    char name[100];
    cout<<"ENter Your Name";

    cin.getline(name, 100); //Here we used

    length(name);
    return 0;
}

//This will print also the spaces also
