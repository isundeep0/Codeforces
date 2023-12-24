#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;

int main() {

  vector<bool> isPrime(1e8, true);
  isPrime[1] = false;

  for (int i = 2; i*i<1e8; i++){
    if (isPrime[i]){
      for (int j = i; i*j<1e8; j++){
        isPrime[j*i] = false;
      }
    }
  }

  int cnt = 0;

  for (int i = 2; i<1e8; i++){
    if (isPrime[i]){
      ++cnt;
      if (cnt%100 == 1){
        pr(i);
      }
    }
  }

  return 0;

}