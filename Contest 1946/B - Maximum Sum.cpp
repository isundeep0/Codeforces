//
// Created by isund on 23-03-2024.
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
        cin>>n>>k;

        vector<ll> arr(n);

        FOR (i, 0, n){
            cin>>arr[i];
        }

        ll sum = 0;

        ll tot = 0;

        ll maxm = 0;

        FOR(i, 0, n) {
            tot += arr[i];
            sum += arr[i];
            maxm = max(sum, maxm);
            if (sum < 0){
                sum = 0;
            }
        }

        sum = maxm;

        ll rem = tot - sum;

        for (int i = 1; i<=k; i++){
            sum = (sum%mod + sum%mod)%mod;
        }

        sum = (sum%mod + rem%mod)%mod;

        if (sum < 0){
            sum = (sum + mod)%mod;
        }

        pr((sum)%mod);

    }

    return 0;
}

