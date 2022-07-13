#include<iostream>
using namespace std;

int main(){
    int n=0, h=0, x;
    int ans=0;
    cin>> n >> h;
    for (int i = 1; i <= n; i++)
    {
        cin>> x;
        if (x>h)
            ans++;
        ans++;    
    }
    cout<< ans;
     
}