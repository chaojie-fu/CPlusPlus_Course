# include "MemberTypes.h"
# include <iostream>
# include <list>

int main()
{
    UndergraduateStudent student_1_1("UGS-1", Male, 21, "00000000", 700);
    UndergraduateStudent student_1_2(student_1_1);
    student_1_2.setScore(710);
    student_1_2.setName("UGS-2");
    UndergraduateStudent student_1_3(student_1_2);
    student_1_3.setScore(690);
    student_1_3.setName("USG-3");


    std::cout << "========================================" << std::endl;
    std::cout << "Test List of Custom Class UndergraduateStudent" << std::endl;
    std::list<UndergraduateStudent> studentList;
    studentList.push_back(student_1_1);
    studentList.push_back(student_1_2);
    studentList.push_back(student_1_3);

    std::list<UndergraduateStudent>::iterator studentListIter = studentList.begin();
    for (; studentListIter != studentList.end(); studentListIter ++)
    {
        studentListIter->printInfo();
    }
    std::cout << "========================================" << std::endl;

    std::cout << "========================================" << std::endl;
    std::cout << "Test Other Custom Classes" << std::endl;
    FullTimePostgraduate student_2("FTP", Female, 20, "00000001", "Physics");
    OnJobPostgraduate student_3("ONJ", Male, 24, "00000002", "0001", "Chemistry", 2000);
    Staff faculty_1("STF", Female, 40, "10000008", 10000, "TA");
    Teacher faculty_2("TC", Male, 50, "10000010", 10000, "Hisory");
    
    student_1_1.printInfo();
    student_1_2.printInfo();
    student_2.printInfo();
    student_3.printInfo();
    faculty_1.printInfo();
    faculty_2.printInfo();
    std::cout << "========================================" << std::endl;
}