#include <iostream>

using namespace std;

class clsA
{
private:
    //only accessible   inside this class, neither derived classes nor outside class.
    //���� ������ ����� ��� ���� ��� ����ɡ ��� ���� ������ ����� �� ������ ������� ��� �� ����� ��������.
    int _Var1;
    void _Fun1()
    {
        cout << "Function 1";
    }

protected:
    //only accessible  inside this class and all derived classes, but not outside class
    //���� ������ ����� ��� ���� ��� ����� ����� ������ ������ɡ ���� ��� ���� �����
    int Var2;
    void Fun2()
    {
        cout << "Function 1";
    }

public:
    // Accessable inside this class, all derived classes, and outside class
    // ���� ������ ����� ���� ��� ����ɡ ����� ������ ������ɡ ����� �����
    int Var3;
    void Fun3()
    {
        cout << "Function 1";
    }

};

class clsB : public clsA
{

public:

    void Func1()
    {
        cout << clsA::Var2;

    }
};

int main()

{

    clsA objA;
    clsB objB;

    //objA._Var1 = 10; // Error: _Var1 is private
    //objA._Fun1(); // Error: _Fun1 is private
    //objA._Var1 = 10; // ���: _Var1 ���
    //objA._Fun1(); // ���: _Fun1 ���//objA.Var2 = 20; 

    objA.Var3 = 10; // OK: Var3 is public //�����: Var3 ���
   objA.Fun3(); // OK: Fun3 is public // �����: Fun3 �� ���� ���
    
   
   
   
   //objA.Var2 = 20; // Error: Var2 is protected, not accessible outside clsA
    //objB.Var2 = 20; // OK: Var2 is protected, accessible in derived class
   //objA.Var2 = 20; // ���: Var2 ���� ��� ���� ������ ���� clsA
    //objB.Var2 = 20; // �����: Var2 ���� ���� ������ �� ����� �������//objB._Var1 = 30; // Error: _Var1 is private in clsA
    
   
   
   
   objB.Var3 = 20; // OK: Var3 is public, accessible in derived class

    //objB._Var1 = 30; // Error: _Var1 is private in clsA

    objB.Func1(); // OK: Func1 accesses Var2 from clsA

    //objB._Fun1(); // Error: _Fun1 is private in clsA
    //objB._Var1 = 30; // Error: _Var1 is private in clsA
    //objB.Fun2(); // OK: Fun2 is protected, accessible in derived class

    objB.Fun3(); // OK: Fun3 is public, accessible in derived class
    cout << endl;
    cout << "Var3: " << objA.Var3 << endl; // Output: Var3: 10

    //cout << "Var2: " << objB.Var2 << endl; // Output: Var2: 20
    cout << "Var3 from clsB: " << objB.Var3 << endl; // Output: Var3 from clsB: 10
    cout << "Access Specifiers and Modifiers Review Completed!" << endl;


    system("pause>0");
    return 0;
}