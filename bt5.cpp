#include<iostream>
#include<math.h>
using namespace std;
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<"Nhap diem cua hoc sinh "<<i<<" la : ";
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
double trungbinh(int a[],int n){
	int sum=0;
	for (int i = 0;i<n;i++){
		sum = sum + a[i];
	}
	double avg = (double)sum/n;
	return avg;
}


int main(){
	int a[1000];
	int n;
	cout<<"Nhap so hoc sinh : ";
	cin >> n;
	nhap(a, n);
	cout << "Danh sach vua nhap la : " << endl;
	xuat(a, n);
	cout << "Danh sach sau khi" << endl;
	sapxeptang(a,n);
	cout<<"trung binh diem là : "<<trungbinh(a,n)<<endl;
	
	system("pause");
	return 0;
}
