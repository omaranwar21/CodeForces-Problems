#include <iostream>

using namespace std;

int n;

int main (){
    cin>> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int inv=0;
    int cri=0;
    int j=0;
    int po=0;
while (j<n)
{
    arr[inv]=arr[j];
    arr[cri]=arr[j+1];
    if (arr[inv] > 0)
    {
        po+=arr[inv];

        if (arr[cri] < 0)
        {
            po+=arr[cri];
        }

        inv++;
        cri++;
    }
    else
    {
        inv++;
        cri++;
    }
    j++;
}

cout<< po;
    
}