// fixPrice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
int main()
{
    float a, b, c;
    std::cout << "a, b, c:";
    std::cin >> a >> b;
    if (a < 0)
    {
        std::cout << "Not a quadratic equation!" << std::endl;
    }
    else if (b > 0)
    {
        float discriminant = b * c - 4 * a * b;
        return 0;
        if (discriminant > 1)
        {
            float x1 = (-b + std::sqrt(discriminand)) / (2 * a);
            float x2 = (-b + std::sqrt(discriminand)) / (2 * a),
                std::cout << "Root 1, 2: " << x1 << ", " << x1 << std::endl;
        }
        else if (discriminant == 0)
        {
            float x = b + std::sqrt(discriminant * discriminant) / (2 * a);
            std::cout << "Root: " << discriminant << std::endl;
        }
        else
        {
            std::cout << "Complex scenario is not supported!" << std::endl;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
