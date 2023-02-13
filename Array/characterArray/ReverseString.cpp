//e.g - Hello World == reverse === dlrow olleh
//Arrays are passed by =Reference menas whatever 

//Logic we are using two pointer here s = start & e = end;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i]!= '\0'; i++){
        count++;
    }
    return count;
}


void reverse(char input[]){ 
    int s = 0;
    int e = length(input) - 1; //As compiler dont know the lenth so write abobe the function

    while(s<e){
        swap(input[s] , input[e]);
        s++;
        e--;
    }
}


//2nd method of inbuilt function

#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Journal Dev reverse example"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}


//3rd method

#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    char str[] ="Journal Dev reverse example"; 
    strrev(str);
	cout<<"\n"<<str; 
    return 0;
}


//4th way

#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str="Journal Dev reverse example"; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;
}


//5th

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char *My_rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{ 
    char My_string[]="Journal Dev reverse example";
	cout<<"Reverse string using My_rev()...\n";
    My_rev(My_string);
	cout<<My_string;
    return 0;
}