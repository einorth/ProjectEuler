#include "../euler_tools.cc"
using namespace std;


int main() {

  cout << "The largest palindrome that is the product of two 3-digit numbers is: ";

  int ans = 0;
  for(int i=100; i<1000; ++i){
    for(int j=100; j<1000; ++j){
      if(is_palindrome(i*j) && i*j > ans){
        ans = i*j;
      }
    }
  }

  if(ans==0){
    cout << "Unable to find one" << endl;
  }else{
    cout << "The answer is: " << ans << endl;
  }

  return(0);
}
