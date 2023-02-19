#include <iostream>
using namespace std;

void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
	cout << "Nhap vao phan tu a[" << i << "] : ";
	cin >> a[i];
 }
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
	cout << a[i] << " ";
	cout<<endl;
}

void dao(int* a, int n)
{    
   
    for (int i = 0; i < n / 2; ++i) {
       
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}


int main()
{
	int a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	cout << "Xuat mang: " << endl;
	xuat(a, n);
	dao(a,n);
	cout<<"Ham sau khi dao : "<<endl;
	xuat(a,n);

    
   

    return 0;
}
