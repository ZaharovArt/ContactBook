// ContactBook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Contact.h"
#include "ContactBook.h"
#include "ContactBookFabric.h"
using namespace std;
void showMenu();
void showFindMenu();

Contact createContact() {
    cout << "Создание контакта" << endl;
    char surname[50];
    char name[50];
    char midllename[50];
    char hPhone[10];
    char wPhone[10];
    char mPhone[10];
    char info[100];
    cout << "Введите Имя:";
    cin >> surname;
    cout << "Введите Фамилию:";
    cin >> name;
    cout << "Введите Отчество:";
    cin >> midllename;
    cout << "Введите домашний телефон:";
    cin >> hPhone;
    cout << "Введите рабочий телефон:";
    cin >> wPhone;
    cout << "Введите мобильный телефон:";
    cin >> mPhone;
    cout << "Введите дополнительную информацию:";
    cin >> info;

    return Contact(surname, name, midllename, hPhone, wPhone, mPhone, info);
}



int main()
{
    setlocale(LC_ALL, "ru");
    int choice;

    ContactBookFabric fabricBook("book.txt");
    ContactBook book(fabricBook.getContactBook());
    cout << book.showContacts();

    //while (true) {
    //    char choice;
    //    system("cls");
    //    showMenu();
    //    cin >> choice;
    //    switch (choice)
    //    {
    //    case 1: addContact(); break;
    //    case 2:/* dellContact();*/ break;
    //    case 3: /*findContact();*/ break;
    //    case 4: /*showContact();*/ break;
    //    case 5:/* saveContakt();*/ break;

    //    default:
    //    break;
    //    }

    //}


    
   
}
void showMenu() {

    cout << " [1] Создать контакт" << endl;
    cout << " [2] Удалть контакт" << endl;
    cout << " [3] Найти контакт" << endl;
    cout << " [4] Поазать список контактов" << endl;
    cout << " [5] Сохранить список контактов" << endl;

}
void showFindMenu() {
    cout << " [1] Поиск по Имени" << endl;
    cout << " [2] Поиск по Фамилии" << endl;
    cout << " [3] Поиск по Отчеству" << endl;
    cout << " [4] Поиск по Домашнему телефону" << endl;
    cout << " [5] Поиск по Рабочему телефону" << endl;
    cout << " [5] Поиск по Мобильному телефону" << endl;
}