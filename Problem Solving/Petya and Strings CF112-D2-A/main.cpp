#include <iostream>
#include <string>
using namespace std;

string s1, s2;
int ans=0;
int main () {
    cin >> s1;
    cin >> s2;
        for(int i = 0; i < s1.length(); i++) {
        s1[i] = toupper(s1[i]);
        }
        for(int i = 0; i < s2.length(); i++) {
        s2[i] = toupper(s2[i]);
        }
    if (s1.compare(s2) == 0)
        ans=0;
    else if (s1.compare(s2) > 0)
       ans=1;
    else if (s1.compare(s2) < 0)
       ans=-1;
cout<< ans;    

}