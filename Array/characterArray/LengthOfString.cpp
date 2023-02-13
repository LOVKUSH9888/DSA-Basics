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
    length(name);
    return 0;
}

//Output = 4
