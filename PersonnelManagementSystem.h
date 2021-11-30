# include "MemberTypes.h"
# include <list>
# include <string>
# include <iostream>

class PersonnelManagementSystem
{
    private:
        std::list<UndergraduateStudent> UndergraduateStudent_List;
        std::list<FullTimePostgraduate> FullTimePostgraduate_List;
        std::list<OnJobPostgraduate> OnJobPostgraduate_List;
        std::list<Staff> Staff_List;
        std::list<Teacher> Teacher_List;
    public:
        bool IsEmpty();
        size_t NumOfMembers();
        void InsertMemberAtEnd(union Member & m_Member);
        void InsertMemberAtFront(union Member & m_Member);

        void DeleteMemberByName(Name name);
        void DeleteMemberByIDNumber(IDNumber idnumber); 

        void LookupByName(Name name);
        void LookupByIDNumber(IDNumber idnumber);

        void PrintMemberInfoByName(Name name);
        void PrintAllInfos();
};