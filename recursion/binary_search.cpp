#include<iostream>
using namespace std;

bool is_binary(int arr[],int s, int e,int size , int k)
{
    //base case 
    if(s>e)
    {
        return false;
    }

    int mid= s+ (e-s)/2;

    if(arr[mid] == k)
    {
        return true;
    }
    
    //proscessing or recursive function
    else{
        if(arr[mid]>k)
        {
            return is_binary(arr,s,mid-1,size,k);
        }
        else if(arr[mid]<k)
        {
            return is_binary(arr,mid+1,e,size, k);
        }
    }
}
int main()
{
    int arr[]= {2,4,5,7,8,9,11};
    int size= 7;
    int key = 9 ;
    int s=0,e=6;
    if(is_binary(arr,s,e,size,key)==true)
    {
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}