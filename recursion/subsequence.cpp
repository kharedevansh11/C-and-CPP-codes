#include <bits/stdc++.h> 
void solve(string str,string output,int index,vector<string> ans)
{
	//base case
	if(index>= str.length())
	{
		if(output.length()>0)
		{
			ans.push_back(output);
		}
		return ;
	}

	else{
		//EXCLUDE
		solve(str,output,index+1,ans);

		//INCLUDE
		char element = str[index];
		output.push_back(element);
		solve(str,output,index+1,ans);
	}

}
int main()
{
    vector<string> subsequences(string str){
	
        vector<string> ans;
		string output;
		int index =0;
		solve(str,output,index,ans);
		return ans;
}


}
