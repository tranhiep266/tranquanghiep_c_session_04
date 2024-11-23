#include <stdio.h>
int main(){
	int month;
	printf("Thang:");
	scanf("%d", &month);
	if(month == 1){
		printf("Thang 1 co 31 ngay");
	}else if(month == 2){
		printf("Thang 2 co 29 ngay");
	}else if(month == 3){
		printf("Thang 3 co 31 ngay");
	}else if(month == 4){
		printf("Thang 4 co 30 ngay");
	}else if(month == 5){
		printf("Thang 5 co 31 ngay");
	}else if(month == 6){
		printf("Thang 6 co 30 ngay");
	}else if(month == 7){
		printf("Thang 7 co 31 ngay");
	}else if(month == 8){
		printf("Thang 8 co 31 ngay");
	}else if(month == 9){
		printf("Thang 9 co 30 ngay");
	}else if(month == 10){
		printf("Thang 10 co 31 ngay");
	}else if(month == 11){
		printf("Thang 11 co 30 ngay");
	}else if(month == 12){
		printf("Thang 12 co 31 ngay");
	}else{
		printf("Thang khong hop le");
	}
	return 0;
}
