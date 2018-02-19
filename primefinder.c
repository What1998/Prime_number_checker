#include <stdio.h>
#include <math.h>

int main(){
	int num,i,j,z=0;
	float sq;
	printf("Enter Number to be tested\n");
	scanf("%d",&num);
	sq=sqrt(num);
	for(i=2;i<sq;i++){
		for(j=2;j<sq;j++){
			if(num==i*j){
				printf("not prime\n");
				z=1;
			}
		}
	}
	if(z==0)
		printf("Prime Number\n");
	return 0;
}