#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;

// Generate parametrized Pythagorean triple
vector<int> pyth_gen(int,int);
// Greatest Common Divisor (GCD) of two numbers
int gcd(int,int);
// Least Common Multiple (LCM) of two numbers
int lcm(int,int);
// Generate a vector of primes less than or equal to n
vector<int> sieve(int);
// Check if a number is a palindrome
bool is_palindrome(int);
// Generate a vector of fibonacci numbers less than or equal to n
vector<int> fib_gen(int);

// Generate parametrized Pythagorean triple
vector<int> pyth_gen(int m, int n){
  vector<int> pyth(3);
  pyth[0] = m*m - n*n;
  pyth[1] = 2*m*n;
  pyth[2] = m*m + n*n;

  return(pyth);
}

// Greatest Common Divisor (GCD) of two numbers
int gcd(int a, int b){
  int tmp;
  while(b!=0){
    tmp = b;
    b = a%b;
    a = tmp;
  }
  return(a);
}

// Least Common Multiple (LCM) of two numbers
int lcm(int a, int b){
  long int a1 = a;
  long int b1 = b;

  int t = a1*b1/gcd(a,b);
  return(t);
}
// Generate a vector of primes less than or equal to n
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

// Check if a number is a palindrome
bool is_palindrome(int n){
  string num = to_string(n);
  int checks = num.length() / 2;

  for(int i=0; i<checks; ++i){
    if(num.back() == num[i]){
      num.pop_back();
    }else{
      return(false);
    }
  }

  return(true);
}

// Generate a vector of fibonacci numbers less than or equal to n
vector<int> fib_gen(int n){
  int a1 = 1;
  int a2 = 2;
  vector<int> fib; fib.push_back(a1); fib.push_back(a2);

  int tmp = a1+a2;

  while(tmp < n) {
    fib.push_back(tmp);
    a1 = a2;
    a2 = tmp;
    tmp = a1+a2;
  }

  return fib;
}
