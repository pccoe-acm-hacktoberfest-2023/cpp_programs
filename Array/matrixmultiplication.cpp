#include<iostream>
using namespace std;
	int main(){
		int a[3][3], b[3][3], c[3][3],sum[3][3], i, j, k;
		cout<<"Enter the Matrix value of a :\n";
		for(i=0; i<3; i++){
			for(j=0; j<=2; j++){
				cin>>a[i][j];
			}
		}
		cout<<"Enter the Matrix value of b :\n";
		for(i=0; i<3; i++){
			for(j=0; j<=2; j++){
				cin>>b[i][j];
			}
		}
		for(i=0; i<=2; i++){
			for(j=0; j<=2; j++){
				c[i][j]=0; 
				for(k=0; k<=2; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (i = 0; i < 3; i++) {
        		for (j = 0; j < 3; j++) {
            			sum[i][j] = a[i][j] + b[i][j];
        		}
    		}
		cout<<"\nMatrix Addition:\n";
    		for (i = 0; i < 3; i++) {
       			for (j = 0; j < 3; j++) {
           			 cout<<sum[i][j]<<" ";
        		}
        		cout<<endl;
   		}
		
		cout<<"Multiplication of matrix is : \n";
		for(i=0; i<=2; i++){
			for(j=0; j<=2; j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
		return 0;
	}