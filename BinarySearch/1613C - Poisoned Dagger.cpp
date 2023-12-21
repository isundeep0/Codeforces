#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> v;

ll func(ll x, int n){
  if (x == 0){
    return 0;
  }
  
  ll sum = 0;

  for (int i = 0; i<n-1; i++){
    if (v[i] + x - 1 < v[i+1]){
      sum += x;
    }
    else {
      sum += v[i+1] - v[i];
    }
  }

  sum += x;   // for the last element

  return sum;

}

int main() {

    int t;
    cin>>t;

    while (t--){
      int n;
      ll h;
      cin>>n>>h;

      v.resize(n);

      for (int i = 0; i<n; i++){
        cin>>v[i];
      }

      ll low = 1, high = h + 100;

      bool isPrinted = false;

      while (low <= high){
        ll mid = low + (high - low)/2;

        ll p = func(mid, n);
        
        if (p < h){
          low = mid + 1;
        }
        else {
          if (func(mid-1, n) < h && p >= h){
            cout<<mid<<endl;
            break;
          }
          else{
            high = mid - 1;
          }
        }
      }


    }

  return 0;

}