#include <stdio.h>
#include <stdlib.h>

int calc(int A[100],int m, int p){
	
	int k=0, g=0, c;
	
	float ort, total=0.0;
	
	for(c=0;c<m;c++){
		total+=A[c];
		if(A[c]<p) k++;
		else g++;
	}
	
	ort=total/m;
	
	printf("The average of class is: %.2f\n",ort);
	
	return k;
	
}

int main(){
	
	int i=0, j, n, A[100], pass;
	
	do{                                                                           //takes the number of students
		printf("Please enter the number of students:\n");
		scanf("%d",&n);
	} while(n>100);
	
	for(j=0; j<n; j++){                                                           //takes the grades of students
		printf("Please enter student %d 's grade:\n",j+1);
		scanf("%d",&A[i]);
		i++;
	}
	
	printf("Please enter the passing grade:\n");
	scanf("%d",&pass);
	
	int fail=calc(A,n, pass);
	printf("The number of students who failed: %d\n",fail);
	
	printf("The number of students who passed: %d\n",n-fail);
	
	return 0;
}
