# include "HeterogeneousList.h"

HeterogeneousList::HeterogeneousList()
{
  head = new HeterogeneousListNode;
  tail = new HeterogeneousListNode;
  head->pMember = nullptr;
  head->nextMember = tail;
  tail->pMember = nullptr;
  tail->nextMember = nullptr;
}

HeterogeneousList::HeterogeneousList(MemberBase & FirstElement)
{
  head = new HeterogeneousListNode;
  tail = new HeterogeneousListNode;
  head->pMember = nullptr;
  head->nextMember = tail;
  tail->pMember = &FirstElement;
  tail->nextMember= nullptr;
}

void HeterogeneousList::push_front(MemberBase & newElement)
{
  if (is_empty())
  {
    tail->pMember = &newElement;
  }
  else
  {
    HeterogeneousListNode * newNode = new HeterogeneousListNode;
    newNode->pMember = &newElement;
    newNode->nextMember = head->nextMember;
    head->nextMember = newNode;
  }
}

void HeterogeneousList::push_back(MemberBase & newElement)
{
  if (is_empty())
  {
    tail->pMember = &newElement;
  }
  else
  {
    HeterogeneousListNode * newNode = new HeterogeneousListNode;
    newNode->pMember = &newElement;
    newNode->nextMember = nullptr;
    tail->nextMember = newNode;
    tail = newNode;
  }
}

bool HeterogeneousList::is_empty()
{
  if (tail->pMember == nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}