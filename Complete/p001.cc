// Sum of multiples problem

#include<iostream>
using namespace std;



int main(){

  cout << "Enter the numbers whose multiples you want to sum -> ";
  int m,n;
  cin >> m >> n;
  cout << "Enter the upper limit of the multiples -> ";
  int N; cin >> N;

  int ans = 0;

  for(int i=m; i<N; i += m){
    ans += i;
  }
  for(int i=n; i<N; i += n){
    ans+=i;
  }
  for(int i=m*n; i<N; i += m*n){
    ans-=i;
  }

  cout << "The answer is " << ans << endl;



  return(0);
}
