#include <iostream>
int main() {
  int* ptr = new int; 	// динамічне виділення пам’яті
  *ptr = 8; 			// записуємо знаечння
  delete ptr; 			// звільняємо память. ptr теперь висячий вказівник
  std::cout << *ptr; 		// розіменування можливе, але вже небезпечне
  delete ptr; 			// повторне звільнення небезпечне
  return 0;
}