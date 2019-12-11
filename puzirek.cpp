#include <iostream>//библиотека вводв и вывода
 
using namespace std;//библиотека пространства имен,для их объединения в логику кода
 
int main() {
  int massive[10]; // объявил массив на 10 ячеек,тип int
  cout << "input 10 numbers,use probel: " << endl;//входной поток
 
  for (int i = 0; i < 10; i++) {
    cin >> massive[i]; //выходной поток
  }
 
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (massive[j] > massive[j + 1]) {
        int b = massive[j]; // создал дополнительную переменную
        massive[j] = massive[j + 1]; //сравниваем соседние элементы
        massive[j + 1] = b; //меняем местами элементы,можно только через доп переменную
      }
    }
  }
 
  cout << "massive is sorted: ";
 
  for (int i = 0; i < 10; i++) {
    cout << massive[i] << " "; // выводим элементы массива через пробел
  }
  return 0;
}
