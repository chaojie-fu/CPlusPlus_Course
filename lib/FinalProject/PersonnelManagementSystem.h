#include "MemberTypes.h"
#include <list>

class PersonnelManagementSystem
{
private:
  std::list<UndergraduateStudent> UndergraduateStudent_List;
  std::list<FullTimePostgraduate> FullTimePostgraduate_List;
  std::list<OnJobPostgraduate> OnJobPostgraduate_List;
  std::list<Staff> Staff_List;
  std::list<Teacher> Teacher_List;
  template <class U>
  bool _checkNewMemberByIDNumber(U &m_Member);

public:
  bool IsEmpty();
  void Clear();
  size_t NumOfMembers();

  /*  
            Failed to use template for InsertMemberAtEnd() and InsertMemberAtFront().
            Got some problems with class type inference.
            */
  bool InsertMemberAtEnd(UndergraduateStudent &m_Member);
  bool InsertMemberAtEnd(FullTimePostgraduate &m_Member);
  bool InsertMemberAtEnd(OnJobPostgraduate &m_Member);
  bool InsertMemberAtEnd(Staff &m_Member);
  bool InsertMemberAtEnd(Teacher &m_Member);

  bool InsertMemberAtFront(UndergraduateStudent &m_Member);
  bool InsertMemberAtFront(FullTimePostgraduate &m_Member);
  bool InsertMemberAtFront(OnJobPostgraduate &m_Member);
  bool InsertMemberAtFront(Staff &m_Member);
  bool InsertMemberAtFront(Teacher &m_Member);

  bool DeleteMemberByIDNumber(IDNumber idnumber);

  void LookupMemberByIDNumber(IDNumber idnumber);

  void PrintAllInfos();

  bool Serialize(std::string &FileName);
  friend bool PMS_Deserialize(PersonnelManagementSystem &system, std::string &FileName);
};