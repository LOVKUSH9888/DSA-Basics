#include <iostream>
using namespace std;

void printAllprefixes(char str[]){
    for(int e=0; str[e]!='\0'; e++){   //This loop for end = e
        for(int s = 0; s<=e; s++){     //This inner loop is for start = s
            cout<<str[s];
        }
        cout<<endl;
    }
}



int main()
{
    char str[] = "abcd";
    printAllprefixes(str);
    return 0;
}
