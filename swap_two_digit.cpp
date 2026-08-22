#include <iostream>
using namespace std;

int main(){
    int n, arr[10],temp;
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i+=2){
        temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
     for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}