#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double c, b;

    printf("Введіть значення c: ");
    scanf("%lf", &c);

   
    printf("Введіть значення a (2, 4, або 6): ");
    scanf("%d", &a);

  if (a != 2 && a != 4 && a != 6) {
        printf("Неправильне значення a. Потрібно ввести 2, 4 або 6.\n");
  }
  
  if (a == 2) {
      b = a*a - 4*c / a*c;  
      printf("Коли a = 2, b = %f\n", b);
  }
  if (a == 4) {
      b = sqrt(a*c - 2*a); 
      printf("Коли a = 4, b = %f\n", b);
  }
  if (a == 6) {
      b = pow(c, 2) - 2*a;
      printf("Коли a = 6, b = %f\n", b);
  }

    return 0;
}
