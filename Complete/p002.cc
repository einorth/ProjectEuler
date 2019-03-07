#include<iostream>
#include<vector>
using namespace std;

vector<int> fib_gen(int);

int main(){
  int limit;
  cout << "Enter your limit for the Fibonacci sequence -> ";
  cin >> limit;

  vector<int> fib = fib_gen(limit);
  int ans = 0;
  for(int i=0; i<fib.size(); ++i){
    if(fib[i] % 2 == 0){
      ans += fib[i];
    }
  }

  cout << "The sum of the even Fibonacci numbers up to " << limit << " is " << ans << endl;
  return(0);
}

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
