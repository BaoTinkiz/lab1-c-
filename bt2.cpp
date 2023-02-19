#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void quadraticEquation(int a, int b, int c){
	if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            cout << "Phuong trinh co nghiem duy nhat: " << -c/b << endl;
        }
    } else {
        int delta = b*b - 4*a*c;
        int x1 = (-b+sqrt(delta))/(2*a);
        int x2 = (-b-sqrt(delta))/(2*a);
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
}
 
int main()
{
 
    float a, b, c;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    quadraticEquation(a,b,c);
    return 0;
}
