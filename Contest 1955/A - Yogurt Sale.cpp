//
// Created by isund on 08-04-2024.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define FORR(i, n) for (int i = n; i>=0; i--)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout <<a<<" ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout<<"\n"
int mod = 1e9 + 7;

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}


int main() {

    init();

    int t;
    cin>>t;

    while (t--){
        int n, a, b;
        cin>>n>>a>>b;

        int ans = 0;

        int minm = b;

        if (2*a < b){
            minm = a;
        }

        if (minm == b){
            int can = n/2;
            int rem = n%2;
            ans += can*b + rem*a;
        }
        else{
            ans += n*a;
        }

        cout<<ans<<endl;


    }

    return 0;
}
