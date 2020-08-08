#include <stdio.h>

int main(){

	unsigned int sum = 0;
	int brojac = 1;
	
	for(unsigned int i = 10000; i < 100000; i++){
		for(unsigned int j = 1; j <= i; j++){
			sum += j;
		}
		printf("%d - ", sum);
		for(unsigned int k = 1; k <= sum/2; k++){
			if(sum % k == 0){
				brojac++;
				if(brojac > 500){
					break;
				}
			}
		}
		if(brojac >= 500){
			printf("RESULT: %d\n", sum);
			break;
		}
		else{
			printf("%d\n", brojac);
			brojac = 0;
		}
		sum = 0;
	}
	return 0;
}
