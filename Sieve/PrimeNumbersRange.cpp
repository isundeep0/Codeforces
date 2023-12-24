#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;

//Sieve Of Eratosthenes

vector<ll> getPrimes(ll n){
  vector<bool> isPrime(n+1, true);
  isPrime[1] = false;
  for (int i = 2; i<=n; i++){
    if (isPrime[i]){
      for (int j = i; j*i <= n; j++){
        isPrime[i*j] = false;
      }
    }
  }

  vector<ll> primes;

  for (int i = 2; i <= n; i++){
    if (isPrime[i]){
      primes.push_back(i);
    }
  }

  return primes;
  
}



int main() {

  int t;
  cin>>t;

  while (t--){
    ll n, m;

    cin>>m>>n;

    for (ll i = m; i<=n; i++){
      bool isPrime = true;
      for (int j = 2; j*j <= i; j++){
        if (i%j == 0){
          isPrime = false;
          break;
        }
      }
      if (isPrime && i != 1){
        pr(i);
      }
    }

    // vector<ll> p = getPrimes(n);

    // vector<bool> v(n-m+1, true);

    // for (int i = 0; i<p.size(); i++){
    //   ll k = ceil(m*1.0/p[i]);
    //   if (k<2) k++;
    //   for (int j = k; p[i]*j<v.size(); j++){
    //     v[p[i]*j - m] = false;
    //   }
    // }

    // for (int i = 0; i<v.size(); i++){
    //   if (v[i]){
    //     pr(m+i);
    //   }
    // }

    cout<<endl;



  }

  return 0;

}