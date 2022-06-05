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
    vector<pair<int, int > > v = { {1,7}, {2,2}, {3,3}, {4,4} };

    vector<pair<int, int > > ::iterator it; // can use auto it in the next loop instead
    for(it = v.begin(); it != v.end(); it++) {
        cout<<(*it).first << " "<<(*it).second<<endl;
        //can also be done with it->first and it->second

    }

    // How to directly access the values of the container 

    for(auto &value: v) {  // auto value: v , creates copy of the value , instead use auto &value = v; `auto` directly determines the data type of iterator
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    }
    exec(start);
    return 0;
}