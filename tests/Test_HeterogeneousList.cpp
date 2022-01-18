#include "HeterogeneousList.h"

int main()
{
  HeterogeneousList MemberList;

  UndergraduateStudent WangMing("WANG, Ming", Male, 20, "10000000", 700);
  Teacher LiHua("LI, Hua", Male, 40, "00000001", 7000, "Chemistry");
  Staff LiMing("LI, Ming", Male, 30, "10101010", 6000, "Staff");

  MemberList.push_back(WangMing);
  MemberList.push_back(LiHua);
  MemberList.push_back(LiMing);

  HeterogeneousListNode * pNode = MemberList.begin();
  do
  {
    pNode = pNode->nextMember;
    pNode->pMember->printInfo();
  }
  while (pNode != MemberList.end());
}