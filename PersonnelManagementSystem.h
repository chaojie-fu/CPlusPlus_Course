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
        bool _checkNewMemberByIDNumber(UndergraduateStudent & m_Member);
        bool _checkNewMemberByIDNumber(FullTimePostgraduate & m_Member);
        bool _checkNewMemberByIDNumber(OnJobPostgraduate & m_Member);
        bool _checkNewMemberByIDNumber(Staff & m_Member);
        bool _checkNewMemberByIDNumber(Teacher & m_Member);
    public:
        bool IsEmpty();
        size_t NumOfMembers();
        void InsertMemberAtEnd(UndergraduateStudent & m_Member);
        void InsertMemberAtEnd(FullTimePostgraduate & m_Member);
        void InsertMemberAtEnd(OnJobPostgraduate & m_Member);
        void InsertMemberAtEnd(Staff & m_Member);
        void InsertMemberAtEnd(Teacher & m_Member);

        void InsertMemberAtFront(UndergraduateStudent & m_Member);
        void InsertMemberAtFront(FullTimePostgraduate & m_Member);
        void InsertMemberAtFront(OnJobPostgraduate & m_Member);
        void InsertMemberAtFront(Staff & m_Member);
        void InsertMemberAtFront(Teacher & m_Member);

        void DeleteMemberByIDNumber(IDNumber idnumber); 

        void LookupMemberByIDNumber(IDNumber idnumber);

        void PrintAllInfos();
};