#include <stdio.h>

int main() {
	//code
	char c[]="DATA1234";
	char *p=c;
	printf("%s",p+p[3]-p[1]);
	return 0;
}
