#include <iostream>
using namespace std;

int main(){
    int n, arr[10];
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]+=2;
        cout<<arr[i]<<" ";
    }

    return 0;
}