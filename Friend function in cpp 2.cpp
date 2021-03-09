#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Second;
class First
{
public:
    int a;
public:
    friend void sumdata(First,Second);
    void setdata(int num)
    {
        a = num;
    }
protected:
private:
};

class Second
{
public:
    int b;
public:
    friend void sumdata(First,Second);
    void getdata(int num1)
    {
        b = num1;
    }
protected:
private:
};
void sumdata(First b1, Second b2)
{
    cout<<"The sum of two value is: "<<b1.a + b2.b<<endl;
}
int main()
{
    First fi;
    fi.setdata(7);
    Second se;
    se.getdata(8);
    sumdata(fi,se);
return 0;
}
