// sum of even indexed elements and product of odd indexed elements of an array
#include <iostream>
using namespace std;

int main(){
    int n, arr[10], sum=0,product=1;
    cout<<"enter size of arrray";
    cin>>n;
    cout<<"enter elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum= sum+arr[i];
        }
        else{
            product= product *arr[i];
        }
    }
    cout<<sum<<","<<product;
    return 0;
}