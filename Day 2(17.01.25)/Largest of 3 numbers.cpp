#include<stdio.h>
int main(){
	int a=5,b=6,c=7;
	if(a>b){
		if(a>c){
			printf("A is greater");
		}
		else{
			printf("C is greater");
		}
	}
	else if (b>a){
		if(b>c){
			printf("B is greater");
		}
		else{
			printf("C is greater");
		}
	}
	else{
		printf("C is greater");
		return 0;
	}
		
}
