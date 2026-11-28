#include <iostream>
 #include <iomanip>
 
  int main() { 
   double n1, n2, n3;
   std::cout << "Masukkan 3 nilai (pisahkan spasi): ";
   std::cin >> n1 >> n2 >> n3;
   
   std::cout << std::fixed << std::setprecision(2);
   std::cout << "Rata-rata: " << (n1 + n2 + n3) / 3.0 << '\n';
   
    return 0;
}
