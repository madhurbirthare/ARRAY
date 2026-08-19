#include <iostream>
using namespace std;

int main(){
    int n, arr[10];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=14;
    arr[n+1]=13;
    n=n+2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//intertion at the last place
