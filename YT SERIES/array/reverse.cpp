#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;
    reverse(arr,size);
    cout<<"reversed array is: ";
    return 0;
}
}