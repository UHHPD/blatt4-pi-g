#include <iostream>
#include <cmath>

double zufall( ) {
  int a = 205;
  int c = 29573;
  int m = 139968;
  double u = 0;
  int static I = 123;
  I = ((a*I + c) % m);
  return I/(double) m;
}

int main() {
  int N_K = 0;
  int N = 0;
  for (int i = 0; i < 100000000; i++){
    N += 1;
    double x2 = pow(zufall(),2);
    double y2 = pow(zufall(),2);
    if (x2+y2 <= 1){
     N_K += 1; 
    }
    
  }
double p = N_K/(double) N;
  std :: cout << p << std :: endl;
  std :: cout << 4*p << std :: endl;
}
