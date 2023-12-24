#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;
vector<int> b(100001);
vector<int> primeFactors[100001];

void generatingPrimes(){
  vector<bool> isPrime(100001, true);
  isPrime[1] = false;

  for (int i = 2; i<=100000; i++){
    if (isPrime[i]){
      primeFactors[i] = {i};
      for (int j = 2*i; j<=100000; j+=i){
        isPrime[j] = false;
        primeFactors[j].push_back(i);
      }
    }
  }


}



int main() {

  int n;
  cin>>n;

  vector<int> v(n);

  for (int i = 0; i<n; i++){
    cin>>v[i];
  }

  int ans = 1;

  generatingPrimes();

  for (int i = 0; i<n; i++){

    int currentMax = 0;
    for (int k : primeFactors[v[i]]){
      currentMax = max(currentMax, b[k]);
    }

    ans = max(ans, currentMax+1);

    for (int k : primeFactors[v[i]]){
      b[k] = currentMax + 1;
    }

  }

  cout<<ans<<endl;

  return 0;

}