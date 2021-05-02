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
	srand(checking_number); // 초기화시간 : 1시간단위
	for (int i = 0; i < Size; i++)//난수 'Size'개가 solve에 저장
	{
		solve[i] = rand();
	}
	for (;;)
	{
		
		cout << ' ' << endl;
		cout << "ver_1.4" << endl;
		cout << "암호 생성기" << endl;
		cout << ' ' << endl;
		cout << "하고 싶은 말을 영어로 입력하시오.(띄어쓰기 불가)" << endl;
		cout << "입력: ";

		cin >> input;
		
		system("cls");
		cout << "입력한 내용: " << input << endl;
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

//ver 1.3 업데이트: 초기화시간 1시간 단위 설정
//ver 1.4 업데이트: 시간이나 버전이 맞지 않으면 오류메시지 출력, 암호의 맨 첫 숫자열은 체크용 숫자