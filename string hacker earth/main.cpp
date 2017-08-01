#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	char s[100];int n=0,i=0,check=122;
    	cin>>s;int arr[100];
    	while(s[i]!='\0')
    	{   arr[i]=(int)s[i];
    		i++;
    		n++;
    	}

    for(i=0;i<n;i++)
    {
    	if(arr[i]==check)
    	{check--;i=0;

    	}//qwertyuioplkjhgfdsazxcvbnm
    }

    if(check<=97)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
    }
    return 0;
}
