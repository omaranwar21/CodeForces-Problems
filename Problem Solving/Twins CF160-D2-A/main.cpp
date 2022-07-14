#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];
    int sum1=0;
    int sum2=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        sum1+=arr[i];
    }

    int d = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);

    for (int j = n-1 ; j >= 0 ; j--)
    {
        if (sum2 > sum1/2 )
        {
            break;
        }
            sum2+=arr[j];
            count++;
        
    }
    
cout<< count;
    
}