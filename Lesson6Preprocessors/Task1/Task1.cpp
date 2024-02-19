#include <iostream>
#define MODE 0

#ifndef MODE 
#error: MODE has to be defined
#endif

#if MODE == 1
int add(int x, int y) {
    return x + y;
}
#endif

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
#if MODE == 0
    std::cout << "Работаю в режиме тренировки. \n";
#elif MODE == 1
    int x, y;

    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> x;
    std::cout << " Введите число 2 :";
    std::cin >> y;
    std::cout << "Результат сложения: " << add(x, y) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif
}

