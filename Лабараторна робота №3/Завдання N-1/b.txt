#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double c, b, num;

    printf("Введіть значення c: ");
    scanf("%lf", &c);

    printf("Введіть значення a (2, 4, або 6): ");
    scanf("%d", &a);

    if (a == 2) {
        b = a*a - 4*c / a*c;  
    } else if (a == 4) {
        num = sqrt(a*c - 2*a);  
      
      if (num >= 0) {
          b = sqrt(num);
      } else {
          printf("Умова виконується, але b не може бути обчислено через від'ємний аргумент під коренем\n");
      }
      
    } else if (a == 6) {
      b = pow(c, 2) - 2*a;
    } else {
        b = 0;
        printf("Значення a немає в списку оброблених випадків.\n");
      return 0;
    }

    printf("Для a = %d, було розвязано b = %f\n", a, b);

    return 0;
}
