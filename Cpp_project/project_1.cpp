// 클래스로 수업을 생성하여 이름과 학점을 저장하고, 시간표를 설정한뒤, 점수를 입력하여 점수에 따라 등급을 매기는 프로그램.
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string date[5] = { "월","화","수","목","금" };
int sum_score = 0; // 전체 이수 학점을 저장할 배열
int scores[7] = { 0 }; // 각 과목의 점수를 저장할 배열

class cls
{
private:
    int day; // 수업 듣는 요일
    int start; // 수업 시작 시간
    int duration; // 수업 지속 시간
    string name; // 수업 명을 저장할 문자열
    int score; // 학점
    static int score_num; // 점수 개수
    static int count; // 수업 개수

public:
    cls(string name, int score);  // 생성자
    cls(const cls& rect);  // 복사 생성자
    ~cls();  // 소멸자

    void print() const; // 수업 출력 함수
    void alloc(); // 시간표 할당 함수
    void getSum(); // 이수 학점의 총 합 접근 함수
    static int getNumber(); // 수업 개수 접근 함수
    static void setScores(); // 각 수업의 점수를 입력하는 함수
};

int cls::score_num = 0; // 정적 데이터 멤버 초기화
int cls::count = 0;
// 정적 데이터 멤버는 클래스에는 속하지만, 객체 별로 할당되지 않고 클래스 내의 모든 객체가 공유하는 데이터 멤버, 프로그램의 전역 영역에서 초기화함.


 // 매개변수가 있는 생성자
cls::cls(string nam, int scr)
    : name(nam), score(scr)
{
    if (score < 0) // 점수가 0보다 작은 값일 때,
    {
        cout << "수업을 생성할 수 없습니다." << endl;
        assert(false); // 프로그램 종료
    }
    count++; // 객체 수 증가
}

// 복사 생성자
cls::cls(const cls& rect)
    : name(rect.name), score(rect.score)
{
    count++; // 객체 수 증가
}

// 소멸자
cls::~cls()
{
    count--; // 객체 수 감소
}

// 접근자 멤버 함수 Print
void cls::print() const
{
    cout << endl;
    cout << date[day - 1] << "요일 " << start << "교시, " << duration << "시간 수업" << endl;
    cout << "수업 개수: " << getNumber() << "개" << endl << endl;
}

void cls::alloc() // 시간표 할당 함수
{
    cout << name << ", " << score << "학점" << endl;
    cout << "수업 요일(1~5): ";
    cin >> day;
    if (day < 1 || day > 5) // 월 ~ 금요일 사이가 아니면,
    {
        cout << "존재하지 않는 요일 입니다.";
        assert(false); // 프로그램 종료
    }
    cout << "     시작 교시: ";
    cin >> start;
    if (start < 1 || start > 8) // 1 ~ 7교시 사이가 아니면,
    {
        cout << "존재하지 않는 교시 입니다.";
        assert(false); // 프로그램 종료
    }
    cout << "     수업 시간: ";
    cin >> duration;
}

void cls::getSum() // 학점 합 구하는 함수
{
    sum_score += score;
}

int cls::getNumber() // 수업 개수 구하는 함수
{
    return count;
}

void cls::setScores() // 각 수업의 점수를 저장하는 함수
{
    cout << "점수 입력: ";
    cin >> scores[score_num];
    score_num++; // 점수 수 증가
}

// 등급을 구하는 함수
// 배열의 주소를 매개변수로 전달하여 포인터를 활용해 배열에 접근
void findGrades(const int *scr, char *grd, int size)
{
    char temp[] = { 'F','F','F','F','F','F','D','C','B','A','A' }; 
    for (int i = 0; i < size; i++) // 0부터 size-1 까지
    {
        *(grd+i) = temp[*(scr+i) / 10]; // 점수를 10으로 나눈 몫에 따라서 등급이 결정됨
    }
    return;
}
int main()
{
    char grades[7]; // 등급을 저장할 배열 

    cls cls1("자료구조", 3); // 매개변수가 있는 생성자 사용
    cls1.alloc(); // cls1의 시간표 할당
    cls1.getSum(); // 총 이수 학점에 cls1 학점 추가
    cls1.setScores(); // cls1의 점수 입력
    cls1.print(); // cls1 정보 출력

    cls cls2("cpp", 3);  // 매개변수가 있는 생성자 사용
    cls2.alloc();
    cls2.getSum();
    cls2.setScores();
    cls2.print();

    cls cls3("리눅스", 3);
    cls3.alloc();
    cls3.getSum();
    cls3.setScores();
    cls3.print();

    cls cls4("확통", 3);
    cls4.alloc();
    cls4.getSum();
    cls4.setScores();
    cls4.print();

    cls cls5("일대중", 2);
    cls5.alloc();
    cls5.getSum();
    cls5.setScores();
    cls5.print();

    cls cls6("역상", 2);
    cls6.alloc();
    cls6.getSum();
    cls6.setScores();
    cls6.print();

    cls cls7("웹프", 3);
    cls7.alloc();
    cls7.getSum();
    cls7.setScores();
    cls7.print();

    findGrades(scores, grades, 7); // 각 과목당 등급 구하기

    for (int i = 0; i < 7; i++) // 모든 과목의 점수와 등급 출력
    {
        cout << scores[i] << "    " << grades[i] << endl;
    }

    cout << "수업 개수: " << cls::getNumber() << endl; // 수업의 개수 출력
    cout << "이수 학점: " << sum_score << endl; // 이수한 총 학점 출력

    return 0;
}