//Time Complexity = logN
//We use this with "sorted arrays" only
//It works using two pointers (s & e ) & then it gives the {mid} value

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key){  //int n = size

         int s = 0, e = n-1;  //s = start & e = end

         while(s<=e){
            int mid = s + (e-s)/2;    //finding MID {s+e / 2 -- But if these two are big int. then we make that expression==Posibilty of Integerflow}


            //There are 3 cases now 

            if(a[mid] == key){
                return mid;

            }else if(a[mid] > key){   //ON LHS will key lie
                e = mid-1;

            }else{        //ON RHS will key lie
                s = mid + 1;
            }
         }

         return -1;  //returning INvalid Index

}

int main(){

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   cout<<"enter key"<<endl;
   int key;
   cin>>key;

   sort(a,a+n);    //Sorting the array as Binary Search only work with the Sorted array

   int pos = BinarySearch(a,n,key);      //Position
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}

///Revised 1 
23

