#include<iostream>

using namespace std;

//1.	�������� �������, ������� ���������� ������, 
//���� ������������ �������� ������������� � ����, ���� �������������.
bool Power1(int a)
{
	if (a <0)
		return false;
	else
		return true;
}

//2.	�������� �������, ������� � ����������� �� ������ ������������ 
//�������� ������� ��������, ������������, ���������, ������� ���� ����� 
//(��� ������� ���� ����� �������� ��������������).
void Power2(int a, int f, int &b, int &c, int &d, int &e)
{
	b = a + f;
	c = a*f;
	if (a > f)
	{
		d = a - f;
		e = a / f;
	}
	else
	{
		cout << "Dejstvie ne mozhet bit vipolneno" << endl;
	}
}

//3.	�������� �������, ��������� �� ����� ������������� � ������� N � ������� K.
void Figura(int N, int K, int &P)
{
	P = (N + K) * 2;
	cout << P << endl;;
	for (int i = 0; i <N; i++)
	{
		for (int j = 0; j <K; j++)
		{
			if (i<=j || i>=j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

int main() {
	//1.	�������� �������, ������� ���������� ������, 
	//���� ������������ �������� ������������� � ����, ���� �������������.
	/*int a;
	cin >> a;
	cout << Power1(a) << endl;*/

	//2.	�������� �������, ������� � ����������� �� ������ ������������ 
	//�������� ������� ��������, ������������, ���������, ������� ���� �����
	//(��� ������� ���� ����� �������� ��������������).
	/*int a, f,n;
	int b, c, d, e;
	cin >> a >> f;
	cout << "Viberite operaciyu\n1.Slozhenie\n2.Proizvedenie\n3.Vichitaniya\n4.Deleniya\n" << endl;
	cin >> n;

	switch (n)
	{
	case 1:
		Power2(a, f, b,c,d,e);
		cout << b << endl;
		break;
	case 2:
		Power2(a, f, b,c,d,e);
		cout << c<<endl;
		break;
	case 3:
		Power2(a, f, b,c,d,e);
		cout << d<<endl;
		break;
	case 4:
		Power2(a, f, b,c,d,e);
		cout << e<<endl;
		break;
	}*/

	//3.	�������� �������, ��������� �� ����� ������������� � ������� N � ������� K.
	/*int N, K;
	cin >> N >> K;
	int P;
	Figura(N, K, P);*/








	system("pause");
	return 0;
}