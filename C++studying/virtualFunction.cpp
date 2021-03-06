#include <iostream>
//test envioroment
// using namespace std;
// int main()
// {
//     cout<<"hello world."<<endl;
//     return 0;
// }
#include <string> 
using namespace std;
class parent
{
    public:
        void Test()
        {
            printf("parent function part\n");
        }

        virtual void virtualTest()
        {
            printf("test virtual parent function part\n");
        }
};

class Child: public parent
{
    public:
        void Test()
        {
            parent::Test();
            printf("child function part\n"); //原函数增加一行运行,相当于重载test函数
        }

        void virtualTest()
        {
            printf("test virtual child function part\n");
        }
};

int main()
{
    Child c;
    parent *p = &c; //父类的指针可以指向子类的对象(*表示p是个指针，而&表示取c的存放地址)
    p->Test();//此时调用的是父类的函数，相当于父类的指针，所以p是个父类

    //“::”类作用域操作符。“::”指明了成员函数所属的类。如：M::f(s)就表示f（s）是类M的成员函数。
    //->和 .实现的功能是一样的，都是访问类的成员变量或成员函数，. 用于普通变量操作，->只能用于指针变量操作。如：若a为一指向对象的指针，a->f（s）就表示调用a所指的对象中的成员函数f（s）。
    
    //如果是要使用子类的函数，那么可以在父类或者父类和子类的test（）前面加一个virtual，因为virtual是自动继承的,下面演示
    //相当于根据指针的实际类型来调用对应类型的函数
    p->virtualTest();
    //即将被重写的函数添加virtual是个应该遵守的编码习惯

    double x=2.5;
    double y = 4.7;
    int a = 7;
    char b = 10100111;
    int t;
    t = (2+x)^(~3);
    cout<<b<<endl;
    cout<<x+a%3*(int)(x+y)%2/4<<endl;
    return 0;
}