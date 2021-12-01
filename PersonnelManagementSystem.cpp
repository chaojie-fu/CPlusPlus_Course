// ID Number is an identical field, use it to do validation, looking up, deleting and so on.
#include "PersonnelManagementSystem.h"

bool PersonnelManagementSystem::_checkNewMemberByIDNumber(UndergraduateStudent &m_Member)
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

bool PersonnelManagementSystem::_checkNewMemberByIDNumber(FullTimePostgraduate &m_Member)
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

bool PersonnelManagementSystem::_checkNewMemberByIDNumber(OnJobPostgraduate &m_Member)
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

bool PersonnelManagementSystem::_checkNewMemberByIDNumber(Staff &m_Member)
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

bool PersonnelManagementSystem::_checkNewMemberByIDNumber(Teacher &m_Member)
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

size_t PersonnelManagementSystem::NumOfMembers()
{
    return (UndergraduateStudent_List.size() + FullTimePostgraduate_List.size() + OnJobPostgraduate_List.size() + Staff_List.size() + Teacher_List.size());
}

void PersonnelManagementSystem::InsertMemberAtEnd(UndergraduateStudent &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        UndergraduateStudent_List.push_back(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtEnd(FullTimePostgraduate &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        FullTimePostgraduate_List.push_back(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtEnd(OnJobPostgraduate &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        OnJobPostgraduate_List.push_back(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtEnd(Staff &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        Staff_List.push_back(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtEnd(Teacher &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        Teacher_List.push_back(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtFront(UndergraduateStudent &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        UndergraduateStudent_List.push_front(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtFront(FullTimePostgraduate &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        FullTimePostgraduate_List.push_front(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtFront(OnJobPostgraduate &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        OnJobPostgraduate_List.push_front(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtFront(Staff &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        Staff_List.push_front(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::InsertMemberAtFront(Teacher &m_Member)
{
    if (_checkNewMemberByIDNumber(m_Member))
    {
        Teacher_List.push_front(m_Member);
        std::cout << "Member added to database." << std::endl;
        return;
    }
    else
    {
        std::cout << "ID Number duplicated. The new member will NOT be added to the database." << std::endl;
        return;
    }
}

void PersonnelManagementSystem::DeleteMemberByIDNumber(IDNumber idnumber)
{
    std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
    for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
    {
        if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
            UndergraduateStudent_Iter->printInfo();
            UndergraduateStudent_List.erase(UndergraduateStudent_Iter);
            std::cout << "The Member is deleted from database." << std::endl;
            return;
        }
    }

    std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
    for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
    {
        if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
            FullTimePostgraduate_Iter->printInfo();
            FullTimePostgraduate_List.erase(FullTimePostgraduate_Iter);
            std::cout << "The Member is deleted from database." << std::endl;
            return;
        }
    }

    std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
    for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
    {
        if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
            OnJobPostgraduate_Iter->printInfo();
            OnJobPostgraduate_List.erase(OnJobPostgraduate_Iter);
            std::cout << "The Member is deleted from database." << std::endl;
            return;
        }
    }

    std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
    for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
    {
        if (Staff_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
            Staff_Iter->printInfo();
            Staff_List.erase(Staff_Iter);
            std::cout << "The Member is deleted from database." << std::endl;
            return;
        }
    }

    std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
    for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
    {
        if (Teacher_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << " is to be deleted from database. Member information : " << std::endl;
            Teacher_Iter->printInfo();
            Teacher_List.erase(Teacher_Iter);
            std::cout << "The Member is deleted from database." << std::endl;
            return;
        }
    }
}

void PersonnelManagementSystem::PrintMemberInfoByIDNumber(IDNumber idnumber)
{
    std::list<UndergraduateStudent>::iterator UndergraduateStudent_Iter = UndergraduateStudent_List.begin();
    for (; UndergraduateStudent_Iter != UndergraduateStudent_List.end(); UndergraduateStudent_Iter++)
    {
        if (UndergraduateStudent_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << ":" << std::endl;
            UndergraduateStudent_Iter->printInfo();
            return;
        }
    }

    std::list<FullTimePostgraduate>::iterator FullTimePostgraduate_Iter = FullTimePostgraduate_List.begin();
    for (; FullTimePostgraduate_Iter != FullTimePostgraduate_List.end(); FullTimePostgraduate_Iter++)
    {
        if (FullTimePostgraduate_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << ":" << std::endl;
            FullTimePostgraduate_Iter->printInfo();
            return;
        }
    }

    std::list<OnJobPostgraduate>::iterator OnJobPostgraduate_Iter = OnJobPostgraduate_List.begin();
    for (; OnJobPostgraduate_Iter != OnJobPostgraduate_List.end(); OnJobPostgraduate_Iter++)
    {
        if (OnJobPostgraduate_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << ":" << std::endl;
            OnJobPostgraduate_Iter->printInfo();
            return;
        }
    }

    std::list<Staff>::iterator Staff_Iter = Staff_List.begin();
    for (; Staff_Iter != Staff_List.end(); Staff_Iter++)
    {
        if (Staff_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << ":" << std::endl;
            Staff_Iter->printInfo();
            return;
        }
    }

    std::list<Teacher>::iterator Teacher_Iter = Teacher_List.begin();
    for (; Teacher_Iter != Teacher_List.end(); Teacher_Iter++)
    {
        if (Teacher_Iter->getIDNumber() == idnumber)
        {
            std::cout << "The Member with ID Number " << idnumber << ":" << std::endl;
            Teacher_Iter->printInfo();
            return;
        }
    }
}

void PersonnelManagementSystem::PrintAllInfos()
{
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
    std::cout << "All information Printed." << std::endl;
    std::cout << "========================================" << std::endl;
}