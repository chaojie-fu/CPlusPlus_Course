# include "MemberTypes.h"
# include <list>

class PersonnelManagementSystem
{
    private:
        std::list<UndergraduateStudent> UndergraduateStudent_List;
        std::list<FullTimePostgraduate> FullTimePostgraduate_List;
        std::list<OnJobPostgraduate> OnJobPostgraduate_List;
        std::list<Staff> Staff_List;
        std::list<Teacher> Teacher_List;
        template <class U>
        bool _checkNewMemberByIDNumber(U & m_Member);
    public:
        bool IsEmpty();
        size_t NumOfMembers();

        /*  
            Failed to use template for InsertMemberAtEnd() and InsertMemberAtFront().
            Got some problems with class type inference.
            */
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

        void Serialize(std::string & FileName);
        friend void PMS_Deserialize(PersonnelManagementSystem & system, std::string & FileName);
};