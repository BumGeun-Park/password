#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int input[1000];

char output[] = "q8u!xeKBDJIRU$TYn_1]%9ioFC(76z4crv.\AVHG|^w:lsk&?'djf*ZMXN2tb/y+=QPW@O,h;g#3LSEp)a[m05";
const int Size = sizeof(output) - 1;
int solve[Size];

int main(void)
{
	const int checking_number = time(NULL) / 3600;
	srand(checking_number); // �ʱ�ȭ�ð�: 1�ð�����
	for (int i = 0; i < Size; i++)//���� 'Size'���� solve�� ����
	{
		solve[i] = rand();
	}
	for (;;)
	{
		cout << ' ' << endl;
		cout << "ver_1.4" << endl;
		cout << "��ȣ�� �Է��Ͻÿ�(�ٽ� �Է��Ϸ��� 0�Է�): ";
		for (int i = 0; i < 1000; i++)
		{
			cin >> input[i];
			if (input[0] != checking_number % Size)
			{
				system("cls");
				cout << "�ð��̳� ������ �޶� �ص��� �� �����ϴ�." << endl << endl;
				break;
			}

			for (int j = 0; j < Size; j++)
			{
				if (input[i] == solve[j])
				{
					cout << output[j];
				}
			}
			if (input[i] == 0)
			{
				system("cls");
				break;
			}
		}
		if (input[0] != checking_number % Size)
		{
			cout << "2�� �Ŀ� �ڵ����� ����˴ϴ�." << endl;
			Sleep(2000);
			break;
		}
		
	}
return 0;
}

//ver 1.3 ������Ʈ: �ʱ�ȭ�ð� 1�ð� ���� ����
//ver 1.4 ������Ʈ: �ð��̳� ������ ���� ������ �����޽��� ���, ��ȣ�� �� ù ���ڿ��� üũ�� ����