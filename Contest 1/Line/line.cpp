# include <iostream>
using namespace std;


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    freopen("inputfile.in","r",stdin);
    int n;
    cin>> n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i]>> b[i];
    }
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        // int slope = a[i];
        for (int j = i+1; j < n; j++)
        {
            if (a[i] != a[j])
                count++;
        }
    }
    cout<<count;

    return 0;
}