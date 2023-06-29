#include<iostream>
using namespace std;
template<typename T, typename U>
T mini(T a, U b)
{
    if(a<b)
    return a;
    else
    return b;
}

template<typename T,typename U>
T maxi(T a , U b)
{
    if(a>b)
    return a;
    else
    return b;

}
int main()
{
        //   cout<<"enter two numbers:";
        cout<<maxi(2,3.99);
          
}