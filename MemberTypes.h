# include <iostream>
# include <string>

typedef std::string Name;
typedef unsigned int Age;
typedef long int IDNumber;
typedef int Score;
typedef std::string Major;
typedef long int StudentNumber;
typedef double Salary;
typedef std::string Job;

union Member
{
    UndergraduateStudent m_UndergraduateStudent;
    FullTimePostgraduate m_FullTimePostgraduate;
    OnJobPostgraduate m_OnJobPostgraduate;
    Staff m_Staff;
    Teacher m_Teacher;
};

enum Gender
{
    Female = 0, 
    Male = 1
};

enum MemberType
{
    TYPE_UndergraduateStudent = 0,
    TYPE_FullTimePostgraduate = 1,
    TYPE_OnJobPostgraduate  = 2,
    TYPE_Staff = 3,
    TYPE_Teacher = 4
};

class MemberBase
{
    protected:
        Name name;
        Gender gender;
        Age age;
        IDNumber idNumber;
    public:
        MemberBase(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber);
        ~MemberBase() = default;

        void setName(Name newName);
        void setGender(Gender Gender);
        void setAge(Age newAge);
        void setIDNumber(IDNumber idNumber);

        Name getName();
        Gender getGender();
        Age getAge();
        IDNumber getIDNumber();
        
        virtual void printInfo() = 0;
};

class UndergraduateStudent: public MemberBase
{
    protected:
        MemberType membertype = TYPE_UndergraduateStudent;
        Score score;
    public:
        UndergraduateStudent(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Score m_score);
        ~UndergraduateStudent() = default;
        
        void setScore(Score newScore);

        MemberType getMemberType();
        Score getScore();

        void printInfo();
};

class FullTimePostgraduate: public MemberBase
{
    protected:
        MemberType membertype = TYPE_FullTimePostgraduate;
        Major major;
    public:
        FullTimePostgraduate(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Major m_major);
        ~FullTimePostgraduate() = default;
    
        void setMajor(Major newMajor);

        MemberType getMemberType();
        Major getMajor();

        void printInfo();

};

class OnJobPostgraduate: public MemberBase
{
    protected:
        MemberType membertype = TYPE_OnJobPostgraduate;
        StudentNumber studentnumber;
        Major major;
        Salary salary;
    public:
        OnJobPostgraduate(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, StudentNumber m_studentnumber, Major m_major, Salary m_salary);
        ~OnJobPostgraduate() = default;

        void setMajor(Major newMajor);
        void setStudentNumber(StudentNumber newStudentNumber);
        void setSalary(Salary newSalary);
        
        MemberType getMemberType();
        Major getMajor();
        StudentNumber getStudentNumber();
        Salary getSalary();

        void printInfo();
};

class Staff: public MemberBase
{
    protected:
        MemberType membertype = TYPE_Staff;
        Salary salary;
        Job job;
    public:
        Staff(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Salary m_salary, Job m_job);
        ~Staff() = default;
        
        void setSalary(Salary newSalary);
        void setJob(Job newJob);

        MemberType getMemberType();
        Salary getSalary();
        Job getJob();

        void printInfo();
};

class Teacher: public MemberBase
{
    protected:
        MemberType membertype = TYPE_Teacher;
        Salary salary;
        Major major;
    public:
        Teacher(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Salary m_salary, Major m_major);
        ~Teacher() = default;
        
        void setSalary(Salary newSalary);
        void setMajor(Job newJob);

        MemberType getMemberType();
        Salary getSalary();
        Job getMajor();

        void printInfo();

};

