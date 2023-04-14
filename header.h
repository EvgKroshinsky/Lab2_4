class Student
{
protected:
    char *name = "";
    int age;
    int course;
    int group;
public:
    Student();
    Student(char *);
    Student(char *,int ,int ,int );
    ~Student(){}
    void GetStudent();
};


class Schoolboy : public Student
{
    int grade;
public:
    Schoolboy();
    Schoolboy(char*, int, int);
    ~Schoolboy(){}
    void GetSchoolboy();
    void SetSchoolboy(int, int);
};
