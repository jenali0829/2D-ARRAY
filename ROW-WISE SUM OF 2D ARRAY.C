#include<stdio.h>
main(){
	
	 int n;
	printf("Enter vale 	N :");
	scanf("%d",&n);
	
	int r,c;
	int sumR;
	int sumC;
	int a[n][n];
	
	for(r=0; r<n; r++){
	for(c=0; c<n; c++){
		printf("Enter value[%d][%d]:",r,c);
		scanf("%d",&a[r][c]);
			
		}
	}
	for(r=0; r<n; r++){
	sumR=0;
	for(c=0; c<n; c++){
		printf("%d",a[r][c]);
		sumR+=a[r][c];
			}
				printf("\n");
				printf("SUM OF Row%d=%d\n",r+1,sumR);
			}
}
