
#include <cfloat>
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  // PART I

  int n;
  double pi = 0.0;

  std::cout << "Enter a value for n: " << std::endl;
  std::cin >> n;

  for (int k = 0; k <= n; k++) {
    pi += 4 * ((pow(-1.0, k)) / (2.0 * k + 1));
  };
  std::cout << std::setprecision(16);
  std::cout << pi << std::endl;

  std::cout << "PI (approx): " << pi << "; n: " << std::setw(7) << n
            << std::endl;
  std::cout << "PI (actual): "
            << "3.141592653589793" << std::endl;

  std::cout << "Decimal digits of precision: " << DBL_DIG << std::endl;
  std::cout << "Number of base 2 mantissa digits of double precision floating "
               "point value: "
            << DBL_MANT_DIG << std::endl;
  std::cout << "Next representable number from 3.141592653589793: "
            << std::nextafter(3.141592653589793, 3.14) << std::endl;

  return 0;
}
