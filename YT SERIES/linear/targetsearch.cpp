#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=5;
    int size=9;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"target found at index "<<i<<endl;
            return 0;
        }
    }   cout<<"target not found in the array"<<endl;
    return 0;       
}