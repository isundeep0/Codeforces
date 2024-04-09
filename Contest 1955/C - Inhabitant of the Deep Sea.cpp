//
// Created by isund on 09-04-2024.
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
        int n, k;
        cin>>n>>k;

        vector<int> a(n);

        FOR(i, 0, n){
            cin>>a[i];
        }

        int i = 0, j = n-1;

        int cnt = 0;

        while (i<=j){
            if (i == j && a[i] <= k){
                ++cnt;
                break;
            }
            else if (i == j){
                break;
            }
            int p = a[i], q = a[j];
            int minm = j;
            if (p <= q) minm = i;
            if (2*a[minm]-1 == k && minm != j){
                ++cnt;
                break;
            }
            if (2*a[minm] > k) break;
            k -= 2*a[minm];
            ++cnt;
            int yu = a[minm];
            a[minm]=0;

            if (minm != j){
                a[j] -= yu;
            }
            else{
                a[i] -= yu;
            }

            if (minm == i){
                ++i;
            }
            else{
                --j;
            }

            if (a[i] == 0){
                ++cnt;
                ++i;
            }
            else if (a[j] == 0){
                ++cnt;
                --j;
            }



        }

        cout<<cnt<<endl;





    }

    return 0;
}

