#include<iostream>
using namespace std ;

struct Stu
{
    int age;
    int id;
};

Stu C1()
{
  return {1,1};
}
int main()
{
    Stu s1;
    s1=C1();
    cout<<"年龄为："<<s1.age<<"  id为："<<s1.id;
    return 0;
}