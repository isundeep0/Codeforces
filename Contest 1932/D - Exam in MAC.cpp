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
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<string>(cout, " "))

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

static bool cmp(pair<ll, ll>& a, pair<ll, ll>& b){
    return (a.second < b.second);
}


int main() {

    init();

    int t;
    cin >> t;

    while (t--) {
        ll n, c;
        cin>>n>>c;

        vector<ll> v(n), prefEvenCnt(n), prefOddCnt(n);

        ll A = 0, B = 0;

        FOR(i, 0, n){
            cin>>v[i];

            A += v[i]/2 + 1;
            B += c - v[i] + 1;

        }
        ll total = (c+1)*(c+2)/2;

        prefEvenCnt[0] = (v[0]%2 == 0 ? 1 : 0);

        FOR(i, 1, n){
            if (v[i]%2 == 0){
                prefEvenCnt[i] = prefEvenCnt[i-1] + 1;
            }
            else{
                prefEvenCnt[i] = prefEvenCnt[i-1];
            }
        }

        prefOddCnt[n-1] = (v[n-1]%2 == 1 ? 1 : 0);

        FORR(i, n-2){
            if (v[i]%2 == 1){
                prefOddCnt[i] = prefOddCnt[i+1] + 1;
            }
            else{
                prefOddCnt[i] = prefOddCnt[i+1];
            }
        }

        ll AB = 0;

        FOR(i, 0, n){
            if (v[i]%2 == 0){
                AB += prefEvenCnt[i];
            }
            else{
                AB += prefOddCnt[i];
            }
        }

        ll ans = total - A - B + AB;

        pr(ans);


    }

    return 0;
}

