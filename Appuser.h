/*
������
      user -- �û��࣬�����û��ĸ�������
      address -- ��ַ�洢�࣬������ļ�����з���
      buyer -- �������࣬���ڹ������
*/
#include <string>
#define LONG 10 //�û�����Ӳ�ʹ�õĵ�ַ����
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
       len -- �洢user�е�ַ������
       ������
       getkey() -- �����ݿ��ж�ȡ���룬���ڵ�½��֤
      */
     string name,add[LONG];
     int userID,len;
public:
      user(){
            len = 0;
      }
      ~user();
      void setName(string name){
            user::name = name;
      }
      void setID(int ID){
            userID = ID;
      }
      void addAddress(address a){
            add[len] = a;
            len++;
      }
};
class buyer : protected user{
private:
protected:
      double pay; //������Ľ��
public:
      buyer();
      buyer(user User){
            name = User.name;
            userID = User.userID;
            for(int i=0;i<=len;i++)
                  add[i] = User.add[len];
      }
      ~buyer();
      int getID(){
            return userID;
      }
      string getBuyerName(){
            return name;
      }
};
class address{
private:
      /* ���� */
protected:
      /*
      ����
      */
public:
      /* 
       ��д��=�������
      */
     address operator=(address a,address b){//��д��ֵ�����
            //a.~=b.~;��д����������д
            return address a;
     }
}