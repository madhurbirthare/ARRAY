#include <iostream>
using namespace std;

int main(){
    int n,key,i;
    cout<<"enter the size of array:";
    cin>>n;

    cout<<"enter the key";
    cin>>key;

    int arr[n], rotation;
    rotation=key%n;
    cout<<"enter elements:";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int temp= arr[n-1];

    for(i=n-1; i<-1; i--){
        arr[i]= arr[i-1];
    }
    arr[0]=temp;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}