#include <stdio.h>
main() {
  char a;
  double first, second;
  printf("Enter your choice \n 1.addition \n 2.substraction \n 3.multiplication \n 4.Division \n (1,2,3,4): ");
  scanf("%c", &a);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (a) {
    case '1':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '2':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '3':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '4':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
      default:
      printf("Invalide choice");
  }
}


