#include <stdio.h>
#include <math.h>

int main() {
    double a;
    int n;
    
    // Ввод данных от пользователя
    printf("Введите значение a: ");
    scanf("%lf", &a);
    printf("Введите значение n: ");
    scanf("%d", &n);
    
    // Проверка корректности ввода
    if (a == 0) {
        printf("Ошибка: a не может быть равно 0!\n");
        return 1;
    }
    
    if (n < 0) {
        printf("Ошибка: n должно быть неотрицательным!\n");
        return 1;
    }
    
    // Инициализация переменных
    double sum_series = 0.0;
    int exponent = 1;  // начинаем с 2^0 = 1
    
    // Вычисление ряда с использованием цикла for
    printf("\nВычисление ряда:\n");
    printf("----------------\n");
    
    for (int i = 0; i <= n; i++) {
        double term = 1.0 / pow(a, exponent);
        sum_series += term;
        
        printf("Шаг %d: 1/a^%d = %.6f\n", i+1, exponent, term);
        printf("Текущая сумма: %.6f\n", sum_series);
        printf("----------------\n");
        
        // Увеличиваем экспоненту для следующего шага
        exponent *= 2;
    }
    
    // Вывод финального результата
    printf("\nИтоговая сумма ряда: %.6f\n", sum_series);
    
    return 0;
}