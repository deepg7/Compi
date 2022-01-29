#include<iostream>
using namespace std;


int main(){
    int sereja = 0, dima = 0;
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }

    int left = 0, right = n-1;
    int chance = 1;
    while(left<=right){

        int num = 0;
        if(numbers[left]>numbers[right]){
            num = numbers[left];
            left++;
        }else{
            num=numbers[right];
            right--;
        }
        if(chance==1){
            sereja+=num;
            chance = 0;
        }else{
            dima+=num;
            chance = 1;
        }
       
}
     cout<<sereja<<" "<<dima;
}