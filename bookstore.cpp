#include <iostream>
#include <string>
#include "AppUser.h"
#include "book.h"
using namespace std;//解决了最疑惑的问题，是我太傻
int main(){
      int i=0,buyerid,flag;
      book * cbook[2];//指针数组存放book对象地址
      address add1("北京");
      address add2("上海");
      address * addr[3];//存放address对象地址
      addr[0] = &add1;
      addr[1] = &add2;
      addr[2] = &add1;
      layfolk b1("张某",15171862,0,0);
      honoured_guest b2("王雅",13848382,0,0,0.5);
      member b3("赵持续",14383877,0,0,3);
      buyer *b[3]={&b1,&b2,&b3};
      book c1("7-342-04504-6","C++","谭浩强","上海",25);
      book c2("7-439-04384-9","数据结构","许倬群","北大",25);
      cbook[0] = &c1;
      cbook[1] = &c2;
      b1.display();
      b2.display();
      b3.display();
      return 0;
}