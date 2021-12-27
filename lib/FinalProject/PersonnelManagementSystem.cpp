// ID Number is an identical field, use it to do validation, looking up, deleting and so on.
#include <fstream>
#include <sstream>
#include "PersonnelManagementSystem.h"

template <class U>
bool PersonnelManagementSystem::_checkNewMemberByIDNumber(U &m_Member)
{
  std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
  for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
  {
    if (UndergraduateStudent_Iter->getIDNumber() == m_Member.getIDNumber())
    {
      return false;
    }
  }
  std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
  for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
  {
    if (FullTimePostgraduate_Iter->getIDNumber() == m_Member.getIDNumber())
    {
      return false;
    }
  }
  std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
  for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
  {
    if (OnJobPostgraduate_Iter->getIDNumber() == m_Member.getIDNumber())
    {
      return false;
    }
  }
  std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
  for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
  {
    if (Staff_Iter->getIDNumber() == m_Member.getIDNumber())
    {
      return false;
    }
  }
  std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
  for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
  {
    if (Teacher_Iter->getIDNumber() == m_Member.getIDNumber())
    {
      return false;
    }
  }
  return true;
}

bool PersonnelManagementSystem::IsEmpty()
{
  return (UndergraduateStudent_List.empty() || FullTimePostgraduate_List.empty() || OnJobPostgraduate_List.empty() || Staff_List.empty() || Teacher_List.empty());
}

void PersonnelManagementSystem::Clear()
{
  UndergraduateStudent_List.clear();
  FullTimePostgraduate_List.clear();
  OnJobPostgraduate_List.clear();
  Staff_List.clear();
  Teacher_List.clear();
}

size_t PersonnelManagementSystem::NumOfMembers()
{
  return (UndergraduateStudent_List.size() + FullTimePostgraduate_List.size() + OnJobPostgraduate_List.size() + Staff_List.size() + Teacher_List.size());
}

bool PersonnelManagementSystem::InsertMemberAtEnd(UndergraduateStudent &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    UndergraduateStudent_List.push_back(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtEnd(FullTimePostgraduate &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    FullTimePostgraduate_List.push_back(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtEnd(OnJobPostgraduate &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    OnJobPostgraduate_List.push_back(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtEnd(Staff &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    Staff_List.push_back(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtEnd(Teacher &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    Teacher_List.push_back(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtFront(UndergraduateStudent &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    UndergraduateStudent_List.push_front(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtFront(FullTimePostgraduate &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    FullTimePostgraduate_List.push_front(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtFront(OnJobPostgraduate &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    OnJobPostgraduate_List.push_front(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtFront(Staff &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    Staff_List.push_front(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::InsertMemberAtFront(Teacher &m_Member)
{
  if (_checkNewMemberByIDNumber(m_Member))
  {
    Teacher_List.push_front(m_Member);
    std::cout << "Member added to database." << std::endl;
    return true;
  }
  else
  {
    std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
    return false;
  }
}

bool PersonnelManagementSystem::DeleteMemberByIDNumber(IDNumber idnumber)
{
  std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
  for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
  {
    if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
      UndergraduateStudent_Iter->printInfo();
      UndergraduateStudent_List.erase(UndergraduateStudent_Iter);
      std::cout << "The member is deleted from database." << std::endl;
      return true;
    }
  }

  std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
  for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
  {
    if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
      FullTimePostgraduate_Iter->printInfo();
      FullTimePostgraduate_List.erase(FullTimePostgraduate_Iter);
      std::cout << "The member is deleted from database." << std::endl;
      return true;
    }
  }

  std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
  for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
  {
    if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
      OnJobPostgraduate_Iter->printInfo();
      OnJobPostgraduate_List.erase(OnJobPostgraduate_Iter);
      std::cout << "The member is deleted from database." << std::endl;
      return true;
    }
  }

  std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
  for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
  {
    if (Staff_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
      Staff_Iter->printInfo();
      Staff_List.erase(Staff_Iter);
      std::cout << "The member is deleted from database." << std::endl;
      return true;
    }
  }

  std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
  for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
  {
    if (Teacher_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
      Teacher_Iter->printInfo();
      Teacher_List.erase(Teacher_Iter);
      std::cout << "The member is deleted from database." << std::endl;
      return true;
    }
  }

  return false;
}

void PersonnelManagementSystem::LookupMemberByIDNumber(IDNumber idnumber)
{
  std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
  for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
  {
    if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << ":" << std::endl;
      UndergraduateStudent_Iter->printInfo();
      return;
    }
  }

  std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
  for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
  {
    if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << ":" << std::endl;
      FullTimePostgraduate_Iter->printInfo();
      return;
    }
  }

  std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
  for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
  {
    if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << ":" << std::endl;
      OnJobPostgraduate_Iter->printInfo();
      return;
    }
  }

  std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
  for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
  {
    if (Staff_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << ":" << std::endl;
      Staff_Iter->printInfo();
      return;
    }
  }

  std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
  for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
  {
    if (Teacher_Iter->getIDNumber() == idnumber)
    {
      std::cout << "The member with ID Number " << idnumber << ":" << std::endl;
      Teacher_Iter->printInfo();
      return;
    }
  }
  std::cout << "Member with ID Number " << idnumber << " DO NOT exist." << std::endl;
}

void PersonnelManagementSystem::PrintAllInfos()
{
  std::cout << "" << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "Printing all infomation..." << std::endl;
  std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
  for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
  {
    UndergraduateStudent_Iter->printInfo();
  }

  std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
  for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
  {
    FullTimePostgraduate_Iter->printInfo();
  }

  std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
  for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
  {
    OnJobPostgraduate_Iter->printInfo();
  }

  std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
  for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
  {
    Staff_Iter->printInfo();
  }

  std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
  for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
  {
    Teacher_Iter->printInfo();
  }
  std::cout << "All information of " << NumOfMembers() << " member(s) printed." << std::endl;
  std::cout << "========================================" << std::endl;
  std::cout << "" << std::endl;
}

bool PersonnelManagementSystem::Serialize(std::string &FileName)
{
  std::ofstream outFile(FileName);

  if (!outFile.is_open())
  {
    throw std::runtime_error("Unable to open file.");
    return false;
  }
  else
  {
    std::cout << "Saving database to file: " << FileName << std::endl;
    std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
    for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
    {
      outFile << MemberTypeToString[UndergraduateStudent_Iter->getMemberType()] << "|" << UndergraduateStudent_Iter->getName() << "|" << GenderToString[UndergraduateStudent_Iter->getGender()] << "|" << UndergraduateStudent_Iter->getAge() << "|" << UndergraduateStudent_Iter->getIDNumber() << "|" << UndergraduateStudent_Iter->getScore() << "|" << std::endl;
    }

    std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
    for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
    {
      outFile << MemberTypeToString[FullTimePostgraduate_Iter->getMemberType()] << "|" << FullTimePostgraduate_Iter->getName() << "|" << GenderToString[FullTimePostgraduate_Iter->getGender()] << "|" << FullTimePostgraduate_Iter->getAge() << "|" << FullTimePostgraduate_Iter->getIDNumber() << "|" << FullTimePostgraduate_Iter->getMajor() << "|" << std::endl;
    }

    std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
    for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
    {
      outFile << MemberTypeToString[OnJobPostgraduate_Iter->getMemberType()] << "|" << OnJobPostgraduate_Iter->getName() << "|" << GenderToString[OnJobPostgraduate_Iter->getGender()] << "|" << OnJobPostgraduate_Iter->getAge() << "|" << OnJobPostgraduate_Iter->getIDNumber() << "|" << OnJobPostgraduate_Iter->getStudentNumber() << "|" << OnJobPostgraduate_Iter->getMajor() << "|" << OnJobPostgraduate_Iter->getSalary() << "|" << std::endl;
    }

    std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
    for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
    {
      outFile << MemberTypeToString[Staff_Iter->getMemberType()] << "|" << Staff_Iter->getName() << "|" << GenderToString[Staff_Iter->getGender()] << "|" << Staff_Iter->getAge() << "|" << Staff_Iter->getIDNumber() << "|" << Staff_Iter->getSalary() << "|" << Staff_Iter->getJob() << "|" << std::endl;
    }

    std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
    for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
    {
      outFile << MemberTypeToString[Teacher_Iter->getMemberType()] << "|" << Teacher_Iter->getName() << "|" << GenderToString[Teacher_Iter->getGender()] << "|" << Teacher_Iter->getAge() << "|" << Teacher_Iter->getIDNumber() << "|" << Teacher_Iter->getSalary() << "|" << Teacher_Iter->getMajor() << "|" << std::endl;
    }
    outFile.close();
    std::cout << "Database saved." << std::endl;
  }

  return true;
}

bool PMS_Deserialize(PersonnelManagementSystem &system, std::string &FileName)
{
  system.Clear();
  std::ifstream inFile(FileName);

  if (!inFile.is_open())
  {
    throw std::runtime_error("File not found.");
    return false;
  }
  else
  {
    std::cout << "Loading database from file: " << FileName << std::endl;
    std::string line; // variable to store one line.

    std::string MemberTypeString;
    std::string tmp;
    Name m_name;
    Gender m_gender;
    Age m_age;
    IDNumber m_idnumber;
    Score m_score;
    Major m_major;
    StudentNumber m_studentNumber;
    Salary m_salary;
    Job m_job;

#ifdef DEBUG
    std::cout << "Start reading file." << std::endl;
#endif
    while (std::getline(inFile, line))
    {
      std::stringstream ss(line); //create a string stream from line.

#ifdef DEBUG
      std::cout << line << std::endl;
#endif
      /*
                check data files by checking if the data number of the rows are the same.
                */
      getline(ss, MemberTypeString, '|');
#ifdef DEBUG
      std::cout << MemberTypeString << std::endl;
#endif
      if (MemberTypeString == MemberTypeToString[TYPE_UndergraduateStudent])
      {
        getline(ss, tmp, '|');
        m_name = tmp;
        getline(ss, tmp, '|');
        m_gender = StringToGender[tmp];
        getline(ss, tmp, '|');
        m_age = std::stoi(tmp);
        getline(ss, tmp, '|');
        m_idnumber = tmp;
        getline(ss, tmp, '|');
        m_score = std::stoi(tmp);

        UndergraduateStudent m_UndergraduateStudent(m_name, m_gender, m_age, m_idnumber, m_score);
        system.InsertMemberAtEnd(m_UndergraduateStudent);
      }
      else if (MemberTypeString == MemberTypeToString[TYPE_FullTimePostgraduate])
      {
        getline(ss, tmp, '|');
        m_name = tmp;
        getline(ss, tmp, '|');
        m_gender = StringToGender[tmp];
        getline(ss, tmp, '|');
        m_age = std::stoi(tmp);
        getline(ss, tmp, '|');
        m_idnumber = tmp;
        getline(ss, tmp, '|');
        m_major = tmp;

        FullTimePostgraduate m_FullTimePostgraduate(m_name, m_gender, m_age, m_idnumber, m_major);
        system.InsertMemberAtEnd(m_FullTimePostgraduate);
      }
      else if (MemberTypeString == MemberTypeToString[TYPE_OnJobPostgraduate])
      {
        getline(ss, tmp, '|');
        m_name = tmp;
        getline(ss, tmp, '|');
        m_gender = StringToGender[tmp];
        getline(ss, tmp, '|');
        m_age = std::stoi(tmp);
        getline(ss, tmp, '|');
        m_idnumber = tmp;
        getline(ss, tmp, '|');
        m_studentNumber = tmp;
        getline(ss, tmp, '|');
        m_major = tmp;
        getline(ss, tmp, '|');
        m_salary = std::stod(tmp);

        OnJobPostgraduate m_OnJobPostgraduate(m_name, m_gender, m_age, m_idnumber, m_studentNumber, m_major, m_salary);
        system.InsertMemberAtEnd(m_OnJobPostgraduate);
      }
      else if (MemberTypeString == MemberTypeToString[TYPE_Staff])
      {
        getline(ss, tmp, '|');
        m_name = tmp;
        getline(ss, tmp, '|');
        m_gender = StringToGender[tmp];
        getline(ss, tmp, '|');
        m_age = std::stoi(tmp);
        getline(ss, tmp, '|');
        m_idnumber = tmp;
        getline(ss, tmp, '|');
        m_salary = std::stod(tmp);
        getline(ss, tmp, '|');
        m_job = tmp;

        Staff m_Staff(m_name, m_gender, m_age, m_idnumber, m_salary, m_job);
        system.InsertMemberAtEnd(m_Staff);
      }
      else if (MemberTypeString == MemberTypeToString[TYPE_Teacher])
      {
        getline(ss, tmp, '|');
        m_name = tmp;
        getline(ss, tmp, '|');
        m_gender = StringToGender[tmp];
        getline(ss, tmp, '|');
        m_age = std::stoi(tmp);
        getline(ss, tmp, '|');
        m_idnumber = tmp;
        getline(ss, tmp, '|');
        m_salary = std::stod(tmp);
        getline(ss, tmp, '|');
        m_major = tmp;

        Teacher m_Teacher(m_name, m_gender, m_age, m_idnumber, m_salary, m_major);
        system.InsertMemberAtEnd(m_Teacher);
      }
      else
      {
        throw std::runtime_error("Unknow member type, please check database file.");
        return false;
      }
    }
    inFile.close();
    std::cout << "Database loaded." << std::endl;
    return true;
  }
}

template bool PersonnelManagementSystem::_checkNewMemberByIDNumber(UndergraduateStudent &m_Member);
template bool PersonnelManagementSystem::_checkNewMemberByIDNumber(FullTimePostgraduate &m_Member);
template bool PersonnelManagementSystem::_checkNewMemberByIDNumber(OnJobPostgraduate &m_Member);
template bool PersonnelManagementSystem::_checkNewMemberByIDNumber(Staff &m_Member);
template bool PersonnelManagementSystem::_checkNewMemberByIDNumber(Teacher &m_Member);