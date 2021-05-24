//viet ham tim gia tri lon nhat,nho nhat trong ma tran
#include<iostream>
using namespace std;
void NhapMaTran(int a[][100], int m, int n)
{
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    {
	    	cout<<"A["<<i<<"]["<<j<<"] = ";
	    	cin>>a[i][j];
	    	
	    	}
	}
	void XuatMaTran(int a[][100],int m,int n)
	{
		for(int i = 0; i<m;i++)
		{
			for (int j = 0; j<n; j++)
			cout<<"\t"<<a[i][j];
			cout<<"\n";
			}
		}
		int PhanTuLonNhat(int a[][100],int m,int n)
		{
			int max = a[0][0];
			for(int i = 0;i<m;i++)
			for(int j=0;j<n;j++)
			if(a[i][j]>max)
			max = a[i][j];
			return max;
			}
int main(){
	int a[100][100];
	int m,n;
	cout<<"nhap vao so hang n= ";
	cin>>n;
	cout<<"nhap vao so cot m= ";
	cin>>m;
	cout<<"nhap vao ma tran: \n";
	NhapMaTran(a,m,n);
	XuatMaTran(a,m,n);
	cout<<"\n Phan tu lon nhat la "<<PhanTuLonNhat(a,m,n);
	
	}
