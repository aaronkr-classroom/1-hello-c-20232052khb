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
	//����ڿ��� �޽����� �޾�
	char message[100];
	printf("Enter a message:");
	fgets(message, sizeof(message), stdin);
	//��ȣ �� �ֱ� (���ڸ� �� ���� �̵��ϱ�?)
	int shift;
	printf("Enter shift value ");
	scanf_s("%d", &shift);

	//��ȣ�� �����ϱ�
	cypher(message, shift);
	// ��ȣ�� �޽����� ����ϱ�
	printf("Encrypted! %s", message);





	return 0;

}