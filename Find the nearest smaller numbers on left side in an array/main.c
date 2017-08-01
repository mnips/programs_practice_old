#include <stdio.h>
#include <stdlib.h>
//Find the nearest smaller numbers on left side in an array
//Given an array of integers, find the nearest smaller number
//for every element such that the smaller element is on left side.
int main()
{   int n,arr[10],i,j,k,temp,flag,min;
    printf("Enter the no. of elements:\t");
    scanf("%d",&n);
    printf("Enter the elements:\t");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("_ ");
    for(i=1;i<n;i++)
    { for(j=i-1;0<=j;j--)
       {  if(arr[j]<arr[i])
             {printf("%d ",arr[j]);break;}
       }
       if(j==-1)
        printf("_ ");

    }

    return 0;
}
/*Alternate solution using stack in C++

// C++ implementation of simple algorithm to find
// smaller element on left side
#include <iostream>
#include <stack>
using namespace std;

// Prints smaller elements on left side of every element
void printPrevSmaller(int arr[], int n)
{
    // Create an empty stack
    stack<int> S;

    // Traverse all array elements
    for (int i=0; i<n; i++)
    {
        // Keep removing top element from S while the top
        // element is greater than or equal to arr[i]
        while (!S.empty() && S.top() >= arr[i])
            S.pop();

        // If all elements in S were greater than arr[i]
        if (S.empty())
            cout << "_, ";
        else  //Else print the nearest smaller element
            cout << S.top() << ", ";

        // Push this element
        S.push(arr[i]);
    }
}

/* Driver program to test insertion sort
int main()
{
    int arr[] = {1, 3, 0, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printPrevSmaller(arr, n);
    return 0;
}

*/
