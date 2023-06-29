#include<iostream>
using namespace std;

template <class X>
 void swapargs(X &a, X &b)
{
    X temp = a;
    a=b;
    b= temp;
    cout<<"inside normal template func \n";
}

void swapargs(int &a, int &b)
{
    int temp= a;
    a=b;
    b=temp;
    cout<<"inside overloaded func";
}
int main()
{
    int x=2 ,y=4;
    double a= 3.5, b=4.5;
    
    swap(x,y);

    swap(a,b);

}