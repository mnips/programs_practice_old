#include<iostream>
#include<string.h>
using namespace std;
/* Dynamic Programming C/C++ implementation of LCS problem */

  
int max(int a, int b);
  
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
  
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   return L[m][n];
}
  
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}
int main()
{int t;
cin>>t;
while(t--)
{int n,i;
cin>>n;
char s[100][100];
for(i=0;i<n;i++)
{cin>>s[i];
}
int m=strlen(s[0]);
int ans=100,d;
for(i=0;i<n-1;i++)
{d=lcs(s[i],s[i+1],m,m);
if(ans>d)
ans=d;
}
cout<<ans<<endl;

}
return 0;
}
