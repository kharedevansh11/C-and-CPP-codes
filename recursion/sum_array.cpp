#include<iostream>
using namespace std;
int sum_array(int arr[],int size)
{
    int s;
    //base case
    if(size ==1)
    {
        return arr[0];
    }
    if(size==0)
    {
        return 0;
    }
    else{
        //recursive call
        
         s= sum_array(arr+1 , size-1) + arr[0] ;    

        return s;
    }
}
int main()
{
    int arr[5]= {2,4,6,8,10};
    int size =5;
    int sum = sum_array(arr,size);
    cout<<sum;
}