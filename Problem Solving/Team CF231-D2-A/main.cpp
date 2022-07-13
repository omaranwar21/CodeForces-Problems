#include <iostream>
using namespace std;

int n;
int done = 0;
int sum = 0;
int arr[3];

int main(){
    cin>> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>> arr[i];
            sum+=arr[i];

        }

    if (sum >= 2)
    {
        done++;
    }
    sum = 0;
        
    }
cout << done;
    
}