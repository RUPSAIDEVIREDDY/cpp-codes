#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int marks;
};
int main()
{
    student s;
    s.name="Rupa";
    s.marks=95;
    cout<<s.name<<" "<<s.marks;
    return 0;
}