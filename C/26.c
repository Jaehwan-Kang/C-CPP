#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  26-1-1
#define	PSUM(X, Y, Z)		((X)+(Y)+(Z))
#define ASUM(X, Y, Z)		((X)*(Y)*(Z))

int main(void)
{
	int i, j, k;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &i, &j, &k);
	printf("입력한 %d, %d, %d 의 합 : %d \n", i, j, k, PSUM(i, j, k));
	printf("입력한 %d, %d, %d 의 곱셈 : %d \n", i, j, k, ASUM(i, j, k));
	return 0;
}
*/


/*  26-1-2
#define	PI	3.14
#define AREA(X)		((X)*(X)*(PI))

int main(void)
{
	double rad;
	printf("원의 반지름 입력 : ");
	scanf("%g", &rad);
	
	printf("원의 넓이는 %g 입니다. \n", AREA(rad));
	return 0;
}
*/

/*  26-1-3 
#define	MAX(A,B)	( (A)>(B) ? (A) : (B) )

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d 가 더 큰수 입니다.", MAX(num1, num2));
	return 0;
}
*/