#include<iostream>
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
void sapxeptang(int a[],int n){
	for(int i=0; i<n; i++){
		int min = a[i];
		for (int j= i+1 ; j<n ;j++){
			if (a[j]<min){
				min=a[j];
				a[j]=a[i];
				a[i]=min;
			}
		}
	}
	xuat(a,n);
}
double trungvi(int a[],int n){
	double tv;
	if ((n%2)==1) tv=a[n/2];
	else {
		int c = n/2;
		tv = (a[c]+a[c-1])/2;
	}
	cout<<tv<<endl;
		return tv;
}

int main(){
	int a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	cout << "Xuat mang: " << endl;
	xuat(a, n);
	sapxeptang(a,n);
	trungvi(a,n);
	
	system("pause");
	return 0;
}
