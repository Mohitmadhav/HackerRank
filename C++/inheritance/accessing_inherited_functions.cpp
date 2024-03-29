//Problem Statement: https://www.hackerrank.com/challenges/accessing-inherited-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        callA = 0;
    }

private:
    int callA;
    void inc()
    {
        callA++;
    }

protected:
    void func(int &a)
    {
        a = a * 2;
        inc();
    }

public:
    int getA()
    {
        return callA;
    }
};

class B
{
public:
    B()
    {
        callB = 0;
    }

private:
    int callB;
    void inc()
    {
        callB++;
    }

protected:
    void func(int &a)
    {
        a = a * 3;
        inc();
    }

public:
    int getB()
    {
        return callB;
    }
};

class C
{
public:
    C()
    {
        callC = 0;
    }

private:
    int callC;
    void inc()
    {
        callC++;
    }

protected:
    void func(int &a)
    {
        a = a * 5;
        inc();
    }

public:
    int getC()
    {
        return callC;
    }
};

class D : public A, public B, public C
{

    int val;

public:
    //Initially val is 1
    D()
    {
        val = 1;
    }

    //Implement this function

    void update_val(int new_val)
    {
        int x = new_val;

        while (x % 2 == 0)
        {
            x = x / 2;
            A::func(val);
        }

        while (x % 3 == 0)
        {
            x = x / 3;
            B::func(val);
        }

        while (x % 5 == 0)
        {
            x = x / 5;
            C::func(val);
        }
    }

    //2 out of 11 test cases passed
    // void update_val(int new_val)
    // {
    //     //  val=new_val;

    //     while (val != new_val)
    //     {
    //         A::func(val);
    //         B::func(val);
    //         C::func(val);
    //     }
    // }

    // 6 out of 11 passed for below function
    // void update_val(int new_val)
    // 	 {
    //         //  val=new_val;

    //         while(val!=new_val){
    //             if(new_val%2==0) A::func(val);
    //               if(new_val%3==0)  B::func(val);
    //            if(new_val%5==0) C::func(val);

    //         }

    // 	 }

    //For Checking Purpose
    void check(int); //Do not delete this line.
};

void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl
         << "A's func called " << getA() << " times " << endl
         << "B's func called " << getB() << " times" << endl
         << "C's func called " << getC() << " times" << endl;
}

int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}