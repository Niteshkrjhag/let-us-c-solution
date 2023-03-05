#include <stdio.h>

int main() {
  char operation;
  double num1, num2;
  scanf("%c%lf%lf", &operation, &num1, &num2);
  double result;
  if (operation == '+') {
    result = num1 + num2;
  } else if (operation == '-') {
    result = num1 - num2;
  } else if (operation == '*') {
    result = num1 * num2;
  } else if (operation == '/') {
    result = num1 / num2;
  } else {
    printf("Invalid operator");
    return 0;
  }
  printf("%lf", result);
  return 0;
}