#include "PersonnelManagementSystem.h"

class PersonnelManagementSystem_UI
{
private:
  PersonnelManagementSystem system;
  bool is_latest; // check if the data have been saved to file.
public:
  PersonnelManagementSystem_UI();
  PersonnelManagementSystem_UI(std::string &FileName);
  void MainMenu();
  void InsertMemeberUI();
  void DeleteMemberUI();
  void LookupUI();
  void PrintUI();
  void SaveDataUI();
  void LoadDataUI();
};