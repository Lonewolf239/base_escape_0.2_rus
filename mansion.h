#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void enter(int ent);
void mansion1(int man1) { //��������� ����
	int ret;
	if (man1 == 1)
		cout << "___________________________________________\n�� ��������� ����� ��������...������� ��� ������� � ������ �������..." << endl;
	cin >> ret;
	if (ret > 0 && ret < 5)
		cyclep1(1);
}
void mansion2(int man2) { //���� ����������
	int ret;
	if (man2 == 1)
		cout << "___________________________________________\n������� � ������ �������...\n����������� ������� ������ 1; ���� 2" << endl;
	cin >> ret;
	if (ret == 2)
		cyclep2(1);
	if(ret == 1) {
	    cout << "___________________________________________\n������ �� ����������..."<<endl;
		cyclep2(1);
		}
}
void mansion3(int man3) { //���� �������
	int ret;
	if (man3 == 1)
		cout << "___________________________________________\n������� � ������ �������...\n������� �������� 1; ���� 2" << endl;
	cin >> ret;
	if (ret == 1) {
	    cout << "___________________________________________\n�� �� ���� ���� ������� �� �����...\n����� �������� �� ������ � � �������� ����� �� ���..." << endl;
		cout << "�� ����� � �������� ��������..." << endl;
		enter(1);
		}
	if(ret == 2)
		cyclep3(1);
}