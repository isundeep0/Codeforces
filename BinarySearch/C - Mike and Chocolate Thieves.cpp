#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// ar^3 = mid

// a = mid/r^3

ll func(ll mid){
  ll sum = 0;
  for (ll i = 2; i*i*i <= mid; i++){
    sum += mid/(i*i*i);
  }
  return sum;
}

int main() {

    ll m;
    cin>>m;

    ll low = 0, high = 1e18;

    while (low <= high){
      ll mid = low + (high - low)/2;
      
      ll p = func(mid);

      if (p < m){
        low = mid + 1;
      }
      else{
        if (func(mid-1) < m && p == m){
          cout<<mid<<endl;
          return 0;
        }
        else{
          high = mid - 1;
        }
      }
    }

    cout<<-1<<endl;

  return 0;

}