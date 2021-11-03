#include<iostream>
void Nhapmang(int arr[], int &n);
float Sum(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Tong day vua nhap la: "<<Sum(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap n: ";
		cin >> n;
	} while (n < n);
	for (int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin >> arr[i];
	}
}

float Sum(int arr[], int n){
	float sum = 0;
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] % 5 == 0){
			sum += arr[i];
			dem++;
		}
	}
	return sum / dem;
}
