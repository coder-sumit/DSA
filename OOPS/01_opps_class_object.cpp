/* Topic Covered
    * class & object
    * getters & setters
 */

class Student
{
public:
    int roll;
    int age;
};

class Teacher
{
    int EId;
    int age;

public:
    void setEId(int EId)
    {
        this->EId = EId;
    }
    void setAge(int age)
    {
        this->age = age;
    }

    int getEId()
    {
        return this->EId;
    }
    int getAge()
    {
        return this->age;
    }
};

#include <iostream>
using namespace std;

int main()
{
    // staticaly
    Student s1;
    s1.age = 23;
    s1.roll = 101;

    // Dynamicaly
    Student *s2 = new Student;
    (*s2).age = 21;
    (*s2).roll = 102;
    Student *s3 = new Student;
    s3->age = 25;
    s3->roll = 103;

    // printing all student data
    cout << "Age of S1: " << s1.age << " Roll of S1: " << s1.roll << endl;
    cout << "Age of S2: " << (*s2).age << " Roll of S2: " << (*s2).roll << endl;
    cout << "Age of S3: " << s3->age << " Roll of S3: " << s3->roll << endl;

    Teacher t1;
    t1.setAge(56);
    t1.setEId(4);
    Teacher *t2 = new Teacher;
    t2->setAge(45);
    t2->setEId(2);

    // printing all teacher data
    cout << "Age of T1: " << t1.getAge() << " EId of T1: " << t1.getEId() << endl;
    cout << "Age of T2: " << t2->getAge() << " EId of T2: " << t2->getEId() << endl;

    return 0;
}
