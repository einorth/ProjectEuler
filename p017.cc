#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int p_map(int n);

int main(){

  cout << "Usage:" << endl << "Enter a 1 followed by a number to count the letters used sequentially up to that number." << endl << "Enter a 2 to count the letters in a specific list of numbers." << endl;

  int mode;
  cin >> mode;



  if(mode == 1){

  }else if(mode == 2){

    vector<int> input(0);
    int temp;
    cin >> temp;
    while(temp != -1){
      input.push_back(temp);
      cin >> temp;
    }


  }else{
    cout << "Usage error." << endl;
  }

  return(0);
}


int p_map(int n){
  int m;
  switch(n){
    case 1:
    case 2:
    case 6:
    case 10:
	     m=3;
	     break;
    case 3:
    case 7:
    case 8:
    case 40:
    case 50:
    case 60:
    	m=5;
    	break;
    case 4:
    case 5:
    case 9:
    	m=4;
    	break;
    case 11:
    case 12:
    case 20:
    case 30:
    case 80:
    case 90:
    	m=6;
    	break;
    case 13:
    case 14:
    case 18:
    case 19:
    	m=8;
    	break;
    case 15:
    case 16:
    case 70:
    	m=7;
    	break;
    case 17:
    	m=9;
    	break;
    default:
	    cout << "Problem with reading numbers (" << n << ")" << endl;

  }
  return m;
}
