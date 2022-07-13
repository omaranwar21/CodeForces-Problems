#include <iostream>
#include <string>
using namespace std;

int row[5];
int r;
int c;
int moves;

int main () {
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cin>> row[i];
            if (row[i]==1)
            {
                r = abs(3-j);
                c = abs(3-i);
                moves = r+c;
            }
            
        }
        
    }

    cout<< moves;
    
}
