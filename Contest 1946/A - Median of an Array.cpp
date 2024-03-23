//
// Created by isund on 23-03-2024.
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
        int n;
        cin>>n;

        vector<ll> arr(n);

        FOR (i, 0, n){
            cin>>arr[i];
        }

        sort(all(arr));

        int m = (n%2 == 0) ? n/2 - 1 : n/2;

        int val = arr[m]+1;
        int ans = 1;
        FOR(i, m+1, n){
            if (arr[i]<val){
                ++ans;
            }
        }

        pr(ans);


    }

    return 0;
}

