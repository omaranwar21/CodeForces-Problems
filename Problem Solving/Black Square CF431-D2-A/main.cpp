#include <iostream>
#include <string> 
using namespace std;

int count=0;
int main (){
    int arr[4];
    string s;

    for (int i = 0; i < 4; i++)
    {
        cin>> arr[i];
    }

    cin>> s;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ( ((int)s[i]-48) == j+1)
            {
                count+=arr[j];
                continue;
            }
            
        }
        
    }
    cout<< count;
    
}