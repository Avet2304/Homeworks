#include <stdio.h>

int main(){
	
	int a;
	char c;
	int b;
	int sum;

	scanf("%d", &a);
	scanf("%c", &c);
	scanf("%d", &b);
	if(c == '+'){
		sum = a + b;
		printf("%d", sum);		
	}


	return 0;
}
