#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 표준 입출력 헤더?

void main() {
	int age = 23;
	int yourAge = 0;
	short manAge = 22;
	float height = 165.3;
	double weight = 60.2;


	printf("나는 %d살이다 응애 하지만 만 나이로는 %d이지. 내 키는 %.2f cm이고,\n내 몸무게는 %lf kg 이지.\n", age, manAge, height, weight);

	printf("너는 몇살이지? : ");

	scanf("%d", &yourAge);

	printf("너는 %d살이군. 히히!\n", yourAge);

	printf("이번에는 소수점 계산을 해볼 것이다.\n result = 1 / 2\n");

	float result;

	result = 1 / 2;

	printf("결과 값은 이것이다. %.2f\n", result);
	printf("뭔가 이상하지? float형변수 result에 정수 1을 정수 2로 나눈 값을 저장했기 때문이다. 1 / 2의 결과값은 정수 0(몫이 0)이 나오기 때문에 result값이 이상해진 것이다.\n");
	printf("이렇게 해봐라.\n result = 1.0 / 2.0\n");

	result = 1.0 / 2.0;
	printf("결과 값은 이것이다. %.2f\n", result);

	printf("아니면 아예 '명시적 형변환'을 사용하여 1 / 2 결과값을 float 형으로 바꿀 수도 있다..\n");
	printf("이렇게 해봐라.\n result = (float)1 / 2\n");
	result = (float)1 / 2;
	printf("결과 값은 이것이다. %.2f\n", result);

	// 컴파일 + 디버깅 + 실행 = F5
	// 컴파일 + 디버깅 = Ctrl + F7
	// 디버깅 없이 실행 = Ctrl + F5


	//\n 은 줄바꿈, \t는 들여쓰기
	//만약 \n같은 이스케이프 시퀀스를 그대로 출력하고 싶을 땐 앞에 \을 하나더 붙이면 됨.
}