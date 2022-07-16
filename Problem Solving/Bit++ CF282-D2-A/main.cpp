#include <iostream>
#include <string>

using namespace std;

int main (){
    int x=0;
    int states;
    cin >> states;
    string s[states];
    for (int i = 0; i < states; i++)
    {
    cin >> s[i];
    for (int j = 0; j < s[i].length(); j++)
    {
        if (s[i][j] == '-')
        {
            x--;
            break;
        }
        else if (s[i][j] == '+')
        {
            x++;
            break;
        }
        
    }
    
    }
    cout << x;   
}