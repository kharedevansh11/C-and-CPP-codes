#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
    vector<int> vec1;
    vector<int> vec2;
int n,a,b;
cout<<"enter size of first vector";
cin>>a;
cout<<"enter the elements of 1st vector";
        vector<int>:: iterator it;
        for(int i=0;i<a;i++)
        {
             cin>>n;
            if(n>0)
            {
               
            vec1.push_back(n);
            }
            if(n<0)
            break;

        }

        cout<<"enter size of second vector";
cin>>b;
cout<<"enter the elements of 2nd vector";
        for(int i=0;i<b;i++)
        {
             cin>>n;
            if(n>0)
            {
               
            vec2.push_back(n);
            }
            if(n<0)
            break;

        }
        int c;

        for(auto it = vec2.begin();it!=vec2.end();it++)
        {
            c=0;
            for(auto p= vec1.begin();p!=vec1.end();p++)
            {
                if(*it == *p)
                c=1;
            }
            if(c!=1)
            {
                vec1.push_back(*it);
            }
        }
 for(auto it= vec1.begin(); it!= vec1.end();it++)
        {
            cout<<*it<<",";

        }


}