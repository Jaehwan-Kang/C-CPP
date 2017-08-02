#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*   MacroConst.c

#define	NAME	"홍길동"
#define AGE		24
#define PRINT_ADDR	puts("주소: 경기도 용인시\n")

int main(void)
{
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}

*/

// MacroFunction.c
#define SQUARE(X) ((X)*(X))

int main(void)
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("Square of 3 + 2 : %d \n", SQUARE(3 + 2));
	return 0;
}