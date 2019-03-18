#include "../euler_tools.cc"
using namespace std;

int main(){

  vector<int> pyth(3);

  int M = 35;
  int N = 35;
  int ans;
  for(int m=1; m<M; ++m){
    for(int n=1; n<N; ++n){
      pyth = pyth_gen(m,n);

      if(pyth[0] + pyth[1] + pyth[2] == 1000){
        ans = pyth[0] * pyth[1] * pyth[2];
        break;
      }
    }
  }
  cout << "The product of the special Pythagorean triple is " << ans << endl;

  return(0);
}
