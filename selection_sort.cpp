#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
       int minind=i;
       for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minind]){
                minind=j;
            }
       }
       swap(arr[i], arr[minind]);
    }
    cout<<"sorted array";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}