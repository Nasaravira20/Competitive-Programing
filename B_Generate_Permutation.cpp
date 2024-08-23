#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n,a;
        
        cin>>n;
        a = n;
        if(n%2 == 0)
        {
            cout<<-1<<endl;
        }
        else{
            vector<long long> res(n);
            for(long long i = 0;i<n/2;i++)
            {
                res[i] = a;a--;
            }
            // cout<<n<<" ";
            long long sam = 1;
            for(long long i=n/2;i<n;i++)
            {
                res[i] = sam;
                sam++;
            }

            for(auto i : res) cout<<i<<" ";
            cout<<endl;
        }
    }
}