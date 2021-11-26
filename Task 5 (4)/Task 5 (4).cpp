#include <iostream>
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");

    while (5)
    {
        system("pause");

        system("cls"); // Очищает поле консоли после каждой выполненной итерации цикла while. //

        int n = 0;

        cout << " Выберите действие : \n \n \t 1. Выполнить вычисление. \n \n \t 2. Выйти из программы. \n \n Действие : ";

        cin >> n;

        if (n != 1)
        {
            break;
        }


        int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
        cout << "Введите значение 1 гири: ";
        cin >> a1;
        cout << "Введите значение 2 гири: ";
        cin >> a2;
        cout << "Введите значение 3 гири: ";
        cin >> a3;
        cout << "Введите значение 4 гири: ";
        cin >> a4;
        cout << "Введите значение 5 гири: ";
        cin >> a5;
        cout << "Введите значение 6 гири: ";
        cin >> a6;
        cout << "Введите значение 7 гири: ";
        cin >> a7;
        cout << "Введите значение 8 гири: ";
        cin >> a8;
        cout << "Введите значение 9 гири: ";
        cin >> a9;
        cout << "Введите значение 10 гири: ";
        cin >> a10;
        if (a1 == 0 || a2 == 0 || a3 == 0 || a4 == 0 || a5 == 0 || a6 == 0 || a7 == 0 || a8 == 0 || a9 == 0 || a10 == 0)
        {
            cout << "Вес гири не может быть равен 0.";
            return 0;
        }
        
        int* ark = new int[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        for (int k = 0; k <= 10; k++) {

            int count = 0;
            for (int x10 = 0; x10 * a10 <= k; x10++) {
                for (int x9 = 0; x9 * a9 <= k; x9++) {
                    for (int x8 = 0; x8 * a8 <= k; x8++) {
                        for (int x7 = 0; x7 * a7 <= k; x7++) {
                            for (int x6 = 0; x6 * a6 <= k; x6++) {
                                for (int x5 = 0; x5 * a5 <= k; x5++) {
                                    for (int x4 = 0; x4 * a4 <= k; x4++) {
                                        for (int x3 = 0; x3 * a3 <= k; x3++) {
                                            for (int x2 = 0; x2 * a2 <= k; x2++) {
                                                for (int x1 = 0; x1 * a1 <= k; x1++) {

                                                    int sum = x1 * a1 + x2 * a2 + x3 * a3 + x4 * a4 + x5 * a5 + x6 * a6 + x7 * a7 + x8 * a8 + x9 * a9 + x10 * a10;
                                                    if (sum == k) {
                                                        count++; break;
                                                    }
                                                    if (sum > k) break;
                                                }
                                            }
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
            ark[k] = count;
        }
        for (int i = 0; i < 10; i++)
        {
            cout << ark[i] << "\t";
        }
        cout << endl;
    }


};