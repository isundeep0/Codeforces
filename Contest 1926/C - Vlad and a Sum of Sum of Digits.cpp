#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int digitSum(int n){
  int sum = 0;
  while (n != 0){
    int rem = n%10;
    sum += rem;
    n /= 10;
  }
  return sum;
}

int main()
{

  int t;
  cin>>t;

  vector<int> arr(200001, 0);

  for (int i = 1; i<=200000; i++){
    arr[i] = digitSum(i) + arr[i-1];
  }





  while (t--){

    int n;
    cin>>n;

    pr(arr[n]);


  }

  return 0;
}
