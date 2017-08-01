#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{	char s[100000];
	cin>>s;
	int d,i,j=0,k;
	char ch;
	cin>>d;
	int l=strlen(s);
	for(i=1;i<=l-d-1;i++)
		{ k=j;
			while(k!=d)
			{ch=s[k];
			 s[k]=s[k+d-1];
			 s[k+d-1]=ch;
			 k++;
			}
		  j++;
		}
	cout<<s<<endl;
}
return 0;
}
