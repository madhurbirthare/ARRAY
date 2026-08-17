#include <iostream>
using namespace std;

int main(){
    int n, arr[10],half;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
    half= n/2;
    }
    else{
        half=(n+1)/2;
    }
    for(int i=0;i<half;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}