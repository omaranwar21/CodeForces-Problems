#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int n,k;
    int isin=-1;
    cin>> n >> k;
    string s;
    string group="0123456789";
    int count1=0;
    int count2=0;
    for (int i = 0; i < n; i++)
    {
        cin>> s;
        for (int j= 0; j <=k; j++)
        {
            isin= s.find(group[j]);
            if (isin !=-1)
            {
                count1++;
                isin=-1;
            }
            
        }
            if (count1>= k+1)
            {
                count2++;
            }
        
        count1=0;
    }
        cout << count2;

return 0;
      
}
