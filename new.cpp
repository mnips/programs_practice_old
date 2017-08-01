    #include<iostream>
    #include<string.h>
    using namespace std;
    int main(){
    int t;
    cin>>t;
    while(t--){
    char s1[120],s2[120];cin>>s1>>s2;
    int c=0,c2=0,len=strlen(s1);
    for(int i=0;i<len;i++)
    {if(s1[i]!=s2[i]||(s1[i]=='?'&&s2[i]=='?'))c++;
    if(s1[i]=='?'||s2[i]=='?'||s1[i]==s2[i])c2++;
    }
    cout<<len-c2<<" "<<c;
    cout<<endl;
    }
    return 0;
    } 
