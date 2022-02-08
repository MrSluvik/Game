//  Напишіть гру Камінь-Ножиці-Папір-Ящирка-Спок використовуючи рядки
#include <iostream>
#include<ctime>
#include<string>
#include<Windows.h> 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));   
   
    cout << "\t\t\t\tПривіт!!!\n\tВи на грі камінь – ножиці – папір – ящірка – спок!" << endl;
    cout << "Вводьте один  із наступних знаків : Камінь, Ножиці, Папір, Ящірка, Спок" << endl;
    string player;
    while (player != "Стоп") {
        
        cout << "\t\tГра триватиме доки не напишете ''Стоп'' " << endl;
        int k = rand() % 5;
        string compValue;
        if (k == 0) {
            compValue = "Камінь";
        }
        else if (k == 1) {
            compValue = "Ножиці";
        }
        else if (k == 2) {
            compValue = "Папір";
        }
        else if (k == 3) {
            compValue = "Ящірка";
        }
        else if (k == 4) {
            compValue = "Спок";
        }
        getline(cin, player);
        if (player == compValue) {
            cout << "Нічия" << endl;
        }
        else if ((player == "Камінь" && compValue == "Ножиці") or (player == "Камінь" && compValue == "Ящірка") or//
                (player == "Ножиці" && compValue == "Папір") or (player == "Ножиці" && compValue == "Ящірка") or
                (player == "Папір" && compValue == "Камінь") or (player == "Папір" && compValue == "Спок") or
                (player == "Ящірка" && compValue == "Спок") or (player == "Ящірка" && compValue == "Папір") or
                (player == "Спок" && compValue == "Ножиці") or (player == "Спок" && compValue == "Камінь")) 
             {
                cout << "Перемога. Комп вибрав - " << compValue << endl<<endl;
             }     

        else {
            cout << "Поразка. Комп вибрав - " << compValue << endl<<endl;
        }
    }
}
