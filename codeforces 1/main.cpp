#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,w1,w2,count=0,prev=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>w1;
            cin>>w2;
            if(w1==1||w2==1)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
