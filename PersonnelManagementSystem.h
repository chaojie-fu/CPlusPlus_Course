# include "MemberTypes.h"
# include <list>
# include <string>
# include <iostream>

class PersonnelManagementSystem
{
    private:
        std::list<union Member> MemberList;
    public:
        void InsertMemberAtEnd(union Member & m_Member);
        void InsertMemberAtFront(union Member & m_Member);

        void DeleteMemberByName(Name name);
        void DeleteMemberByIDNumber(IDNumber idnumber); 

        void LookupByName(Name name);
        void LookupByIDNumber(IDNumber idnumber);

        void PrintMemberInfoByName(Name name);
        void PrintAllInfos();
};