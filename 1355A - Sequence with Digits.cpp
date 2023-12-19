#include <bits/stdc++.h>
using namespace std;


long long mul(long long n){
  
  int minm = INT_MAX, maxm = -1;

  while (n > 0){
    int rem = n%10;
    minm = min(minm, rem);
    maxm = max(maxm, rem);
    n /= 10;
  }

  return minm*maxm;

}

bool isZero(long long n){

  while (n){
    if (n%10 == 0){
      return true;
    }
    n /= 10;
  }

  return false;

}

int main() {

  int t;
  cin>>t;

  while (t--){
    long long a, k;
    cin>>a>>k;

    long long ans = a;

    for (long long i = 1; i<k; i++){
      ans = ans + mul(ans);

      if (isZero(ans)){
        break;
      }

    }

    cout<<ans<<endl;

  }

  
  return 0;
}

