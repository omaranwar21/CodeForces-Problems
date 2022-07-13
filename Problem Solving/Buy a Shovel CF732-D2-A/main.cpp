#include <iostream>
using namespace std;

int main(){
    int k,r;
    cin>> k >> r;
    for (int i = 1; i <= 1000; i++)
    {
        int d = (i*k)%10;

        if (d == r || d == 0 )
        {
            cout << i;
            break;
        }
        
    }
    
}