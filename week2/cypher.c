//cypher.c
#include<stdio.h>
#include<string.h>

void cypher(char*msg,int sft){
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i{
		ch = msg[i]

		if (ch > 'A' && ch <= 'z') {
			ch = ch +sft;

			if (ch >'z' &&ch <= 'z') {
				ch = ch + sft;
}
;	}
}
int main(void) {
	//사용자에게 메시지를 받아
	char message[100];
	printf("Enter a message:");
	fgets(message, sizeof(message), stdin);
	//암호 값 주기 (분자를 몇 개씩 이동하기?)
	int shift;
	printf("Enter shift value ");
	scanf_s("%d", &shift);

	//암호로 변경하기
	cypher(message, shift);
	// 암호된 메시지를 출력하기
	printf("Encrypted! %s", message);





	return 0;

}