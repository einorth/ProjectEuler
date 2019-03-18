#include "../euler_tools.cc"
using namespace std;

int main(){
  int n;
  cout << "Sum primes up to n = ";
  cin >> n;

  vector<int> primes = sieve(n);
  long int ans = 0;

  for(int i=0; i<primes.size(); ++i){
    ans += primes[i];
  }

  cout << "The sum of the primes below " << n << " is " << ans << endl;

  return(0);
}
