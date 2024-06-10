#include<iostream>
using namespace std;
void move_zero(int arr[],int n){
    int i=0;
    int k=0;
    while(i<n){
        if(arr[i]!=0){
            swap(arr[i],arr[k]);
            k++;
        }
        i++;
        //k++;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={0,1,0,3,12};
    move_zero(arr,5);
    print(arr,5);
}