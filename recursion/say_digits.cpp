#include<iostream>
using namespace std;
void say_digit(int n, string arr[])
{
    //base case
    if(n==0)
    {
        return ;
    }

    //processing
    int digit;
    digit= n%10;
    n= n/10;
    say_digit(n,arr);

    cout<<arr[digit]<<" ";

}

int main()
{
    cout<<"enter the number";
    int n;
    cin>>n;
    string arr[10]= {"zero","one","two","three","four","five", "six", "seven" ,"eight", "nine"};
    say_digit(n,arr);

}