
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); 
    double x; 
    cout << "Введите x: ";
    cin >> x;

    double yn = x, 
        yn1 = 0; 

    while (true)
    {
        yn1 = 0.5 * (yn + 3 * x / (2 * yn * yn + x / yn));

        if (abs(yn1 - yn) < pow(10.0, -5.0)) 
            break; 

        yn = yn1; 
    }

    cout << yn << endl;

    system("pause");
    return 0;
}