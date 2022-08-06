#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int balans = 10000;
    cout << "Правила игры ''Веселое казино''." << endl;
    cout << "Вы ставите ставку и запускается игра!" << endl;
    cout << "У кого число больше, тот и выйграл!" << endl;
    cout << "В случае выигрыша ставка удваивается." << endl;
    cout << "Удачи!" << endl;
    cout << "Ваш баланс = " << balans << endl;
    cout << "Ваша ставка" << endl;
    int stavka;
    cin >> stavka;
    cout << endl;
    if (stavka > balans)
    {
        cout << "Недостаточно средств!" << endl;
    }
    else
    {
        cout << "Ставки приняты!" << endl;
    }
    srand(time(0));
    int s = 2 + rand() % 12;
    int g = 2+ rand() % 12;
    int l = 2 + rand() % 12;
    if (g >= l && stavka <= balans)
    {
        cout << "Вы выйграли!" << endl;
    }
    if (g < l && stavka <= balans)
    {
        cout << "Вы проиграли!" << endl;
    }
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "На вашем балансе " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "На вашем балансе " << balans - stavka << endl;
    }
    cout << "Вы хотите Продолжить?" << endl;
    cout << "1 - Да" << endl;
    cout << "0 - Нет" << endl;
    int FinishGame;
    cin >> FinishGame;
    while (FinishGame == 1) // ЦИКЛЛЛЛЛЛавввввввввввввввввввввввввввввввввввввввввввввввввввввв
    {
    cout << endl;
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "На вашем балансе " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "На вашем балансе " << balans - stavka << endl;
    }
    cout << "Ваша ставка" << endl;
    cin >> stavka;
    if (stavka > balans)
    {
        cout << "Недостаточно средств!" << endl;
    }
    else
    {
        cout << "Ставки приняты!" << endl;
    }
    srand(time(0));
    s = 2 + rand() % 12;
    g = 2 + rand() % 12;
    l = 2 + rand() % 12;
    if (g >= l && stavka <= balans)
    {
        cout << "Вы выйграли!" << endl;
    }
    if (g < l && stavka <= balans)
    {
        cout << "Вы проиграли!" << endl;
    }
    if (g >= l && stavka < balans)
    {
    cout << endl;
    cout << "На вашем балансе " << balans + stavka << endl;
    }
    if (g < l && stavka < balans)
    {
     cout << "На вашем балансе " << balans - stavka << endl;
    }
    cout << "Вы хотите Продолжить?" << endl;
    cout << "1 - Да" << endl;
    cout << "0 - Нет" << endl; // ЦИКЛЛЛЛЛЛваааааааааааааааааааааааааааааааааааааааааааааааааааааааааа
    cin >> FinishGame;
    }
    system("pause");
    system("CLS");
    return 0;
}
