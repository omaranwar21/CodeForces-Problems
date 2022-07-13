#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin>> n;
    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int d = sizeof(arr) / sizeof(arr[0]);

    sort (arr , arr+n);
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
}