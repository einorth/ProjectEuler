#include "../euler_tools.cc"
using namespace std;

int main(){
  int n;
  cout << "Enter a limit -> ";
  cin >> n;
  int a = 0; int b = 0;
  for(int i=1; i<=100; ++i){
    a += i;
    b += i*i;
  }
  a *= a;

  cout << "The difference between the square of sums and sum of squares of the first " << n << " natural numbers is " << a-b << endl;
  return(0);
}
