#include <iostream>
#include "Participant.h"
#include "Festival.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int choice = 1, k = 0;
    Festival fest;
    while (choice == 1) {
        cout << "��������� ������!\n";
        fest.festival_open();
        while (choice != 4) {
            if (k != 2) {
                cout << "�������� ������� ��������\n1 - ����������� ���������\n2 - ��������� �����������\n3 - ���������� �������� (���������� ������ � ���������)\n4 - �������� �����" << endl;
            }
            if (k == 2) {
                cout << "�������� ������� ��������\n3 - ���������� �������� (���������� ������ � ���������)\n4 - �������� �����" << endl;
            }
            cin >> choice;
            switch (choice)
            {
            case 1: {
                fest.add_participant(); break;
            }
            case 2: {
                fest.close_registration(); 
                k = 2;
                break;
                
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