/*
������
      user -- �û��࣬�����û��ĸ�������
      address -- ��ַ�洢�࣬������ļ�����з���
      buyer -- �������࣬���ڹ������
*/
#include <string>
#define LONG 10
using namespace std;//��仰�ƺ�û��
class user{
private:
      /* ���ݣ�
       key -- �û�������
       status -- �û��ĵ�½״̬
      */
     string key;
     bool status;
protected:
      /*
       ���ݣ�
       name -- �û���
       userID -- �û�Ψһ��ʶ��
       address -- �û���ַ��Ӧ�á��顱�洢����������
       ������
       getkey() -- �����ݿ��ж�ȡ���룬���ڵ�½��֤
      */
     string name,add[LONG];
     int userID;
public:
      user();
      ~user();
      void setName(string name){
            user::name = name;
      }
      void addAddress(address a){
            
      }
};
class buyer : protected user{
private:

};
class address{
private:
      /* ���� */
protected:
      /*
      ����
      */
public:
      /* args */
}