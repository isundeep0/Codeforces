#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))

void init() {
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    init();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n, 0);
        int minm = INT_MAX;
        map<int, int> mp;
        FOR(i, 0, n){
            in(v[i]);
            mp[v[i]]++;
            minm = min(v[i], minm);
        }

        string ans = "No";

        if (mp[minm] == 1){
            ans = "Yes";
        }
        else{
            FOR(i, 0, n){
                if (v[i]%minm != 0){
                    ans = "Yes";
                    break;
                }
            }
        }

        pr(ans);

    }

    return 0;
}

