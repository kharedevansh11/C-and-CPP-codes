#include<iostream>
#include <vector>
using namespace std;
void subset(int arr[],int i, int n,int parr[])
{
    //base case
    if(i>=n)
    {
        for(int j=0;j<n;j++)
        {
            parr[j]= arr[j];
        }
        return ;

    }

    //exclude
     subset(arr,i+1,n,parr);

    //inlcude
    int x = arr[i];
    parr[i]= x;
    subset(arr,i+1,n,parr);

}

int main()
{
    int arr[]= {1,2,3,4};
    int n = sizeof(arr)/4;
    int i=0;
    int parr[n];

    subset(arr,i,n,parr);


}