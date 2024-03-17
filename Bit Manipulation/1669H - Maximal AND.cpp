//
// Created by isund on 17-03-2024.
//


//
// Created by isund on 06-03-2024.
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
#define ps(a) cout << a<<" ";
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

    while(t--){
        int n, k;
        string s;
        cin>>n>>k;

        vector<ll> v(n);

        FOR(i, 0, n){
            cin>>v[i];
        }

        vector<int> a(31, 0);

        for (int i = 30; i>=0; i--){
            FOR(j, 0, n){
                if (!((v[j]>>i)&1)){
                    a[i]++;
                }
            }
            if (a[i] <= k){
                FOR(j, 0, n){
                    if (!((v[j]>>i)&1)){
                        v[j] = v[j] | (1<<i);
                    }
                }
                k -= a[i];
            }
        }
        ll ans = v[0];
        FOR (i, 1, n){
            ans = ans & v[i];
        }

        pr(ans);

    }

    return 0;
}

