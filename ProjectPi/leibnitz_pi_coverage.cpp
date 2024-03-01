

#include <cfloat>
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  // PART II
  double pi = 0.0;

  for (int n = 2; n <= 1048576; n *= 2) {
    for (int k = 0; k <= n; k++) {
      pi += 4 * ((pow(-1.0, k)) / (2.0 * k + 1));
      std::cout << std::setprecision(16);
    };
    std::cout << "PI: " << pi << "; n: " << n << std::endl;
  };

  return 0;
};
