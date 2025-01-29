#include <iostream>
using namespace std;
int main(){
    bool flag = false ;
    int arr[] = {2,4,8,12,15,18,20,25,28,29,32,35,38};
    int start = 0 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int last  = size-1;
    int mid ;
    int target ;
    cout<<"Enter the target Element you want to print the lower bond :== ";
    cin>> target ;
    while(start<last){
        mid = (start + last)/2 ;
        if(arr[mid]==target){

            flag = true ; 
            break; 
        }
        if(arr[mid]<target){
            start = mid + 1 ;
        }
        if(arr[mid]>target){
            last = mid -1;
        }

    }
    if(flag == false)
    {
        cout<<"The lower bond is :== "<<arr[last]<<endl;
    }
    if(flag==true)
    {
        cout<<"The Element fount at the index of"<<mid<<"at the position  of "<<mid+1 ;
    }



}
