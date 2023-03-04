//e.g array = 1,2,3,4,  /* what we need to do here is reverse array = 4, 3, 2, 1


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //Logic right to -> left

    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<" ";

    
    
    return 0;
}
}
