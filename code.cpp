// Online C++ compiler to run C++ program online
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[], int n)
{
   sort(arr, arr+n);
 
  
   int diff = INT_MAX;
 
  
   // pairs in sorted array
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];
 
   // Return min diff
   return diff;
}
int main()
{
int arr[]={7980,22349,999,2799,229900,11101,9999,2195,9800,4999};
    int n=sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"number of employees:"<<endl;
    cin>>k;
   cout << "the Minimum difference between the chosen goodie with highest price and lowest price  is " << findMinDiff(arr,n);
   return 0;
}