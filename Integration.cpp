#include <cmath>
#include <iostream>
using namespace std;

class Integration {
  private:
    double x0, xn; // limits of integration
    double (*f)(double x); //function to be integrated
  public:
    Integration(double (*F)(double x), double a,
      double b) {
      f=F;
      x0=a;
      xn=b;}
    double Trapezoidal(int n);
    double Simpsons13(int n);
};

double Integration::Trapezoidal(int n)
{
  double h=(xn-x0)/n;
  double sum=0.0;
  double x=x0;
  double I;

  for(int i=1; i<=n-1; i++)
  {
    x+=h;
    sum+=f(x);
  }

  I=(f(x0)+f(xn)+2.0*sum)*h/2.0;

  return I;
}

double Integration::Simpsons13(int n)
{
  double h=(xn-x0)/n;
  double sum=0.0;
  double x=x0;
  double I;

  for(int i=1; i<n; i++)
  {
    x+=h;
    if (i%2) sum+=4*f(x);
    else sum+=2*f(x);
  }

  I=(f(x0)+f(xn)+sum)*h/3.0;

  return I;
}


double FUN(double x) // User supplied function 
{
  return ((4*x)/(2-8*x*x));
} 

int main() {
  Integration I(FUN,3,5);

  int i;
  for(i=2;i<=16;i+=2)
    cout << "n=" << i << ", I(trap)=" << I.Trapezoidal(i)
      << ", I(simp)=" << I.Simpsons13(i) << endl;
  system ("pause");
  return 0;
}
