//Zoe Van Winckel (zyv3xph) 2/15/21  xToN.cpp


#include <iostream>
using namespace std;

int xton(int base, int exp){

  if(exp == 0){
    return 1;
  }
  else{
    return base* xton(base, exp-1);
  }
 
}
int main(){

  int base,exp,result;
  cin>>base;
  cin>>exp;

  result = xton(base, exp);
  cout << result<< endl;
  return 0;
}

  
