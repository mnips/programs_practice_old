#include <iostream>

using namespace std;

int main()
{   int arr[20],n,i,temp;
    cout << "Hello world!" << endl;
    cout<< "Enter n"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int max1=arr[0];
    int max2=arr[1];
     if(max1<max2)
          {   temp=max1;
              max1=max2;
              max2=temp;
          }
    for(i=0;i<n;i++)
    {
        if(max1<arr[i])
            {max1=arr[i];
             max2=max1;}
        else
          if(max2<arr[i]&&max1!=arr[i])
             max2=arr[i];
    }
    cout<<"The largest pair sum is : "<<max1+max2<<endl;

    return 0;
}
