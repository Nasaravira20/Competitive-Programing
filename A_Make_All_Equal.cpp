#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int max = 0;
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i : a)
        {
            int temp = count(a.begin(),a.end(),i);
            if (temp > max)
            {
                max = temp;
            }
        }
        cout<<n-max<<endl;
    }
}