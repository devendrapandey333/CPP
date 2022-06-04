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

void printVec(vector<pair<int, int>> &v) {
    f(i,0,v.size()) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    };
}
int main()
{
    clock_t start = clock();
    fast_io();
    // Your code goes here
    vector<pair<int,int > > v;
    int n;
    cin>>n;
    int x,y;
    f(i,0,n) {
       cin>>x>>y;
        v.push_back({x,y});
    };
    printVec(v);


    // Array of Vectors
    int m;
    cin>>m;
    vector<int> v1[m]; // creates an array of m vectors;
    int each_vector_size;
    f(i,0,m) {
        cin>>each_vector_size;
        f(j,0,each_vector_size) {
            int element;
            cin>>element;
            v1[i].push_back(element);
        }

    }
    f(i,0,m) {
       f(j,0,v1[i].size()) {
           cout<<v1[i][j]<<" ";
       }
       cout<<endl;
    }

    // Vector of vectors : Dynamic

    vector<vector<int>>v5;

    






    exec(start);
    return 0;
}