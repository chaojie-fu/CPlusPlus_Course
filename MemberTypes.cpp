# include "MemberTypes.h"


/*
    Function Definitions of class `MemberBase`
    */
MemberBase::MemberBase(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber)
{
    name = m_name;
    gender = m_gender;
    age = m_age;
    idNumber = m_idnumber;
}

void MemberBase::setName(Name newName)
{
    name = newName;
}
void MemberBase::setGender(Gender Gender)
{
    gender = Gender;
}
void MemberBase::setAge(Age newAge)
{
    age = newAge;
}
void MemberBase::setIDNumber(IDNumber new_idNumber)
{
    idNumber = new_idNumber;
}

Name MemberBase::getName()
{
    return name;
}
Gender MemberBase::getGender()
{
    return gender;
}
Age MemberBase::getAge()
{
    return age;
}
IDNumber MemberBase::getIDNumber()
{
    return idNumber;
}


/*
    Function Definitions of class `UndergraduateStudent`
    */
UndergraduateStudent::UndergraduateStudent(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Score m_score): MemberBase::MemberBase(m_name, m_gender, m_age, m_idnumber)
{
    score = m_score;
}

void UndergraduateStudent::setScore(Score newScore)
{
    score = newScore;
}

MemberType UndergraduateStudent::getMemberType()
{
    return membertype;
}
Score UndergraduateStudent::getScore()
{
    return score;
}

void UndergraduateStudent::printInfo()
{
    std::cout << "========================================" << std::endl;

    std::cout << "Member Type:    \t" << "Undergraduate Student" << std::endl;
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Gender:         \t" << GenderToString[gender] << std::endl;
    std::cout << "Age:            \t" << age << std::endl;
    std::cout << "ID Number:      \t" << idNumber << std::endl;

    // special informations for individual classes
    std::cout << "Score:          \t" << score << std::endl;

    std::cout << "========================================" << std::endl;
}


/*
    Function Definitions of class `FullTimePostgraduate`
    */
FullTimePostgraduate::FullTimePostgraduate(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Major m_major): MemberBase::MemberBase(m_name, m_gender, m_age, m_idnumber)
{
    major = m_major;
}
    
void FullTimePostgraduate::setMajor(Major newMajor)
{
    major = newMajor;
}

MemberType FullTimePostgraduate::getMemberType()
{
    return membertype;
}
Major FullTimePostgraduate::getMajor()
{
    return major;
}

void FullTimePostgraduate::printInfo()
{
    std::cout << "========================================" << std::endl;

    std::cout << "Member Type:    \t" << "Full-Time Postgraduate" << std::endl;
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Gender:         \t" << GenderToString[gender] << std::endl;
    std::cout << "Age:            \t" << age << std::endl;
    std::cout << "ID Number:      \t" << idNumber << std::endl;

    // special informations for individual classes
    std::cout << "Major:          \t" << major << std::endl;

    std::cout << "========================================" << std::endl;
}


/*
    Function Definitions of class `FullTimePostgraduate`
    */
OnJobPostgraduate::OnJobPostgraduate(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, StudentNumber m_studentnumber, Major m_major, Salary m_salary): MemberBase::MemberBase(m_name, m_gender, m_age, m_idnumber)
{
    studentnumber = m_studentnumber;
    major = m_major;
    salary = m_salary;
}

void OnJobPostgraduate::setMajor(Major newMajor)
{
    major = newMajor;
}
void OnJobPostgraduate::setStudentNumber(StudentNumber newStudentNumber)
{
    studentnumber = newStudentNumber;
}
void OnJobPostgraduate::setSalary(Salary newSalary)
{
    salary = newSalary;
}
        
MemberType OnJobPostgraduate::getMemberType()
{
    return membertype;
}
Major OnJobPostgraduate::getMajor()
{
    return major;
}
StudentNumber OnJobPostgraduate::getStudentNumber()
{
    return studentnumber;
}
Salary OnJobPostgraduate::getSalary()
{
    return salary;
}

void OnJobPostgraduate::printInfo()
{
    std::cout << "========================================" << std::endl;

    std::cout << "Member Type:    \t" << "On-Job Postgraduate" << std::endl;
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Gender:         \t" << GenderToString[gender] << std::endl;
    std::cout << "Age:            \t" << age << std::endl;
    std::cout << "ID Number:      \t" << idNumber << std::endl;

    // special informations for individual classes
    std::cout << "Student Number: \t" << studentnumber << std::endl;
    std::cout << "Major:          \t" << major << std::endl;
    std::cout << "Salary:         \t" << salary << std::endl;

    std::cout << "========================================" << std::endl;
}


/*
    Function Definitions of class `FullTimePostgraduate`
    */
Staff::Staff(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Salary m_salary, Job m_job): MemberBase::MemberBase(m_name, m_gender, m_age, m_idnumber)
{
    salary = m_salary;
    job = m_job;
}
        
void Staff::setSalary(Salary newSalary)
{
    salary = newSalary;
}
void Staff::setJob(Job newJob)
{
    job = newJob;
}

MemberType Staff::getMemberType()
{
    return membertype;
}
Salary Staff::getSalary()
{
    return salary;
}
Job Staff::getJob()
{
    return job;
}

void Staff::printInfo()
{
    std::cout << "========================================" << std::endl;

    std::cout << "Member Type:    \t" << "Staff" << std::endl;
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Gender:         \t" << GenderToString[gender] << std::endl;
    std::cout << "Age:            \t" << age << std::endl;
    std::cout << "ID Number:      \t" << idNumber << std::endl;

    // special informations for individual classes
    std::cout << "Salary:         \t" << salary << std::endl;
    std::cout << "Job:            \t" << job << std::endl;

    std::cout << "========================================" << std::endl;
}


/*
    Function Definitions of class `FullTimePostgraduate`
    */
Teacher::Teacher(Name m_name, Gender m_gender, Age m_age, IDNumber m_idnumber, Salary m_salary, Major m_major): MemberBase::MemberBase(m_name, m_gender, m_age, m_idnumber)
{
    salary = m_salary;
    major = m_major;
}

void Teacher::setSalary(Salary newSalary)
{
    salary = newSalary;
}
void Teacher::setMajor(Major m_major)
{
    major = m_major;
}

MemberType Teacher::getMemberType()
{
    return membertype;
}
Salary Teacher::getSalary()
{
    return salary;
}
Job Teacher::getMajor()
{
    return major;
}

void Teacher::printInfo()
{
    std::cout << "========================================" << std::endl;

    std::cout << "Member Type:    \t" << "Teacher" << std::endl;
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Gender:         \t" << GenderToString[gender] << std::endl;
    std::cout << "Age:            \t" << age << std::endl;
    std::cout << "ID Number:      \t" << idNumber << std::endl;

    // special informations for individual classes
    std::cout << "Salary:         \t" << salary << std::endl;
    std::cout << "Major:          \t" << major << std::endl;

    std::cout << "========================================" << std::endl;
}
