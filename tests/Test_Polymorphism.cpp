#include "MemberTypes.h"

int main()
{
  MemberBase * pMember;
  UndergraduateStudent WangMing("WANG, Ming", Male, 20, "10000000", 700);
  Teacher LiHua("LI, Hua", Male, 40, "00000001", 7000, "Chemistry");

  std::cout << "Print Infos of WANG, Ming:" << std::endl;
  pMember = &WangMing;
  pMember->printInfo();

  std::cout << "Print Infos of LI, Hua:" << std::endl;
  pMember = &LiHua;
  pMember->printInfo();
}