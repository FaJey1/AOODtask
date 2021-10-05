#include <iostream>
#include "Participant.h"
#include "Canvas.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int choice = 1;
    Canvas fest;
    while (choice == 1) {
        cout << "��������� ������!\n";
        fest.festival_open();
        while (true && choice != 4) {
            cout << "�������� ������� ��������\n1 - ����������� ���������\n2 - ��������� �����������\n3 - ���������� �������� (���������� ������ � ���������)\n4 - �������� �����" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1: {
                fest.add_participant(); break;
            }
            case 2: {
                fest.close_registration(); break;
            }
            case 3: {
                fest.add_points_to_participant(); break;
            }
            case 4: {
                fest.festival_close(); break;
            }
            default:
                break;
            }
        }
        cout << "�������� ������� ��������\n1 - ������� ����� ������� \n2 - ����� �� ���������\n";
        cin >> choice;
    }
}