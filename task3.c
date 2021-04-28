#include <stdio.h>
#include <math.h>

int main() {
  int m, a=0;
  float x, n;

  printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
  printf("Запуск програми - 1\n");
  printf("Вихід з програми - 2\n");
  printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");

  while (1) {
    if (a == 0) {
      printf("\nВвести: ");
      scanf("%d", &m);
      a++;
    }
    else {
      printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
      printf("Ви можете спробувати ще раз - 1 \nВийти з програми - 2\n");
      printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
      printf("Ввести: ");
      scanf("%d", &m);
    }

    if (m==1) {
      printf("\nВведіть n: ");
      scanf("%f", &n);
      printf("Введіть x: ");
      scanf("%f", &x);

      float j, i, var, s = 0;
      for (i = 1; i <= n; i++) {
        for (var = 0, j = 2; j <= n; j++) {
          var += (x + j);
        }
        s += var;
      }

      printf("\n-_-_-_-_-_-_-_-_-_-_-\n");
      printf("Відповідь: %.2f", s);
    }

    else{
      break;
    }
  }
  return 0;
}
