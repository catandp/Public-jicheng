/*#include<iostream>//仿函数对（）的重载
using namespace std;
class show
{
public:
	void operator()(const string str)//（）运算符重载函数
	{
		cout << str << endl;
	}
	float operator()(const float num)//（）运算符重载函数
	{
		cout << num * num << endl;
		return num * num;
	}
};
int main()
{
	show s;
	s("aaabbbcccdddd");//向对象s传入一个字符串
	s(4);//传入数字
	return 0;
}***************************************************************/
//仿函数实现类中数据的传递，判断一个数的平方是偶数还是奇数
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
//继承：：构造函数和析构函数不能被继承（构造函数名与类名相同）
/*#include<iostream>
using namespace std;
class Animal
{
public:
	void move()
	{
		cout << "动物行为" << endl;
	}
};
class Cat :public Animal//class 派生类名称：继承方式 基类名称
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
	cout << _name << "会走" << endl;
}
int main()
{
	Cat cat("猫");
	cat.move();
	cat.walk();
	return 0;
}*************************************************/
/*#include<iostream>//公有继承
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
class Undergraduate :public Student//公有继承
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
	cout << "姓名：" << getname() << endl;//此处要加（）不然会出现C3867错误；
	cout << "年龄：" << getgrade() << endl;//此处要加（）不然会出现C3867错误；
	cout << "专业：" << _major << endl;

}
int main()
{
	Undergraduate stu("通信工程专业");
	stu.setgrade("大三");
	stu.setname("zhangsan");
	stu.show();
	return 0;
}*/
