#include <iostream>

using namespace std;


class clsPerson
{
public:
    string FullName;


    //This is Instructor will be  called when object is built.
    //���� ������� ��� ������ ��� ���� ������.
    clsPerson()
    {
        FullName = "BELAL AL-HAMID";
        cout << "\n Hi , I'M counstructor";

    }
    //This is destructor will be called when object is destroyed.
    //���� ������� ��� ������ ��� ����� ������.
    ~clsPerson()
    {
        cout << "\n Hi , I'M Destructor";
	
    }
};
void Fun1()
{
    clsPerson Person1;
    //after exiting from function, person1 will be
    // //��� ������ �� ������ɡ ���� ����� ����� 1
    

    //destroyed and destructor will be called.
    //���� ������� destroyed � destructor.
}

void Fun2()
{
    clsPerson* Person2 = new clsPerson;
    //always use delete whenever you use new, otherwise object will remain in memory
    //������ ������ delete ����� ������ new� ���� ����� ������ �� �������
    
     delete Person2; 

}


int main()
{
    Fun1();     
    Fun2();

    system("pause>0"); 
    return 0;

}
