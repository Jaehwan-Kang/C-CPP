#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/* 
 힙 영역의 메모리 공간 할당과 해제 :  malloc , free 함수

 void * malloc(size_t size);	=>  힙 영역으로의 메모리 공간 할당
 void free(void * ptr);			=>  힙 영역에 할당된 메모리 공간 해제
 
 → malloc 함수는 성공 시 할당된 메모리의 주소 값, 실패시 NULL 반환


 malloc 사촌뻘 calloc 함수
 void * calloc(size_t elt_count, size_t elt_size);	=> malloc 과는 다른 인자 전달 방식
 → 성공 시 할당된 메모리의 주소 값, 실패 시 NULL 반환

 힙에 할당된 메모리 공간 확장 시 호출하는 realloc 함수
 void * realloc(void * ptr, size_t size);
 → 성공 시 새로 할당된 메모리의 주소 값, 실패시 NULL 반환 

*/



// ReadStringFault2.c

//char * ReadUserName(void)
//{
//	char * name = (char*)malloc(sizeof(char)* 30);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void)
//{
//	char * name1;
//	char * name2;
//
//	name1 = ReadUserName();
//	printf("name1 : %s \n", name1);
//
//	name2 = ReadUserName();
//	printf("name2 : %s \n", name2);
//
//	printf("name1 : %s \n", name1);
//	printf("name2 : %s \n", name2);
//
//	free(name1);
//	free(name2);
//
//	return 0;
//}

// DynamicMemoryAllocation.c
//int main(void)
//{
//	int * ptr1 = (int*)malloc(sizeof(int));
//	int * ptr2 = (int*)malloc(sizeof(int) * 7);
//	int i;
//
//	* ptr1 = 20;
//
//	for(i=0; i<7; i++)
//		ptr2[i] = i + 1;
//
//	printf("%d \n", * ptr1);
//
//	for(i=0; i<7; i++)
//		printf("%d ", ptr2[i]);
//
//	free(ptr1);
//	free(ptr2);
//
//	return 0;
//}

// 25-2-1
int main(void)
{
	int maxlen, len, i;
	char * str;
	printf("문자열의 최대 길이 입력: ");
	scanf("%d", &maxlen);
	getchar();

	str = (char *)malloc(sizeof(char) * (maxlen + 1));

	printf("문자열 입력: ");
	fgets(str, maxlen + 1, stdin);
	
	str[strlen(str)-1] = 0;
	len = strlen(str);

	for(i=len; i>0; i--)
	{
		if(str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}