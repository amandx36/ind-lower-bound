#include <iostream>
using namespace std ;
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18,20,22,24,26,29,33,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of the Element in the array is :== "<< n<<endl;
    int target ;
    cout<<"Enter the target Element :== " ;
    cin>>target ; 
    int first = 0 ;
    int last = n - 1;
    while(first <= last){
        int mid  =  (first + last )/2 ; 
        if(arr[mid]==target){
            cout<<"Element found at the index of "<<last-1<<" And the position of "<<last<<" and the element is :== "<<arr[last-1];
            break;
        }
        else if (arr[mid]>target){
            last = mid - 1 ; 
        }
        else if (arr[mid]<target){
            first = mid + 1 ;
        }
    } 
}