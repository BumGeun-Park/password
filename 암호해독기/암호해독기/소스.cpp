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
	srand(checking_number); // 초기화시간: 1시간단위
	for (int i = 0; i < Size; i++)//난수 'Size'개가 solve에 저장
	{
		solve[i] = rand();
	}
	for (;;)
	{
		cout << ' ' << endl;
		cout << "ver_1.4" << endl;
		cout << "암호를 입력하시오(다시 입력하려면 0입력): ";
		for (int i = 0; i < 1000; i++)
		{
			cin >> input[i];
			if (input[0] != checking_number % Size)
			{
				system("cls");
				cout << "시간이나 버전이 달라 해독할 수 없습니다." << endl << endl;
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
			cout << "2초 후에 자동으로 종료됩니다." << endl;
			Sleep(2000);
			break;
		}
		
	}
return 0;
}

//ver 1.3 업데이트: 초기화시간 1시간 단위 설정
//ver 1.4 업데이트: 시간이나 버전이 맞지 않으면 오류메시지 출력, 암호의 맨 첫 숫자열은 체크용 숫자