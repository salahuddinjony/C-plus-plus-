#include <bits/stdc++.h>
using namespace std;

// Virtual base class
class Student
{
protected:
    int roll_no;

public:
    void set_number(int r)
    {
        roll_no = r;
    }
    void print_number()
    {
        cout << "Your roll  is : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{

private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "The total score is " << total << endl;
    }
};
int main()
{
    Result salah;
    salah.set_number(204113);
    salah.set_marks(89.5, 93.7);
    salah.set_score(10);
    salah.display();

    return 0;
}