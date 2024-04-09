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
        int n, c, d;
        cin>>n>>c>>d;

        vector<vector<int>> v(n, vector<int>(n));

        map<int, int> mp1;

        int minm = INT_MAX;

        for (int i = 0; i<n*n; i++){
            int a;
            cin>>a;
            minm = min(a, minm);
            mp1[a]++;
        }

        int a = minm;

        map<int, int> mp2;
        int arr[n][n];
        arr[0][0] = a;
        for (int i = 0; i<n; i++){
            if (i-1>=0) arr[i][0] = arr[i-1][0]+c;
            for (int j = 0; j<n-1; j++){
                arr[i][j+1] = arr[i][j]+d;
//                mp2[arr[i][j]]++;
            }
            for (int j = 0; j<n; j++){
                mp2[arr[i][j]]++;
            }
        }

//        for (auto const i : mp1){
//            cout<<i.first<<" - "<<i.second<<endl;
//        }

//        for (auto const i : mp2){
//            cout<<i.first<<" - "<<i.second<<endl;
//        }

        string ans = "YES";

        for (auto const l : mp1){
            int key1 = l.first, value1 = l.second;
            if (!mp2.count(key1)){
                ans = "NO";
                break;
            }
            int key2 = key1, value2 = mp2[key2];
            if (value1 != value2){
                ans = "NO";
                break;
            }
        }

        cout<<ans<<endl;






    }

    return 0;
}

