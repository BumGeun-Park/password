#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
char input[1000];

char output[] = "q8u!xeKBDJIRU$TYn_1]%9ioFC(76z4crv.\AVHG|^w:lsk&?'djf*ZMXN2tb/y+=QPW@O,h;g#3LSEp)a[m05";
const int Size =  sizeof(output) - 1;
int solve[Size];

int main(void)
{
	const int checking_number = time(NULL) / 3600;
	srand(checking_number); // �ʱ�ȭ�ð� : 1�ð�����
	for (int i = 0; i < Size; i++)//���� 'Size'���� solve�� ����
	{
		solve[i] = rand();
	}
	for (;;)
	{
		
		cout << ' ' << endl;
		cout << "ver_1.4" << endl;
		cout << "��ȣ ������" << endl;
		cout << ' ' << endl;
		cout << "�ϰ� ���� ���� ����� �Է��Ͻÿ�.(���� �Ұ�)" << endl;
		cout << "�Է�: ";

		cin >> input;
		
		system("cls");
		cout << "�Է��� ����: " << input << endl;
		cout <<checking_number%Size <<' ';
		for (int i = 0; i < 1000; i++)
		{
			for (int j = 0; j < Size; j++)
			{
				if (input[i] == output[j])
				{
					cout << solve[j] << ' ';
				}
			}
			if (input[i] == 0)
			{
				break;
			}
		}
	}
	return 0;
}

//ver 1.3 ������Ʈ: �ʱ�ȭ�ð� 1�ð� ���� ����
//ver 1.4 ������Ʈ: �ð��̳� ������ ���� ������ �����޽��� ���, ��ȣ�� �� ù ���ڿ��� üũ�� ����