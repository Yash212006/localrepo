#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<5;i+=2){

        if(i+1 < 5) swap(arr[i], arr[i+1]);
    }

    printarray(arr,5);

}