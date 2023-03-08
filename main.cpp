// Write a program to Replace all 0’s with 1 in a given integer
#include <iostream>
using namespace std;
void replace(int a) {
  int k = 0;
  if (a == 0) {
    k = 0;
  }
  while (a > 0) {
    int r = a % 10;
    if (r == 0) {
      r = 0; // repalacethe 0 number to 1
    }
    a = a / 10;
    k = k * 10 + r;
  }
  a = 0;
  while (k > 0) {
    int rl = k % 10;
    a = a * 10 + rl;
    k = k / 10;
  }
  cout << "New number is: " << a;
}

int main() {
  int a = 310020;
  replace(a);
}