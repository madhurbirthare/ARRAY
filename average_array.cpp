#include <iostream>
using namespace std;

int main(){
    int n, arr[10], sum=0;
    float avg;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum= sum+arr[i];
    }
    avg= sum/n;
    for(int i=0; i<n; i++){
        if(arr[i]>avg){
            cout <<arr[i]<<" ";
        }
    }
    return 0;
}