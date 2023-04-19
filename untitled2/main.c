#include <stdio.h>

int H(int n, int i);
float suma(int n, int i);

int main() {
    int n, i;
    printf("\tЗадано m i n. Розробити програму для обчислення значень \nзаданих виразів. При обчисленні виразів використати рекурсивні функції. \nАлгебраїчна сума чисел від i=1 до n від H(n,i)= \n\t1, при n=0; \n\ti, при n=1; \n\t2(iH(n-1,i)-nH(n-2,i)), при n>1. \n");
    printf("Введіть n: ");
    scanf("%d", &n);

    float sum = 0;
    i=1;
    sum = suma(n, i);

    printf("Результат: %.2f\n", sum);
    return 0;
}

float suma(int n, int i){
    if(n >= i) return H(n, i) + suma(n, i+1);
    else return 0;
}

int H(int n, int i) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return i;
    } else {
        return 2 * (i * H(n - 1, i) - n * H(n - 2, i));
    }
}