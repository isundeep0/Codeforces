// The idea is "for any two numbers a, b where (gcd(a, b) != 1) then there exists a common PRIME factor"

// input array:   [2,     6,    9,    12,     15]
// primeFactors: [[2], [2, 3], [3], [2, 3], [3, 5]]

// b           :  [0, 0, 4, 5, 0, 5]    
//                 0, 1, 2, 3, 4, 5    [indices => primes]

// Max is 5. So, It is the answer. If u wanna know How I got that, It's simple.
// For every element capture the maximum of cnt of its prime factors (which will be there on b[x], x is some prime factor of that element).
// Update all the element's prime factors count with maxCount + 1. wanna know why we are doing this ?

// go through this Test Case [2, 6, 9]

// 2: 2
// 6: 2, 3
// 9: 3

// Ask right questions. What happens if you don't update the prime factors ?

// Let's assume you're just incrementing the prime factors only for that respective element then total two's count will be two and three's 
// count will be two. But the actual answer is three.

// But, at element 6 when you got the maximum count of all it's prime factors, then 2's cnt is already 1.
// we will increment it's prime factors(2 and 3) with maxCnt + 1 = 1 + 1 = 2.,
// Now we come to element 9 which has 3 as prime factor, it's count is already 2 we just need to increment it by one.

// What is the right thinking here is that, Elements 2 and 6 are connected with the common factor 2.
// And, Elements 6 and 9 are connected with the common factor 3.



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