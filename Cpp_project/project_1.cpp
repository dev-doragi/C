// Ŭ������ ������ �����Ͽ� �̸��� ������ �����ϰ�, �ð�ǥ�� �����ѵ�, ������ �Է��Ͽ� ������ ���� ����� �ű�� ���α׷�.
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string date[5] = { "��","ȭ","��","��","��" };
int sum_score = 0; // ��ü �̼� ������ ������ �迭
int scores[7] = { 0 }; // �� ������ ������ ������ �迭

class cls
{
private:
    int day; // ���� ��� ����
    int start; // ���� ���� �ð�
    int duration; // ���� ���� �ð�
    string name; // ���� ���� ������ ���ڿ�
    int score; // ����
    static int score_num; // ���� ����
    static int count; // ���� ����

public:
    cls(string name, int score);  // ������
    cls(const cls& rect);  // ���� ������
    ~cls();  // �Ҹ���

    void print() const; // ���� ��� �Լ�
    void alloc(); // �ð�ǥ �Ҵ� �Լ�
    void getSum(); // �̼� ������ �� �� ���� �Լ�
    static int getNumber(); // ���� ���� ���� �Լ�
    static void setScores(); // �� ������ ������ �Է��ϴ� �Լ�
};

int cls::score_num = 0; // ���� ������ ��� �ʱ�ȭ
int cls::count = 0;
// ���� ������ ����� Ŭ�������� ��������, ��ü ���� �Ҵ���� �ʰ� Ŭ���� ���� ��� ��ü�� �����ϴ� ������ ���, ���α׷��� ���� �������� �ʱ�ȭ��.


 // �Ű������� �ִ� ������
cls::cls(string nam, int scr)
    : name(nam), score(scr)
{
    if (score < 0) // ������ 0���� ���� ���� ��,
    {
        cout << "������ ������ �� �����ϴ�." << endl;
        assert(false); // ���α׷� ����
    }
    count++; // ��ü �� ����
}

// ���� ������
cls::cls(const cls& rect)
    : name(rect.name), score(rect.score)
{
    count++; // ��ü �� ����
}

// �Ҹ���
cls::~cls()
{
    count--; // ��ü �� ����
}

// ������ ��� �Լ� Print
void cls::print() const
{
    cout << endl;
    cout << date[day - 1] << "���� " << start << "����, " << duration << "�ð� ����" << endl;
    cout << "���� ����: " << getNumber() << "��" << endl << endl;
}

void cls::alloc() // �ð�ǥ �Ҵ� �Լ�
{
    cout << name << ", " << score << "����" << endl;
    cout << "���� ����(1~5): ";
    cin >> day;
    if (day < 1 || day > 5) // �� ~ �ݿ��� ���̰� �ƴϸ�,
    {
        cout << "�������� �ʴ� ���� �Դϴ�.";
        assert(false); // ���α׷� ����
    }
    cout << "     ���� ����: ";
    cin >> start;
    if (start < 1 || start > 8) // 1 ~ 7���� ���̰� �ƴϸ�,
    {
        cout << "�������� �ʴ� ���� �Դϴ�.";
        assert(false); // ���α׷� ����
    }
    cout << "     ���� �ð�: ";
    cin >> duration;
}

void cls::getSum() // ���� �� ���ϴ� �Լ�
{
    sum_score += score;
}

int cls::getNumber() // ���� ���� ���ϴ� �Լ�
{
    return count;
}

void cls::setScores() // �� ������ ������ �����ϴ� �Լ�
{
    cout << "���� �Է�: ";
    cin >> scores[score_num];
    score_num++; // ���� �� ����
}

// ����� ���ϴ� �Լ�
// �迭�� �ּҸ� �Ű������� �����Ͽ� �����͸� Ȱ���� �迭�� ����
void findGrades(const int *scr, char *grd, int size)
{
    char temp[] = { 'F','F','F','F','F','F','D','C','B','A','A' }; 
    for (int i = 0; i < size; i++) // 0���� size-1 ����
    {
        *(grd+i) = temp[*(scr+i) / 10]; // ������ 10���� ���� �� ���� ����� ������
    }
    return;
}
int main()
{
    char grades[7]; // ����� ������ �迭 

    cls cls1("�ڷᱸ��", 3); // �Ű������� �ִ� ������ ���
    cls1.alloc(); // cls1�� �ð�ǥ �Ҵ�
    cls1.getSum(); // �� �̼� ������ cls1 ���� �߰�
    cls1.setScores(); // cls1�� ���� �Է�
    cls1.print(); // cls1 ���� ���

    cls cls2("cpp", 3);  // �Ű������� �ִ� ������ ���
    cls2.alloc();
    cls2.getSum();
    cls2.setScores();
    cls2.print();

    cls cls3("������", 3);
    cls3.alloc();
    cls3.getSum();
    cls3.setScores();
    cls3.print();

    cls cls4("Ȯ��", 3);
    cls4.alloc();
    cls4.getSum();
    cls4.setScores();
    cls4.print();

    cls cls5("�ϴ���", 2);
    cls5.alloc();
    cls5.getSum();
    cls5.setScores();
    cls5.print();

    cls cls6("����", 2);
    cls6.alloc();
    cls6.getSum();
    cls6.setScores();
    cls6.print();

    cls cls7("����", 3);
    cls7.alloc();
    cls7.getSum();
    cls7.setScores();
    cls7.print();

    findGrades(scores, grades, 7); // �� ����� ��� ���ϱ�

    for (int i = 0; i < 7; i++) // ��� ������ ������ ��� ���
    {
        cout << scores[i] << "    " << grades[i] << endl;
    }

    cout << "���� ����: " << cls::getNumber() << endl; // ������ ���� ���
    cout << "�̼� ����: " << sum_score << endl; // �̼��� �� ���� ���

    return 0;
}