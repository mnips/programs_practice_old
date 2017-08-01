#include<iostream>
#include<string.h>
using namespace std;
int main()
{int i,x,y,x0,y0,c=0;
cin>>x>>y>>x0>>y0;
int visit[505][505]={0};
char s[100005];
cin>>s;

cout<<1<<" ";
int a=x0,b=y0;
int len=strlen(s);
for(i=0;i<len-1;i++)
{visit[a][b]=1;
if(s[i]=='U'&&a>1)
{a--;//visit[a][b]=1;
}
if(s[i]=='D'&&a<x)
{a++;
//visit[a][b]=1;
}
if(s[i]=='L'&&b>1)
{b--;//visit[a][b]=1;
}
if(s[i]=='R'&&b<y)
{b++;//visit[a][b]=1;
}
if(visit[a][b]==1) 
cout<<0<<" ";
else { cout<<1<<" "; c++; }

}
cout<<x*y-c-1<<endl;
return 0;
}
