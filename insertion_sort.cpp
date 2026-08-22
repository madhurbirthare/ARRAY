#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for( i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=1; i<n; i++){
        for(j=i-1; j>=0; j--){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
                i--;
            }
        }
        
    }

    for( i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}