/*nhap vao ma tran N x M, in ra ma tran vua nhap duoi dang bang. Hien thi va tinh tong cac 
phan tu tren hang chan cua ma tran. Tim gia tri lon nhat tren cot 1 cua ma tran*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[50][50];
	int i,j,m,n;
	cout<<"nhap so hang n= ";
	cin>>n;
	cout<<"nhap so cot m= ";
	cin>>m;
	cout<<"nhap vao ma tran:\n";
	for (i=0;i<n;i++)
	{
		 for(j=0;j<m;j++)
		 {
		 	cin>>a[i][j];
		 	
		 	}
	}
	//hien thi ma tran vua nhap duoi dang bang
	cout<<"ma tran vua nhap la:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j];
			}
			cout<<"\n";
		}
		//tinh tong phan tu tren hang chan cua mang
		float s=0;
		for (i=0;i<n;i=i+2)
		{
		 for (j=0;j<m;j++)
		 {
		 	s=s+a[i][j];
		 	}
		}
		cout<<"\n tong phan tu tren hang chan cua mang la "<<s;
		//tim max tren cot 1 cua mang
		int max;
		max=a[0][0];
		for(i=1;i<n;i++)
		{
		  if(a[i][0]>max)
		  {
		  	max=a[i][0];
		  	}
		}
		cout<<"\n gia tri max tren cot 1 cua mang la "<<max;
		getch();
	}
