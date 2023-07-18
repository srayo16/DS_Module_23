#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;

    Student(string name, int marks, int roll)
    {
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks <= b.marks)
            return true;
        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int marks, roll;
        cin >> name >> marks >> roll;

        Student s(name, marks, roll);
        pq.push(s);
    }

    while (!pq.empty())
    {
        cout << pq.top().marks << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}