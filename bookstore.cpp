#include <iostream>
#include <string>
#include "AppUser.h"
#include "book.h"
using namespace std;//��������ɻ�����⣬����̫ɵ
int main(){
      int i=0,buyerid,flag;
      book * cbook[2];//ָ��������book�����ַ
      address add1("����");
      address add2("�Ϻ�");
      address * addr[3];//���address�����ַ
      addr[0] = &add1;
      addr[1] = &add2;
      addr[2] = &add1;
      layfolk b1("��ĳ",15171862,0,0);
      honoured_guest b2("����",13848382,0,0,0.5);
      member b3("�Գ���",14383877,0,0,3);
      buyer *b[3]={&b1,&b2,&b3};
      book c1("7-342-04504-6","C++","̷��ǿ","�Ϻ�",25);
      book c2("7-439-04384-9","���ݽṹ","��پȺ","����",25);
      cbook[0] = &c1;
      cbook[1] = &c2;
      b1.display();
      b2.display();
      b3.display();
      return 0;
}