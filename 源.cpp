/*#include<iostream>//�º����ԣ���������
using namespace std;
class show
{
public:
	void operator()(const string str)//������������غ���
	{
		cout << str << endl;
	}
	float operator()(const float num)//������������غ���
	{
		cout << num * num << endl;
		return num * num;
	}
};
int main()
{
	show s;
	s("aaabbbcccdddd");//�����s����һ���ַ���
	s(4);//��������
	return 0;
}***************************************************************/
//�º���ʵ���������ݵĴ��ݣ��ж�һ������ƽ����ż����������
/*#include<iostream>
using namespace std;
class Show
{
public:
	Show(bool flag = false):_flag(flag){}
	bool operator()(const int num)
	{
		int n = num * num;
		if (n % 2 == 0)
			return  true;
		else
			return false;
	}
private:
	bool _flag;
};
int main()
{
	Show s;
	s(4);
	cout << s(8) << endl;
	return 0;
}*/
//�̳У������캯���������������ܱ��̳У����캯������������ͬ��
/*#include<iostream>
using namespace std;
class Animal
{
public:
	void move()
	{
		cout << "������Ϊ" << endl;
	}
};
class Cat :public Animal//class ���������ƣ��̳з�ʽ ��������
{
public:
	Cat(string name);
	void walk();
private:
	string _name;
};
Cat::Cat(string name)
{
	_name = name;
}
void Cat::walk()
{
	cout << _name << "����" << endl;
}
int main()
{
	Cat cat("è");
	cat.move();
	cat.walk();
	return 0;
}*************************************************/
/*#include<iostream>//���м̳�
using namespace std;
class Student
{
public:
	void setgrade(string grade);
	string getgrade();
	void setname(string name);
	string getname();
protected:
	string _grade;
private:
	string _name;
	//string _grade;
};
void Student::setgrade(string grade)
{
	_grade = grade;
}
string Student::getgrade()
{
	return _grade;
}
void Student::setname(string name)
{
	_name = name;
}
string Student::getname()
{
	return _name;
}
class Undergraduate :public Student//���м̳�
{
public:
     Undergraduate(string major);
	void show();
private:
	string _major;
};
Undergraduate::Undergraduate(string major)
{
	_major = major;
}
void Undergraduate::show()
{
	cout << "������" << getname() << endl;//�˴�Ҫ�ӣ�����Ȼ�����C3867����
	cout << "���䣺" << getgrade() << endl;//�˴�Ҫ�ӣ�����Ȼ�����C3867����
	cout << "רҵ��" << _major << endl;

}
int main()
{
	Undergraduate stu("ͨ�Ź���רҵ");
	stu.setgrade("����");
	stu.setname("zhangsan");
	stu.show();
	return 0;
}*/
