#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // ǥ�� ����� ���?

void main() {
	int age = 23;
	int yourAge = 0;
	short manAge = 22;
	float height = 165.3;
	double weight = 60.2;


	printf("���� %d���̴� ���� ������ �� ���̷δ� %d����. �� Ű�� %.2f cm�̰�,\n�� �����Դ� %lf kg ����.\n", age, manAge, height, weight);

	printf("�ʴ� �������? : ");

	scanf("%d", &yourAge);

	printf("�ʴ� %d���̱�. ����!\n", yourAge);

	printf("�̹����� �Ҽ��� ����� �غ� ���̴�.\n result = 1 / 2\n");

	float result;

	result = 1 / 2;

	printf("��� ���� �̰��̴�. %.2f\n", result);
	printf("���� �̻�����? float������ result�� ���� 1�� ���� 2�� ���� ���� �����߱� �����̴�. 1 / 2�� ������� ���� 0(���� 0)�� ������ ������ result���� �̻����� ���̴�.\n");
	printf("�̷��� �غ���.\n result = 1.0 / 2.0\n");

	result = 1.0 / 2.0;
	printf("��� ���� �̰��̴�. %.2f\n", result);

	printf("�ƴϸ� �ƿ� '����� ����ȯ'�� ����Ͽ� 1 / 2 ������� float ������ �ٲ� ���� �ִ�..\n");
	printf("�̷��� �غ���.\n result = (float)1 / 2\n");
	result = (float)1 / 2;
	printf("��� ���� �̰��̴�. %.2f\n", result);

	// ������ + ����� + ���� = F5
	// ������ + ����� = Ctrl + F7
	// ����� ���� ���� = Ctrl + F5


	//\n �� �ٹٲ�, \t�� �鿩����
	//���� \n���� �̽������� �������� �״�� ����ϰ� ���� �� �տ� \�� �ϳ��� ���̸� ��.
}