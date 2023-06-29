#include<iostream>
using namespace std;
bool is_sorted(int arr[],int size)
{
    //no need to check since agr single elment hoga to vo to already sorted hai hi
    if(size==0 || size== 1)
    {
        return true;
    }
    //base case
    if(arr[0]>arr[1])
    {
        return false;
    }
    //process
    else
    {
        bool ans = is_sorted(arr+1, size-1);
         return ans; 

    }
}

int main()
{
    int arr[]= {2,3,5,7,9,11};
    int size= 6;
    bool ans = is_sorted(arr, size);
    if(ans)
    {
        cout<<"Array is sorted";
    }
    else{
        cout<<"not sorted";
    }
}