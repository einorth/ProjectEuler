#include "../euler_tools.cc"
using namespace std;


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
