//viet ham nhap xuat ma tran kich thuoc M x N
#include<iostream>
using namespace std;
void NhapMaTran(int a[][100],int m, int n)
{
	for(int i = 0; i<m; i++)
	for(int j = 0; j<n;j++)
	{
		cout<<"A["<<i<<"]"<<"["<<j<<"] = ";
		cin>>a[i][j];
		}
	}
void XuatMaTran(int a[][100],int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j = 0; j<n; j++)
		cout<<"\t"<<a[i][j];
		cout<<"\n";
		}
	}
int main(){
	int a[100][100];
	int m,n;
	cout<<"nhap so hang n= ";
	cin>>n;
	cout<<"nhap so cot m= ";
	cin>>m;
	cout<<"nhap vao ma tran: \n";
	NhapMaTran(a,m,n);
	XuatMaTran(a,m,n);
	}









