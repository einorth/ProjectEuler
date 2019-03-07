#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
using namespace std;

int gcd(int,int);
int lcm(int,int);
vector<int> sieve(int);

int gcd(int a, int b){
  int tmp;
  while(b!=0){
    tmp = b;
    b = a%b;
    a = tmp;
  }
  return(a);
}

int lcm(int a, int b){
  long int a1 = a;
  long int b1 = b;

  int t = a1*b1/gcd(a,b);
  return(t);
}

vector<int> sieve(int n) {
    vector<bool> nums(n, true);
    vector<int> prime;
    nums[0] = false; nums[1] = false;

    for(int i=2; i<n; ++i){
      if(nums[i]){
        for(int j=2; j<=n/i; ++j){
          nums[i*j] = false;
        }
        prime.push_back(i);
      }
    }

    return(prime);
}
