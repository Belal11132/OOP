#include <iostream>
using namespace std; 

class clsPerson
{
private:  
	   //���� ������ ����� ��� ���� ��� �������
	   //Only accessible within this class
	int Variabl1 = 5; 

	int Function1()
	{
		return 40;

	}
protected:
	//���� ������ ����� ��� ���� ��� ����� ����� ������ ���� ��� ��� �����
	//only accessable inside this calass and all classes inhirets this class 

	int Variabl2 = 100;
	int Function2()
	{
		return 50;
	}
public:
	//accessable for everyone outside/inside/and classes inherits this class
	//���� ������ ������ ���� ����/����/������� ���� ��� ��� �����

	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}
	float Function3()
	{
		return Function1() * Variabl1 * Variabl2;
	}
};
int main()
{
	clsPerson Person1;
	Person1.FirstName = "BELAL";
	Person1.LastName = "AL-HAMID";
	cout << "Person1: " << Person1.FullName() << endl;
	cout << Person1.Function3();


}
