#include <stdio.h>

int main()
{
    int i=0,t,j,k,l,a=0;
    int m,n,temp;
    int b[10000],g[10000];
    scanf("%d",&t);
    while(i<t)
    {   scanf("%d %d",&m,&n);
        if(m>n)
        {printf("NO");goto label;}
        else
        {
        	for(k=0;k<m;k++)
        	{scanf("%d",&b[k]);
        	}
        	for(k=0;k<n;k++)
        	scanf("%d",&g[k]);
    for(k=1;k<m;k++)
    {
      temp=b[k];
      j=k-1;
        while(temp<b[j])
        {
            b[j+1]=b[j];
            j=j-1;
        }
      b[j+1]=temp;
    }
    for(k=1;k<n;k++)
    {
      temp=g[k];
      j=k-1;
        while(temp<g[j])
        {
            g[j+1]=g[j];
            j=j-1;
        }
      g[j+1]=temp;
    }

        	for(k=0;k<m;k++)
        	{if(b[k]>g[k])
        	  a++;
        	 else
        	 {printf("NO");goto ok;}
        	}

        	printf("YES");


        }
        ok:label:
    	i++;
    }
    return 0;
}
