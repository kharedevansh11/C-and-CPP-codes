#include <iostream>
using namespace std;
string string_reverse(string s, int i, int j)
{
    // base case
    if (i > j)
    {
        return s;
    }
    else
    {

        swap(s[i], s[j]);

        i++;
        j--;
         return string_reverse(s, i, j);
        
    }
}
int main()
{
    string s = "devansh khare";
    int l = s.length();

    string str = string_reverse(s, 0, l-1);
    cout << str;
}
