#include "../euler_tools.cc"
using namespace std;

int lcm(int,int);
int lcm_vec(vector<int>);

int main(){
  int a1, a2;
  cout << "Enter the range of numbers to be LCM'd -> ";
  cin >> a1 >> a2;

  vector<int> nums(a2-a1+1);
  for(int i=0; i<=a2-a1+1; ++i){
    nums[i] = a1+i;
  }

  cout << lcm_vec(nums) << endl;
  return(0);
}



int lcm_vec(vector<int> A){
  int tmp = lcm(A[0], A[1]);
  for(int i=2; i<A.size(); ++i){
    tmp = lcm(tmp,A[i]);
  }
  return(tmp);
}
