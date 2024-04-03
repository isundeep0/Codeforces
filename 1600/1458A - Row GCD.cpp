//
// Created by isund on 03-04-2024.
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

    int n, m;
    cin>>n>>m;

    ll a[n], b[m];

    ll gcd = 0;

    ll f;

    FOR(i, 0, n){
        cin>>a[i];
        if (!i) {f=a[i];continue;}
        gcd = __gcd(gcd, abs(f-a[i]));
    }

    FOR(i, 0, m){
        cin>>b[i];
        ll ans = __gcd(gcd, f+b[i]);
        ps(ans);
    }


    return 0;
}

