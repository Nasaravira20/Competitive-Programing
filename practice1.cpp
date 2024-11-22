#include <bits/stdc++.h>

using namespace std;

void recur_print(int a)
{
    if(a == 0) return;
    else 
    {
        cout<<a<<" ";
        recur_print(a-1);

    }
}

// int main()
// {
// //     int n = 1000;
// //     string b = "359316511659381688467366357957841848492944434246754156613794335553975764248114833563719161942994357428185669142655879134791324737161796792943816193463328371383381233531687755435515191918589126326126478218199529855875466411729571364738675454631186263389355254429727251649785523281891699281874149989747342569969847591654954242431424524327282955837121883482612235929176981224719965516191969785893715633711563957594816283989361362132115139345579151491759551733183563562486769354927524637242887637815778579862692496472233783545646691979281914262193856919465614151332697834441348698585315494265345859115253945178817477768";
// //     int y = stoi(b.substr(b.size()-2,2));
// //     cout<< y;
//     // recur_print(10);
//     // int arr[] = {1,2,3,4,5};
//     // cout<<(1&(1<<2));
//     // cout<<sizeof(arr)/sizeof(int);

    
// }

// C++ Program to illustrate, how to use
// std::map::count for counting the occurrence
// of given key
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;

    mp.insert({1, 30});
    mp.insert({1, 40});
    mp.insert({3, 60});
    mp.insert({4, 20});
    mp.insert({5, 50});
    
    int key1 = 1;
    int key2 = 9;

    // Counting the occurrence of key1 and key2
    int cnt1 = mp.count(key1);
    int cnt2 = mp.count(key2);

    cout << "Count of " << key1 << ": " <<
      cnt1 << endl;
    cout << "Count of " << key2 << ": " <<
      cnt2 << endl;

    return 0;
}
