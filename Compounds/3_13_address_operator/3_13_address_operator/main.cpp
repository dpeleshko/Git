#include <iostream>
int main() {
  int a = 7;
  std::cout << a << '\n'; 		// виводимо на екран значення змінної a
  std::cout << &a << '\n'; 		// виводимо на екран адресу змінної a
  std::cout << *&a << '\n'; 	// виводимо на екран значення комірки памяті змінної a
  return 0;
}
