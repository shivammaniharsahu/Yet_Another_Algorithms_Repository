#include<bits\stdc++.h>
using namespace std;
int main()
{
	int i,j,beg,end,f=0;
	string s;
	cout<<"Enter your string please=";
	getline(cin,s);
	beg=0;
	end=s.length()-1;
	for(i=0;i<=s.length()/2;i++)
	{
		if(s[beg++]==s[end--])
		{
			f++;
		}
	}
	j=s.length();
	if(f==(j+1)/2)
	{
		cout<<"Your string is palindrome";
	}
	else
	{
		cout<<"Your string is not palindrome";	
	}
	
}
