#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n,i,arr[20],sum=0,j;
    cout<<"Enter the n:\t";
    cin>>n;
    for(i=0;i<n;i++)
    {
         arr[i]=i+1;
    }
    for(i=0;i<n;i++)
        {  while(arr[i]!=0)
            {j=arr[i]%10;
             sum+=j;
             arr[i]=arr[i]/10;
            }
        }
    cout<<"The sum of digits from 1 to "<<n<<" is "<<sum<<endl;

    return 0;
}
