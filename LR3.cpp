#include <iostream>
#include <cmath>  // підключення бібліотеки для математичних функцій
using namespace std;

int main() {
    // Завдання 1: Обчислення кількості секунд з початку останньої хвилини.
    cout << "Task 1." << endl;
    int N; // змінна для збереження кількості секунд
    cout << "Enter the number of seconds (N): ";
    cin >> N;

    // Обчислення залишку секунд з початку останньої хвилини
    int seconds = N % 60;
    cout << "Number of seconds since the start of the last minute: " << seconds << endl;

    // Завдання 2: Перевірка на унікальність цифр тризначного числа.
    cout << "\nTask 2." << endl;
    int number; // змінна для тризначного числа
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Витягуємо кожну цифру числа
    int hundreds = number / 100;        // старша цифра
    int tens = (number / 10) % 10;      // середня цифра
    int units = number % 10;            // молодша цифра

    // Перевірка, чи всі цифри числа різні
    bool all_digits_different = (hundreds != tens) && (hundreds != units) && (tens != units);
    cout << "All digits are different: " << boolalpha << all_digits_different << endl;

    // Завдання 3: Обчислення математичного виразу
    cout << "\nTask 3." << endl;
    const double pi = 3.141592;  // константа π
    double x;  // змінна для введення користувачем значення x
    cout << "Enter the value of x: ";
    cin >> x;

    // Обчислення частин математичного виразу
    double exp_part = exp(-x);  // експоненційна частина e^(-x)
    double sin_part = pow(sin((x + 39) * pi / 180), 2);  // синус в квадраті від (x + 39°), переводимо градуси в радіани
    double sqrt_part = sqrt(fabs(x - 2 * sin(x)));  // корінь квадратний з |x - 2*sin(x)|
    double denom = cbrt(1 - sqrt_part);  // кубічний корінь з (1 - sqrt_part)
    double tgx_log_part = 0.5 * tan(x) * log(fabs(x)) / log(3);  // тангенс і логарифм по основі 3

    //  результат виразу
    double y = (exp_part * sin_part) / denom + tgx_log_part;

    // Виведення результату
    cout << "Result of the expression y = " << y << endl;

    return 0;
}