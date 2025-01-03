#include <bits/stdc++.h>

using namespace std;
// bool isprime(int n)
// {
//     if (n <= 1) return false;
//     if (n == 2) return true;
//     if (n%2 == 0) return false;

//     for (int i = 3; i <= sqrt(n); i++)
//     {
//         if(n%i == 0) return false;
//     }
//     return true;
// }
// int main()
// {
//     int start, end;
//     cout<<"enter the start range: ";
//     cin>> start;
//     cout<<"enter the end range: ";
//     cin>>end;

//     set<int> result;

//     for (int i = start; i <= end; i++)
//     {
//         if(isprime(i)) result.insert(i);
//     }

//     for (int i : result) cout<<i<<" ";

// }

// set<int> seiveoferatosthenes(int n, int start)
// {
//     vector<bool> hash(n+1,true);
//     hash[0] = false;
//     hash[1] = false;

//     for (int i = 2; i <= n; i++)
//     {
//         if(hash[i])
//         {
//             for (int p = i * i; p <= n; p += i)
//             {
//                 hash[p] = false;
//             }
//         }
//     }
//     set<int> result;
//     for (int i = start; i <= n; i++)
//     {
//         if(hash[i]) result.insert(i);
//     }

//     return result;
// }

vector<int> seiveoferatosthenes(int n)
{
    vector<bool> hash(n+1,true);
    hash[0] = false;
    hash[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if(hash[i])
        {
            for (int p = i * i; p <= n; p += i)
            {
                hash[p] = false;
            }
        }
    }
    vector<int> result;
    for (int i = 0; i <= n; i++)
    {
        if(hash[i]) result.push_back(i);
    }

    return result;
}

int main()
{
    // int start, end;
    // cout<<"enter the start range: ";
    // cin>> start;
    // cout<<"enter the end range: ";
    // cin>>end;

    int target;
    cin>>target;

    vector<int> primes = seiveoferatosthenes(target);
    int i = 0, j = primes.size()-1;

    while(i < j)
    {
        int num = primes[i] + primes[j];
        cout<<num<<" ";
        if(num == target) 
        {
            cout<<"yes"<<" ";
            break;
        }
        else if(target > num) i++;
        else j--;
    }
}