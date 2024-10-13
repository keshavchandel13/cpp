// BINARY SEARCH 

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int arr[],int target,int size)
{
    int start=0;
       
           int end =size-1 ; 
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            cout<<"Number found"<<endl;
            return mid;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}

int main()
{
    int arr[]={22,44,66,76,77,78,79,90};
   int size= sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Enter the number you want to find"<<endl;
    cin>>target;
   int index= binarySearch(arr,target,size);
   cout<<"The element is at index:"<<index;
}