#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char numStr[10][5] = { "��", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��" };
char scaleStr[4][5] = { "", "��", "��", "õ" };
char unitStr[5][5] = { "", "�� ", "�� ", "�� ", "�� " };
//�� �迭�� ���Ұ� ���ڰ� �ƴ� ����'��'�ӿ� �����Ѵ�


void testcase(int n)
{
	//���ڸ� �Է¹ް� �� �ٿ� ����Ѵ�
	int count = 0;
	char *arr;

	arr = (char*)malloc(strlen(n) * sizeof(char));
	for (int i = 0; i<strlen(n); i++) {
		arr[i] = numStr[n % 10];
		n = n / 10;
		count++;
		if (count == 4);

	}
}

int main()
{
	int t;
	int caseIndex;
	int Num;
	scanf("%d", &t);
	for (caseIndex = 0; caseIndex<t; caseIndex++)
	{
		scanf("%d", &Num);
		testcase(Num);
	}

	return 0;
}