#include <limits>
#include "PersonnelManagementSystem_UI.h"

#ifdef DEBUG
#include <chrono>
#include <thread>
#endif

PersonnelManagementSystem_UI::PersonnelManagementSystem_UI()
{
  std::cout << "Personnel Management System initialized." << std::endl;
  std::cout << "No previous data loaded." << std::endl;
  is_latest = true;
  MainMenu();
}

PersonnelManagementSystem_UI::PersonnelManagementSystem_UI(std::string &FileName)
{
  std::cout << "Personnel Management System initialized." << std::endl;
  std::cout << "Trying to load data from file: " << FileName << std::endl;
  PMS_Deserialize(system, FileName);
  std::cout << "Previous data from file: " << FileName << " loaded." << std::endl;
  is_latest = true;
  MainMenu();
}

void PersonnelManagementSystem_UI::MainMenu()
{
  while (true)
  {
    std::cout << std::endl;
    std::cout << "==================== Main Menu ====================" << std::endl;
    std::cout << "[0] Insert New Member" << std::endl;
    std::cout << "[1] Delete Member by ID number" << std::endl;
    std::cout << "[2] Look up Member by ID number" << std::endl;
    std::cout << "[3] Print the information of all members" << std::endl;
    std::cout << "[4] Save data to file" << std::endl;
    std::cout << "[5] Load data from file" << std::endl;
    std::cout << "[6] Exit system" << std::endl;
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
#ifdef DEBUG
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
    int choice_main = -1;
    std::cout << "Input your choice: ";
    std::cin >> choice_main;
    if (std::cin.fail())
    {
      choice_main = -1;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    switch (choice_main)
    {
    case 0:
    {
      InsertMemeberUI();
      break;
    }
    case 1:
    {
      DeleteMemberUI();
      break;
    }
    case 2:
    {
      LookupUI();
      break;
    }
    case 3:
    {
      PrintUI();
      break;
    }
    case 4:
    {
      SaveDataUI();
      break;
    }
    case 5:
    {
      LoadDataUI();
      break;
    }
    case 6:
    {
      if (is_latest == false)
      {
        std::cout << "Your data have not been saved, do you still want to exit? [Y/N]: ";
        std::string continue_flag;
        std::cin >> continue_flag;
        if (continue_flag == "Y" || continue_flag == "y")
        {
          std::cout << "System exited." << std::endl;
          return;
        }
      }
      break;
    }
    default:
    {
      std::cout << "Invalid Choice. Input a number from 1 to 6." << std::endl;
      break;
    }
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}

void PersonnelManagementSystem_UI::InsertMemeberUI()
{
  std::cout << std::endl;
  std::cout << "================ Insert new Member ================" << std::endl;
  std::cout << "Which kind of member do you want to insert?" << std::endl;
  std::cout << "[0] Undergraduate Student" << std::endl;
  std::cout << "[1] Full-Time Postgraduate" << std::endl;
  std::cout << "[2] On-Job Postgraduate" << std::endl;
  std::cout << "[3] Staff" << std::endl;
  std::cout << "[4] Teacher" << std::endl;
  std::cout << "[5] Go back to main menu" << std::endl;
  std::cout << "Input your choice: ";

  int choice_insert = -1;
  std::cin >> choice_insert;
  if (std::cin.fail())
  {
    choice_insert = -1;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

#ifdef DEBUG
  std::cout << choice_insert << std::endl;
#endif
  std::cout << "===================================================" << std::endl;
  std::cout << std::endl;
  switch (choice_insert)
  {
  case 0:
  {
    std::cout << "Inserting new Undergraduate Student Member:" << std::endl;
    Name m_name;
    Gender m_gender;
    int gender_flag = -1;
    Age m_age;
    IDNumber m_idnumber;
    Score m_score;

    std::cout << "Name: ";
    std::cin >> m_name;

    std::cout << "Gender[0: Male; 1:Female]: ";
    std::cin >> gender_flag;
    while (gender_flag != 0 && gender_flag != 1)
    {
#ifdef DEBUG
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
      std::cout << "Invalid Gender" << std::endl;
    }
    if (gender_flag == 0)
    {
      m_gender = Male;
    }
    else
    {
      m_gender = Female;
    }

    std::cout << "Age: ";
    std::cin >> m_age;

    std::cout << "ID Number: ";
    std::cin >> m_idnumber;

    std::cout << "Score: ";
    std::cin >> m_score;

    UndergraduateStudent member(m_name, m_gender, m_age, m_idnumber, m_score);
    if (system.InsertMemberAtEnd(member))
    {
      is_latest = false;
    }

    break;
  }
  case 1:
  {
    std::cout << "Inserting new Full-Time Postgraduate Member:" << std::endl;
    Name m_name;
    Gender m_gender;
    int gender_flag = -1;
    Age m_age;
    IDNumber m_idnumber;
    Major m_major;

    std::cout << "Name: ";
    std::cin >> m_name;

    std::cout << "Gender[0: Male; 1:Female]: ";
    std::cin >> gender_flag;
    while (gender_flag != 0 && gender_flag != 1)
    {
#ifdef DEBUG
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
      std::cout << "Invalid Gender" << std::endl;
    }
    if (gender_flag == 0)
    {
      m_gender = Male;
    }
    else
    {
      m_gender = Female;
    }

    std::cout << "Age: ";
    std::cin >> m_age;

    std::cout << "ID Number: ";
    std::cin >> m_idnumber;

    std::cout << "Major: ";
    std::cin >> m_major;

    FullTimePostgraduate member(m_name, m_gender, m_age, m_idnumber, m_major);
    if (system.InsertMemberAtEnd(member))
    {
      is_latest = false;
    }

    break;
  }
  case 2:
  {
    std::cout << "Inserting new On-Job Postgraduate Member:" << std::endl;
    Name m_name;
    Gender m_gender;
    int gender_flag = -1;
    Age m_age;
    IDNumber m_idnumber;
    StudentNumber m_studentnumber;
    Major m_major;
    Salary m_salary;

    std::cout << "Name: ";
    std::cin >> m_name;

    std::cout << "Gender[0: Male; 1:Female]: ";
    std::cin >> gender_flag;
    while (gender_flag != 0 && gender_flag != 1)
    {
#ifdef DEBUG
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
      std::cout << "Invalid Gender" << std::endl;
    }
    if (gender_flag == 0)
    {
      m_gender = Male;
    }
    else
    {
      m_gender = Female;
    }

    std::cout << "Age: ";
    std::cin >> m_age;

    std::cout << "ID Number: ";
    std::cin >> m_idnumber;

    std::cout << "Student Number: ";
    std::cin >> m_studentnumber;

    std::cout << "Major: ";
    std::cin >> m_major;

    std::cout << "Salary: ";
    std::cin >> m_salary;

    OnJobPostgraduate member(m_name, m_gender, m_age, m_idnumber, m_studentnumber, m_major, m_salary);
    if (system.InsertMemberAtEnd(member))
    {
      is_latest = false;
    }

    break;
  }
  case 3:
  {
    std::cout << "Inserting new Staff Member:" << std::endl;
    Name m_name;
    Gender m_gender;
    int gender_flag = -1;
    Age m_age;
    IDNumber m_idnumber;
    Salary m_salary;
    Job m_job;

    std::cout << "Name: ";
    std::cin >> m_name;

    std::cout << "Gender[0: Male; 1:Female]: ";
    std::cin >> gender_flag;
    while (gender_flag != 0 && gender_flag != 1)
    {
#ifdef DEBUG
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
      std::cout << "Invalid Gender" << std::endl;
    }
    if (gender_flag == 0)
    {
      m_gender = Male;
    }
    else
    {
      m_gender = Female;
    }

    std::cout << "Age: ";
    std::cin >> m_age;

    std::cout << "ID Number: ";
    std::cin >> m_idnumber;

    std::cout << "Salary: ";
    std::cin >> m_salary;

    std::cout << "Job: ";
    std::cin >> m_job;

    Staff member(m_name, m_gender, m_age, m_idnumber, m_salary, m_job);
    if (system.InsertMemberAtEnd(member))
    {
      is_latest = false;
    }

    break;
  }
  case 4:
  {
    std::cout << "Inserting new Teacher Member:" << std::endl;
    Name m_name;
    Gender m_gender;
    int gender_flag = -1;
    Age m_age;
    IDNumber m_idnumber;
    Salary m_salary;
    Major m_major;

    std::cout << "Name: ";
    std::cin >> m_name;

    std::cout << "Gender[0: Male; 1:Female]: ";
    std::cin >> gender_flag;
    while (gender_flag != 0 && gender_flag != 1)
    {
#ifdef DEBUG
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
#endif
      std::cout << "Invalid Gender" << std::endl;
    }
    if (gender_flag == 0)
    {
      m_gender = Male;
    }
    else
    {
      m_gender = Female;
    }

    std::cout << "Age: ";
    std::cin >> m_age;

    std::cout << "ID Number: ";
    std::cin >> m_idnumber;

    std::cout << "Salary: ";
    std::cin >> m_salary;

    std::cout << "Major: ";
    std::cin >> m_major;

    Teacher member(m_name, m_gender, m_age, m_idnumber, m_salary, m_major);
    if (system.InsertMemberAtEnd(member))
    {
      is_latest = false;
    }

    break;
  }
  case 5:
  {
    return;
    break;
  }
  default:
  {
    std::cout << "Invalid Choice. Input a number from 1 to 5." << std::endl;
    break;
  }
  }
}

void PersonnelManagementSystem_UI::DeleteMemberUI()
{
  std::cout << std::endl;
  std::cout << "================== Delete Member ==================" << std::endl;
  std::cout << "Input ID Number to delete the member from database:";
  IDNumber m_idnumber;
  std::cin >> m_idnumber;
  if (m_idnumber.empty())
  {
    std::cout << "Return to upper menu." << std::endl;
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
    return;
  }
  else
  {
    if (system.DeleteMemberByIDNumber(m_idnumber))
    {
      is_latest = false;
    }
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
    return;
  }
}

void PersonnelManagementSystem_UI::LookupUI()
{
  std::cout << std::endl;
  std::cout << "================== Lookup Member ==================" << std::endl;
  std::cout << "Input ID Number to lookup the member:";
  IDNumber m_idnumber;
  std::cin >> m_idnumber;
  if (m_idnumber.empty())
  {
    std::cout << "Return to upper menu." << std::endl;
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
    return;
  }
  else
  {
    system.LookupMemberByIDNumber(m_idnumber);
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
    return;
  }
}

void PersonnelManagementSystem_UI::PrintUI()
{
  std::cout << std::endl;
  std::cout << "================ Print Information ================" << std::endl;
  system.PrintAllInfos();
  std::cout << "===================================================" << std::endl;
  std::cout << std::endl;
}

void PersonnelManagementSystem_UI::SaveDataUI()
{
  std::cout << std::endl;
  std::cout << "==================== Save Data ====================" << std::endl;
  std::cout << "Input the file name you want to save to:";
  std::string filename;
  std::cin >> filename;
  if (filename.empty())
  {
    filename = "database.csv";
  }
  if (system.Serialize(filename))
  {
    is_latest = true;
  }
  std::cout << "===================================================" << std::endl;
  std::cout << std::endl;
}

void PersonnelManagementSystem_UI::LoadDataUI()
{
  std::cout << std::endl;
  std::cout << "==================== Load Data ====================" << std::endl;
  if (is_latest = false)
  {
    std::cout << "Your data have not been saved, do you want to continue? [Y/N]: ";
    std::string continue_flag;
    std::cin >> continue_flag;
    if (continue_flag == "Y" || continue_flag == "y")
    {
      std::cout << "Input the file name you want to load: ";
      std::string filename;
      std::cin >> filename;
      if (filename.empty())
      {
        filename = "database.csv";
      }
      if (PMS_Deserialize(system, filename))
      {
        is_latest = true;
      }
      std::cout << "===================================================" << std::endl;
      std::cout << std::endl;
      return;
    }
    else
    {
      std::cout << "Return to upper menu without Loading." << std::endl;
      std::cout << "===================================================" << std::endl;
      std::cout << std::endl;
      return;
    }
  }
  else
  {
    std::cout << "Input the file name you want to load: ";
    std::string filename;
    std::cin >> filename;
    if (filename.empty())
    {
      filename = "database.csv";
    }
    if (PMS_Deserialize(system, filename))
    {
      is_latest = true;
    }
    std::cout << "===================================================" << std::endl;
    std::cout << std::endl;
    return;
  }
}