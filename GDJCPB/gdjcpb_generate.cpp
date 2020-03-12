#include<iostream>
#include<cassert>
#include<random>
#include<cmath>
using namespace std;

int main(int c, char* v[]) {
  assert(c==3);
  int l=stoi(v[1]), max_nm=stoi(v[2]);
  std::random_device r;
  std::default_random_engine g(r());
  std::uniform_int_distribution<int> dnm(1,max_nm);
  cout << l << endl;
  int m=dnm(g), n=dnm(g); 
  std::uniform_int_distribution<int> dnE(n+m,pow(n+m,2));
  int n_E=dnE(g);
  cout << m << " " << n << " " << n_E << endl;
  for (int i=1;i<l;i++) { 
    n=dnm(g); 
    std::uniform_int_distribution<int> dnE(n+m,pow(n+m,2));
    n_E=dnE(g);
    cout << n << " " << m << " " << n_E << endl;
    m=n;
  }
  return 0;
}
