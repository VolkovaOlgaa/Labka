#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A,B,C;
	cout << "введите числа A.B.C\n";
	cin >> A;
	cin >> B;
	cin >> C;
	if (A <= 0 or B <= 0 or C <= 0)
		cout << "введены неверные числа\n";
	else if (A > B and B > C )
	{
		int answer = A - B - C;
		cout << "тк A>B И B>C => A-B-C => ответ: " << answer;
	}
	else if (B > A and B % C == 0)
	{
		int answer = B / C + B - A;
		cout << "тк B>A И B кратно C => B/C+B-A => ответ: " << answer;
	}
	else
	{
		int answer = A + B + C;
		cout << "в остальных случаях ответ: \n" << answer;
	}
	


	int N;
	cout << "введите число\n";
	cin >> N;
	switch (N)
	{
	case 1: cout << "НЕФТЬ";
		break;
	case 25: cout << "САХАР РАФИНАД БЫСТРОРАСТВОРИМЫЙ";
		break;
	case 30: cout << "АВОКАДО";
		break;
	case 500: cout << "ЯБЛОКИ";
		break;
	case 645: cout << "ПОМИДОРЫ";
		break;
	case 1966: cout << "АПЕЛЬСИНЫ";
		break;
	case 4949: cout << "КОЛБАСА ДОКТОРСКАЯ ВАРЕНАЯ";
		break;
	default: cout << "число не найдено";
		break;
	}

}
