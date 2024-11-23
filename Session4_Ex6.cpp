#include <stdio.h>
int main(){
	int chisocu, chisomoi, chisothang, tiendien;
	printf("Chi so cu: ");
	scanf("%d", &chisocu);
	printf("Chi so moi: ");
	scanf("%d", &chisomoi);
	if(chisocu > chisomoi){
		printf("Chi so dien khong hop le");
		return 0;
	}
	chisothang = chisomoi - chisocu;
	if(0 <= chisothang && chisothang < 50){
		tiendien = chisothang * 10000;
		printf("Tien dien thang : %d", tiendien);
		
	}else if(50 <= chisothang && chisothang < 100){
		tiendien = 49 * 10000 + (chisothang - 49) * 15000;
		printf("Tien dien thang : %d", tiendien);
		
	}else if(100 <= chisothang && chisothang < 150){
		tiendien = 49 * 10000 + 49 * 15000 + (chisothang - 49 * 2) * 20000;
		printf("Tien dien thang : %d", tiendien);
		
	}else if(150 <= chisothang && chisothang < 200){
		tiendien = 49 * 10000 + 49 * 15000 + 49 * 20000 + (chisothang - 49 * 3) * 25000;
		printf("Tien dien thang : %d", tiendien);
		
	}else{
		tiendien = 49 * 10000 + 49 * 15000 + 49 * 20000 + 49 * 25000 + (chisothang - 49 * 4) * 30000;
		printf("Tien dien thang : %d", tiendien);
	}
	return 0;
}
