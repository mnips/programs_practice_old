#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	char s[50];
    	cin>>s;
    	int i=0,j,length=0;
    	while(s[i]!='\0')
    	{length++;
    	 i++;
    	}
    	for(j=0;j<length;j++)
    	{
    		if(s[j]==s[j+1])
    		s[j]='\b';
    	}
    	for(j=0;j<length;j++)
    	cout<<s[j];

    	cout<<endl;
    }
    return 0;
}
