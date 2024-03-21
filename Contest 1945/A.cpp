//
// Created by isund on 19-03-2024.
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
        int a, b, c;
        cin>>a>>b>>c;

        int ans = a;

        int breq = 3 - b%3;

        if (breq == 3){
            breq = 0;
        }

        if (c >= breq){
            c -= breq;
            b += breq;
            ans += b/3;
            ans += ceil(c/3.0);
        }
        else{
            ans = -1;
        }



        pr(ans);



    }

    return 0;
}

