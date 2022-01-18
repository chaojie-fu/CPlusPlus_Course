#include "MemberTypes.h"

class HeterogeneousListNode
{
  public:
    MemberBase * pMember = nullptr;
    HeterogeneousListNode * nextMember = nullptr;
};

class HeterogeneousList
{
  public:
    HeterogeneousList();
    HeterogeneousList(MemberBase & FirstElement);
    // ~HeterogeneousList();
    void push_front(MemberBase & newElement);
    void push_back(MemberBase & newElement);
    bool is_empty();
    HeterogeneousListNode * begin(){return head;};
    HeterogeneousListNode * end(){return tail;};
    HeterogeneousListNode * next(HeterogeneousListNode * curr){return curr->nextMember;};

  private:
    HeterogeneousListNode * head;
    HeterogeneousListNode * tail;
};
