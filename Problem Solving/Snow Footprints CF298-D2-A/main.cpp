#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string road;
    cin >> road;
    int start;
    int end;
    char first;
    for (int i = 0; i < road.size(); i++)
    {
        if (road[i] != '.')
        {
            first = road[i];
            start = i+1;
            cout<< start << " ";
            break;
        }
        
    }
    for (int i = start ; i < road.size(); i++)
    {
        if (road [i+1] != first)
        {
            end = i+2; 
            cout << end;
            break;
        }
        
    }
    

}



