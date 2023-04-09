#include <stdio.h> // 우선 { } 의 역할은 중괄호 { } 안의 코드들을 묶어주는 역할을 한다.
void main() // void는 메모리를 차지하지 않기 때문에 void 타입의 변수는 성언이 불가, 중괄호 '{'로 시작하여 '}'로 끝난다.
{
	int 	k; // 변수 "k"는 "int" 유형으로 선언되며, 이는 -2, 0, 42 또는 1001과 같은 정수 값을 저장할 수 있음을 의미합니다.

	printf("숫자를 입력하세요/n"); // 숫자를 입력하세요
	scanf("%d", &k);				// 숫자를 입력 받아 변수 k 에 저장, //15 (Enter)
	printf("입력하신 숫자는 %d 입니다/n"); // 입력하신 숫자는 15 입니다
}

