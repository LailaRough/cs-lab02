#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
<<<<<<< HEAD
         << "A * B = " << a * b << '\n';
=======
         << "A * B = " << a * b << '\n'
         << "A / B + A = " << a / b + a << '\n';
>>>>>>> 458b03e24a4b78715b9c16be2ce719ef0d4ba6a5
    return 0;
}
