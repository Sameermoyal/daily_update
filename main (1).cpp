#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
     virtual void role()
     {
         cout<<"I am person\n";
     }
};
//derived class
class Teacher :public Person
{
    public:
     void role() override
     {
         cout<<"I am teacher \n";
     }
};

class Student: public Person
{
    void role() override
    {
        cout<<"I am Student\n";
    }
};

int main()
{
   Person *people[2];
   Teacher teacher;
   Student student;
   people[0]= &teacher;
   people[1]= &student;
   for(int i=0;i<2;i++)
   {
       people[i]->role();
   }
   
}