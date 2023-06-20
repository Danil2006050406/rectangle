// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        if (l < 0 || w < 0) {
            cout << "Error: entered negative side values!" << endl;
            length = 0;
            width = 0;
        }
        else {
            length = l;
            width = w;
        }
    }

    double calculateArea() {
        double area = length * width; // Формула площі прямокутника
        return area;
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    double area = rectangle.calculateArea();

    if (area > 0) {
        cout << "Area of ​​the rectangle: " << area << endl;
    }

    return 0;
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
