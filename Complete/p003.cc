#include "../euler_tools.cc"
using namespace std;


int main() {

  long long int N = 600851475143;
  int n = ceil(sqrt(N));
  vector<int> primes = sieve(n);
  int largest;
  for(int i=0; i<primes.size(); ++i){
    while(N%primes[i]==0){
      N /= primes[i];
      largest = primes[i];
    }
  }

  cout << "The largest prime factor of " << N << " is " << largest << endl;

  return (0);
}
