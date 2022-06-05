#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define mem0(x) memset(x, 0, sizeof(x))
#define memneg(x) memset(x, -1, sizeof(x))
#define ld long double
#define f(i, a, b) for (ll i = a; i < b; i++)
#define fr(i, a, b) for (ll i = b - 1; i >= a; i--)
#define v(type) vector<type> v
#define vv(type) vector<vector<type>> vv
#define m(type1, type2) unordered_map<type1, type2> m
void exec(clock_t start)
{
#ifndef ONLINE_JUDGE
    clock_t end = clock();
#endif
    cout << "\n\nExecution Time : " << double(end - start) / CLOCKS_PER_SEC << " sec\n";
}
void fast_io()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    clock_t start = clock();
    fast_io();
    // Your code goes here
    map<int, char> m;
   // m[1] = a; 
    m.insert({3, 'a'}); // insert takes O(logn) time complexity
    m.insert({2, 'b'});
    m.insert({1, 'c'});
    m.insert({1, 'd'}); // overrids the previous value for the given key 1
    m[5]; // this creates a empty char value ( 0 in case of int)
    for(auto &it: m) {
        cout<<it.first<<" "<<it.second<<endl; // Accessing a value is also logn . For N elements, total complexity is nlogn
    }

    // Size of map : Dynamic size
    cout<<m.size()<<endl;



    //finding a value in map 
    auto it = m.find(1); // returns a iterator corresponding to the key 1
    // if not found, it = m.end()
    // if(it == m.end())
    // cout<<"No value found for key";
    // else cout<<it->first<<" "<<it->second;


    // Deleting a value from map : m.erase(key or iterator)
    m.erase(3);//  logn
    cout<<"Print map"<<endl;
    for(auto &it: m) {
        cout<<it.first<<" "<<it.second<<endl; // Accessing a value is also logn . For N elements, total complexity is nlogn
    }
    // Clearing a map : m.clear()

    // When to use unordered_map :
    // 1. Order is not importat nof keys 
    // 2. O(1) comlexity agais 0(logn of maps)
    // 3. Keys are basic data types , no like pairs
    exec(start);
    return 0;
}