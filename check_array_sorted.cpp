// checking the array is sorted or not
#include <iostream>
using namespace std;
int main(){
    int n, arr[10];
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    bool sort= true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
             sort = false;
             break;
        }
    }
    if(sort){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}