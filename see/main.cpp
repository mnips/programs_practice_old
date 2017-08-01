#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {ll win=0,i,n,flag=0;
  cin>>n;
  char s[n+1];
  cin>>s;
  char c[n+1];
  cin>>c;
  ll arr[n+1];
  for(i=0;i<n+1;i++)
  cin>>arr[i];
  ll max=arr[0];
  for(i=0;i<n;i++)
  {if(s[i]==c[i])
    { flag++;
	}
	win=arr[flag];
	if(max<win)max=win;
  }
  cout<<win<<endl;
  }

}
