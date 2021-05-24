//nhap mang 2 chieu co kich thuoc M x N. Hien thi ma tran vua nhap ra man hinh
#include<iostream>
using namespace std;
int main(){
	int a[50][50];
	int i,j,m,n;
	cout<<"nhap so hang n= ";
	cin>>n;
	cout<<"nhap so cot m= ";
	cin>>m;
	cout<<"nhap ma tran :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++){
			cin>>a[i][j];
			
			}
		}
		cout<<"ma tran vua nhap la:\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++){
				cout<<a[i][j];
				}
				cout<<"\n";
			}

	}

