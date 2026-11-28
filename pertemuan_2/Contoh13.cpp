#include <iostream>
 #include <iomanip> 
 
 int main() {
  constexpr double PI = 3.14159265358979; double r;
  std::cout << "Jari-jari: "; std::cin >> r; std::cout << std::fixed << std::setprecision(2);
   std::cout << "Luas     : " << PI * r * r << '\n';
    std::cout << "Keliling : " << 2 * PI * r << '\n';
	
	 return 0;
}
