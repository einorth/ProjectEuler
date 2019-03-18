#include "../euler_tools.cc"
using namespace std;

// Calls on data file ../Data/p008.dat

// Finds the largest n-length product of adjacent digits in a file

int main(){
  ifstream fin;
  fin.open("../Data/p008.dat");

  string input;
  fin >> input;

  int a;
  int n = 13;
  long int prod;
  long int max = 0;
  vector<int> nums(n);

  for(int i=0; i<input.length()-n; ++i){
    prod = 1;
    for(int j=0; j<n; ++j){
      nums[j] = input[i+j] - '0';
      if(nums[j] == 0){
        i = i+j+1;
        j = n;
      }
    }
    for(int k=0; k<n; ++k){
      prod *= nums[k];
    }
    if(max<prod){
      max = prod;
    }
  }

  cout << "The largest product of " << n << " adjacent digits is " << max << endl;

  fin.close();
  return (0);
}
