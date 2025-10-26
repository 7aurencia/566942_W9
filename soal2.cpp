#include <iostream>
#include <cmath> //panggil fungsi sqrt() -> untuk akar
using namespace std;

// function signatures
void radius(double X1, double Y1, double X2, double Y2)
{
    double r = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    cout << "\nRadius               : " << r;
}
void diameter(double r)
{
    cout << "\nDiameter             : " << 2 * r;
}
void circumference(double r)
{
    cout << "\nCircumference        : " << 2 * M_PI * r;
}
void area(double r)
{
    cout << "\nArea                 : " << M_PI * pow(r, 2);
}

// user masukkan angka
int main()
{
    double X1, Y1, X2, Y2; //-> main harus dikasih tau dulu ada apa saja nih di tetangga
    cout << "Laurencia Zaharani || B - Teknologi Informasi\n\n";
    cout << "Enter the center of the circle (X1 Y1): \n";
    cin >> X1 >> Y1;
    cout << "\nEnter a point of the circle (X2 Y2): \n";
    cin >> X2 >> Y2;

    // angka dijalankan sesuai rumus r
    double r = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    cout << "\n Result of your circleee \n";
    radius(X1, Y1, X2, Y2);
    diameter(r);
    circumference(r);
    area(r);

    return 0;
}
