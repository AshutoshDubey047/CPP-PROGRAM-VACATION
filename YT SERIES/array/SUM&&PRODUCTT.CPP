#include<iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,-24};
    int size=6;
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++){
        sum+=nums[i];
        product*=nums[i];
    }   cout<<"sum of the array is "<<sum<<endl;
    cout<<"product of the array is "<<product<<endl;
    return 0;
    
}