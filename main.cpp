#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int balans = 10000;
    cout << "������� ���� ''������� ������''." << endl;
    cout << "�� ������� ������ � ����������� ����!" << endl;
    cout << "� ���� ����� ������, ��� � �������!" << endl;
    cout << "� ������ �������� ������ �����������." << endl;
    cout << "�����!" << endl;
    cout << "��� ������ = " << balans << endl;
    cout << "���� ������" << endl;
    int stavka;
    cin >> stavka;
    cout << endl;
    if (stavka > balans)
    {
        cout << "������������ �������!" << endl;
    }
    else
    {
        cout << "������ �������!" << endl;
    }
    srand(time(0));
    int s = 2 + rand() % 12;
    int g = 2+ rand() % 12;
    int l = 2 + rand() % 12;
    if (g >= l && stavka <= balans)
    {
        cout << "�� ��������!" << endl;
    }
    if (g < l && stavka <= balans)
    {
        cout << "�� ���������!" << endl;
    }
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "�� ����� ������� " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "�� ����� ������� " << balans - stavka << endl;
    }
    cout << "�� ������ ����������?" << endl;
    cout << "1 - ��" << endl;
    cout << "0 - ���" << endl;
    int FinishGame;
    cin >> FinishGame;
    while (FinishGame == 1) // ����������������������������������������������������������������
    {
    cout << endl;
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "�� ����� ������� " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "�� ����� ������� " << balans - stavka << endl;
    }
    cout << "���� ������" << endl;
    cin >> stavka;
    if (stavka > balans)
    {
        cout << "������������ �������!" << endl;
    }
    else
    {
        cout << "������ �������!" << endl;
    }
    srand(time(0));
    s = 2 + rand() % 12;
    g = 2 + rand() % 12;
    l = 2 + rand() % 12;
    if (g >= l && stavka <= balans)
    {
        cout << "�� ��������!" << endl;
    }
    if (g < l && stavka <= balans)
    {
        cout << "�� ���������!" << endl;
    }
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "�� ����� ������� " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "�� ����� ������� " << balans - stavka << endl;
    }
    cout << "�� ������ ����������?" << endl;
    cout << "1 - ��" << endl;
    cout << "0 - ���" << endl; // ��������������������������������������������������������������������
    cin >> FinishGame;
    }
    system("pause");
    system("CLS");
    return 0;
}
