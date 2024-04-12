

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

        string x, y;
        cin>>x>>y;

        if (x == y){
            pr(x);
            pr(y);
            continue;
        }

        if (y < x){
            swap(x, y);
        }

        int n = x.size();

        int idx = 0;

        FOR(i, 0, n){
            if (x[i] != y[i]){
                break;
            }
            else{
                ++idx;
            }
        }
        ++idx;

        FOR(i, idx, n){
            char cx = x[i];
            char cy = y[i];
            if (cx < cy){
                x[i] = cy;
                y[i] = cx;
            }
        }

        pr(y);
        pr(x);

    }


    return 0;
}

