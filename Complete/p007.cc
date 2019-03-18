#include "../euler_tools.cc"
using namespace std;


int main(){
  vector<int> primes = sieve(1000000);
  cout << primes[10000] << endl;
  return(0);
}
