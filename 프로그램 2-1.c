#include <stdio.h> // �켱 { } �� ������ �߰�ȣ { } ���� �ڵ���� �����ִ� ������ �Ѵ�.
void main() // void�� �޸𸮸� �������� �ʱ� ������ void Ÿ���� ������ ������ �Ұ�, �߰�ȣ '{'�� �����Ͽ� '}'�� ������.
{
	printf("char �� ũ��� %d ����Ʈ./n", sizeof(char)); // char �� ũ��� 1 ����Ʈ �Դϴ�
	printf("unsigned char �� ũ��� %d ����Ʈ./n", sizeof(unsigned char)); // unsigned char �� ũ��� 1 ����Ʈ �Դϴ�
	printf("short �� ũ��� %d ����Ʈ./n", sizeof(short)); // short �� ũ��� 2 ����Ʈ �Դϴ�
	printf("unsigned short �� ũ��� %d ����Ʈ./n", sizeof(unsigned short)); // unsigned short �� ũ��� 2 ����Ʈ �Դϴ�
	printf("int �� ũ��� %d ����Ʈ./n", sizeof(int)); // int �� ũ��� 4 ����Ʈ �Դϴ�
	printf("unsigned int �� ũ��� %d ����Ʈ./n", sizeof(unsigned int)); // unsigned int �� ũ��� 4 ����Ʈ �Դϴ�
	printf("long �� ũ��� %d ����Ʈ./n", sizeof(long)); // long �� ũ��� 4 ����Ʈ �Դϴ�
	printf("unsigned long �� ũ��� %d ����Ʈ./n", sizeof(unsigned long)); // unsigned long �� ũ��� 4 ����Ʈ �Դϴ�
	printf("float �� ũ��� %d ����Ʈ./n", sizeof(float)); // float �� ũ��� 4 ����Ʈ �Դϴ�
	printf("double �� ũ��� %d ����Ʈ./n", sizeof(double)); // double �� ũ��� 8 ����Ʈ �Դϴ�
}