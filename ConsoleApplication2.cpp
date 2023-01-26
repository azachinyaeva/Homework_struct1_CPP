#include <iostream>
using namespace std;
struct bank_account {
    int account_num;
    string name;
    float balance;
};
void change(bank_account& account, int new_balance) {
    account.balance = new_balance;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    bank_account account;
    int new_balance;
    cout << "Введите номер счёта:  ";
    cin >> account.account_num;
    cout << "Введите имя владельца: ";
    cin >> account.name;
    cout << "Введите баланс: ";
    cin >> account.balance;
    cout << "Введите новый баланс: ";
    cin >> new_balance;
    change(account, new_balance);
    cout << "Ваш счёт: " << account.account_num << ", " << account.name << ", " << account.balance;
    return 0;
}
