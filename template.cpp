// Template taken from https://github.com/glapul/contest_library/blob/master/template.cpp
//Command to run 1: g++ template.cpp -std=c++14 -D LOCAL_SYSTEM_TEST -o a.out
//Command to run 2: ./a.out

#include<bits/stdc++.h>	
using namespace std;

// loops
#define FOR(i,j,k)  for(int i=j;i<k;i++)   // incrementing loop
#define FORD(i,j,k) for(int i=j;i>=k;i--)  // decrementing loop
#define REP(i,n) FOR(i,0,n)
#define ll long long

//Make sure no overflow problems
#define int long long

#define pii pair<int, int>
#define vi vector<int >
#define pb push_back
#define mp make_pair
#define fi first
#define se second

// for each loops
#define VAR(i,n) __typeof(n) i = (n)
// incrementing for each from left to right
#define FOREACH(i,c)  for(VAR(i,(c).begin());i!=(c).end();i++)   
// decrementing for each from right to left
#define FORDEACH(i,c) for(VAR(i,(c).rbegin()),i!=(c).rend();i++) 

// data types
#define ld long double
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;
const ld EPS = 10e-9;

#define db(x) (cerr << #x << ": " << (x) << "\n")
#define sync ios_base::sync_with_stdio(false), cin.tie(NULL)    // speedup i/o with cin/cout

int32_t main(){
    #ifdef LOCAL_SYSTEM_TEST
            freopen("./input.txt", "r", stdin);
    #endif
	sync;
    clock_t clk = clock();
    int t;
    while(cin>>t){
        cout<<t<<endl;
    }
    cout << "Hello World\n";
    cerr << "Time (in ms): " << (double)(clock() - clk) * 1000.0 / CLOCKS_PER_SEC << "\n";
    return 0;
}