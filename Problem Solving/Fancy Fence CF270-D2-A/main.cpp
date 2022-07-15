#include <iostream>
using namespace std;

int main () {
    int tests;
    int a;                      // The angle
    float n;                  //float number of sides 
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin>> a;
        n = (360.0 / (180.0-a));
        if ( n < 3 || (((int)(n*100))%100)!=0 )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    
}