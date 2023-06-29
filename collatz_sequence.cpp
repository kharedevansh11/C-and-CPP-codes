#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
   int n;
   cout<<"enter the number of collatz"<<endl;
   cin>>n;
   int temp= n;
   while(temp>1)        //here agr temp>0 krenge to loop ke andr hi reh jayega kyunki agr temp=1 hua...to temp%2 =1 ho jayega fir else chla jayega
   {
     vec.push_back(temp);
     if(temp%2==0)
     {
        temp = temp/2;
     }
     else{
        temp= 3*temp +1;
     }

   }
   if(n>=1)
   {
    vec.push_back(1);
   }


     for(auto it = vec.begin();it!= vec.end();it++)
    {
        cout<<*it<<endl;
    }

}