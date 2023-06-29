#include<iostream>
using namespace std;
bool linear_search(int arr[],int size,int n)
{
    if(arr[0]==n)
    {
        return true;
    }
    if(size==0)
    {
        return false;
    }
    else{
        linear_search(arr+1, size-1,n);
        
        
    }
}
int main()
{
    int arr[]= {2,21,34,5,3,6};
    int size= 6;
    cout<<"enter number you want to find"<<endl;
    int n;
    cin>>n;
    if(linear_search(arr,size,n)==true)
    {
        cout<<"number is present";
    }
    else{
        cout<<"number not present";
    }
}