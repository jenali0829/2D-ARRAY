#include<stdio.h>
main(){
	
	int n;
	printf("Enter vale :");
	scanf("%d",&n);
	
	int a[n][n];
	int r,c;
	
	for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			printf("Enter value[%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
		}
	}
		for(r=0; r<n; r++){
		for(c=0; c<n; c++){
			printf("%d",a[r][c]);
	
}
		printf("\n");
	}
}




  
   
