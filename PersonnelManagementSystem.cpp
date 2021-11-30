#include "PersonnelManagementSystem.h"

bool PersonnelManagementSystem::IsEmpty()
{
    return (UndergraduateStudent_List.empty() || FullTimePostgraduate_List.empty() || OnJobPostgraduate_List.empty() || Staff_List.empty() || Teacher_List.empty());
}

size_t PersonnelManagementSystem::NumOfMembers()
{
    return (UndergraduateStudent_List.size() + FullTimePostgraduate_List.size() + OnJobPostgraduate_List.size() + Staff_List.size() + Teacher_List.size());
}

void PersonnelManagementSystem::DeleteMemberByIDNumber(IDNumber idnumber)
{
    std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
    for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
    {
        if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
        {
            UndergraduateStudent_List.erase(UndergraduateStudent_Iter);
        }
    }

    std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
    for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
    {
        if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
        {
            FullTimePostgraduate_List.erase(FullTimePostgraduate_Iter);
        }
    }

    std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
    for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
    {
        if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
        {
            OnJobPostgraduate_List.erase(OnJobPostgraduate_Iter);
        }
    }

    std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
    for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
    {
        if (Staff_Iter->getIDNumber() == idnumber)
        {
            Staff_List.erase(Staff_Iter);
        }
    }

    std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
    for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
    {
        if (Teacher_Iter->getIDNumber() == idnumber)
        {
            Teacher_List.erase(Teacher_Iter);
        }
    }
}

void PersonnelManagementSystem::LookupByIDNumber(IDNumber idnumber)
{
    std::cout << "Member with ID Number" << idnumber << "is: " << std::endl;
    std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
    for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
    {
        if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
        {
            UndergraduateStudent_Iter->printInfo();
        }
    }

    std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
    for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
    {
        if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
        {
            FullTimePostgraduate_Iter->printInfo();
        }
    }

    std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
    for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
    {
        if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
        {
            OnJobPostgraduate_Iter->printInfo();
        }
    }

    std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
    for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
    {
        if (Staff_Iter->getIDNumber() == idnumber)
        {
            Staff_Iter->printInfo();
        }
    }

    std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
    for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
    {
        if (Teacher_Iter->getIDNumber() == idnumber)
        {
            Teacher_Iter->printInfo();
        }
    }
}
