#include<iostream>
void Nhapmang(int arr[], int &n);
int Dem(int arr[], int n);
using namespace std;


int main() {
	int arr[100];
	int n;
	Nhapmang(arr,n);
	cout<<"Day co so tat ca so am la: "<<Dem(arr,n);
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

int Dem(int arr[], int n){
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] < 0){
			dem++;
		}
	}
	return dem;
}
