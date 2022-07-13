#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int n;

int main() {
    cin>>n;
    int arr[n];
    int ser[(int) n/2];
    int dim[(int) n-(n/2)];

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int d= sizeof(arr) / sizeof(arr[0]);

    sort(arr+d, arr);

    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
            {
                ser.insert(arr[i]);
            }
            else
            {
                dim.insert(arr[i]);
            }    
        }
        else
        {
            if (i % 2 == 0)
            {
                dim.insert(arr[i]);
            }
            else
            {
                ser.insert(arr[i]);
            }
        }
        
        
    }
    
}