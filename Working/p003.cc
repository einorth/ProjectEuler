#include "../euler_tools.cc"
using namespace std;

vector<int> sieve(int);

int main() {

  long long int N = 600851475143;
  int n = ceil(sqrt(N));
  n = 100;
  vector<int> primes = sieve(n);
  cout << n << endl;
  int largest;
  for(int i=0; i<n; ++i){
    // while(N%primes[i]==0){
    //   N /= primes[i];
    //   largest = primes[i];
    // }
    cout << primes[i] << endl;
  }

  cout << "The largest prime factor of " << N << " is " << largest << endl;

  return (0);
}

vector<int> sieve(int n) {
    vector<bool> nums(n, true);
    vector<int> prime();
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
