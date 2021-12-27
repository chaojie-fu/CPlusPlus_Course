#include "PersonnelManagementSystem.h"

int main()
{
  /*
        generate PMS object and member objects.
        */
  PersonnelManagementSystem System_Exp;
  UndergraduateStudent student_1_1("UGS-1", Male, 21, "00000000", 700);
  UndergraduateStudent student_1_2(student_1_1);
  student_1_2.setScore(710);
  student_1_2.setName("UGS-2");
  UndergraduateStudent student_1_3(student_1_2);
  student_1_3.setScore(690);
  student_1_3.setName("USG-3");
  student_1_3.setIDNumber("00010010");
  student_1_3.printInfo();
  FullTimePostgraduate student_2("FTP", Female, 20, "00000001", "Physics");
  OnJobPostgraduate student_3("ONJ", Male, 24, "00000002", "0001", "Chemistry", 2000);
  Staff faculty_1("STF", Female, 40, "10000008", 10000, "TA");
  Teacher faculty_2("TC", Male, 50, "10000010", 10000, "Hisory");

  /*
        add members into PMS.
        */
  std::cout << "If list is empty: " << System_Exp.IsEmpty() << std::endl;
  System_Exp.PrintAllInfos();
  System_Exp.InsertMemberAtEnd(student_1_1);
  System_Exp.InsertMemberAtEnd(student_1_2);
  System_Exp.InsertMemberAtFront(student_1_3);
  System_Exp.InsertMemberAtEnd(student_2);
  System_Exp.InsertMemberAtEnd(student_3);
  System_Exp.InsertMemberAtFront(faculty_1);
  System_Exp.InsertMemberAtEnd(faculty_2);
  std::cout << "If list is empty: " << System_Exp.IsEmpty() << std::endl;

  /*
        test delete, lookup and print functions.
        */
  System_Exp.LookupMemberByIDNumber("00000001");

  System_Exp.PrintAllInfos();

  std::cout << "Delete Member with ID Number 00000001" << std::endl;
  System_Exp.DeleteMemberByIDNumber("00000001");
  System_Exp.PrintAllInfos();

  /*
        test file IO functions.
        */
  std::string file_name = "./database.csv";
  System_Exp.Serialize(file_name);

  PersonnelManagementSystem System_database;
  PMS_Deserialize(System_database, file_name);
  System_database.PrintAllInfos();

  return 0;
}