#include<iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,-24};
    int size=6;
    int largest=6;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        largest=max(largest,nums[i]);
}