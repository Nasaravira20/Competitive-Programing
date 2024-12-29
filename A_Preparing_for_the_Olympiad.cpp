#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int resa = 0, resb = 0;
        for(int i=0;i<n-1;i++){
            if(a[i] > b[i+1])
            {
                resa += a[i];
                resb += b[i+1];
            }
        }
        resa += a[n-1];

        cout<<resa-resb<<endl;

    }
    return 0;
}