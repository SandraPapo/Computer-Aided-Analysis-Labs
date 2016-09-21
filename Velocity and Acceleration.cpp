#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

  double v, a, t;
  cout <<" Enter time " ;
  cin >> t ;
	v = 0.00001 * t*t*t -0.00488 * t * t + 0.75795 * t + 181.3566;
	a = 3-0.000062 * v * v;
  cout <<"velocity is " << v <<" m/s"<<endl;
  cout <<"acceleration is " << a << "m/s^2"<<endl;
  system("pause");
  return 0;
}