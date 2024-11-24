#include <stdio.h>
int main(){
	int number;
	printf("So nguyen:");
	scanf("%d", &number);
	if(number > 0){
		printf("%d la so nguyen duong", number);
	}else if(number == 0){
		printf("%d khong la so nguyen duong, khong la so nguyen am", number);
	}
	else{
		printf("%d la so nguyen am", number);
	}
	return 0;
}
