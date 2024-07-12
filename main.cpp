#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c;

  cout << " **********QUADRATIC FUNCTION**********\n";

  cout << " Type A value: ";
  cin >> a;

  while (a == 0)
  {
    cout << " 0 is not a valid value to A term\n";
    cin >> a;
  }

  cout << " Type B value: ";
  cin >> b;

  cout << " Type C value: ";
  cin >> c;

  double delta = b * b - 4 * a * c;

  if ( delta > 0) {
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    cout << " Roots are: X1 = " << x1 << ", X2 = " << x2;
    
  } else if ( delta == 0 ) {
    double x = -b / (2 * a);
    cout << " Root is: " << x;
  } else {
    cout << " No real roots";
  }


  return 0;
}