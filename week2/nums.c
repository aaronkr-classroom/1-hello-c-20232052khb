//nums.c
#include<stdio.h>
#include<limits.h>//�ִ밪 �ּҰ�

int main(void) {
	//char 1����Ʈ(����)

	char ch = 'A';
	printf("char:\n");
	printf("Value:%c\n",ch);
	printf("Max:%d\n", CHAR_MAX);
	printf("Mix:%d\n", CHAR_MIN);
	

	//signed short int 2����Ʈ(����)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value:%c\n", sshort);
	printf("Max:%d\n",SHRT_MAX);
	printf("MIx:%d\n",SHRT_MIN);
	
	//unsigned short int 2����Ʈ(����)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value:%c\n", ushort);
	printf("Max:%d\n",SHRT_MAX);
	printf("MIx:%d\n",SHRT_MIN);

	//signed int 4����Ʈ(����)
	signed long int slong  = 1234;
	printf("\nsigned long int:\n");
	printf("Value:%c\n", slong);
	printf("Max:%d\n", LONG_MAX);
	printf("MIx:%d\n", LONG_MIN);
	//unsigned int 4����Ʈ(����)
	signed long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value:%c\n", slong);
	printf("Max:%d\n", ULONG_MAX);
	
	
	// signed long int 4����Ʈ(�Ǽ�)
	signed int sint = 1234;
	printf("\nsigned short int:\n");
	printf("Value:%c\n", sint);
	printf("Max:%d\n", INT_MAX);
	printf("MIx:%d\n", INT_MIN);
	// unsigned long int 4����Ʈ(�Ǽ�)
	unsigned short int ulong = 12345U;
	printf("\nunsigned ulong int:\n");
	printf("Value:%d\n", ulong);
	printf("Max:%d\n", UINT_MAX);
	//signed double 8����Ʈ(�Ǽ�)
	 
	//unsigned double 8����Ʈ(�Ǽ�)

	//float (�׻� ��ȣ �����̤� 4����Ʈ �Ǽ�
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value:%f\n", f);
	//printf("Max:%d\n", FLT_MAX);
	//printf("Min:%d\n", FLT_MIN);

	//double �׻� ��ȣ ���� 8����Ʈ �Ǽ�
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value:%3f\n", d);
	//printf("Max:%d\n", DBL_MAX);
	//printf("Min:%d\n", DBL_MIN);
	return 0;
}

