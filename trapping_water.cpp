#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> elevation_map = {1, 2, 3, 4};
    int n = elevation_map.size();

    vector<int> left(n), right(n);
    left[0] = elevation_map[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(elevation_map[i],left[i-1]);
    }
    right[n-1] = elevation_map[n-1]; 
    for (int i = n-2; i > -1; i--)
    {
        right[i] = max(elevation_map[i],right[i+1]);
    }
    int result = 0;
    for(int i = 1; i < n-1; i++)
    {
        int mn = min(left[i-1],right[i+1]);
        if(mn > elevation_map[i]) {
            result += mn - elevation_map[i];
        }
    }

    cout<<result;
}