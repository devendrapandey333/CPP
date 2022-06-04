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
void printVec(vector<int> v) { // Passed as copy by reference , &v for referrence 
    cout<<"Size is"<<v.size()<<endl; // O(1) Complexity
f(i, 0, v.size()) {
    cout<<v[i]<<endl;
}
}

int main()
{
    clock_t start = clock();
    fast_io();
    // Your code goes here
    vector<int> v;
    //vector<int> v1(10, x); // Declaring vector with size 10 and all x ( default is zero)
    // v1.push_back(11): // Size will be 11
    // vector<int> v1(10)
    int n;
    cin>>n;
    f(i,0,n) {
        int x;
        cin>>x;
        v.push_back(x); // push at the end : o(1) complexity
    }

      printVec(v);
      v.pop_back(); // Removes last element
       printVec(v);
       // vector<int>v3= v; // Copy by value
       // vector<int>&v3= v; Copy by reference

    exec(start);
    return 0;
}