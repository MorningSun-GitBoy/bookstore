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
protected://��Ȩ�޶����޷����ⲿ������ָ���������
      /*
       ���ݣ�
       name -- �û���
       userID -- �û�Ψһ��ʶ��
       ������
       getkey() -- �����ݿ��ж�ȡ���룬���ڵ�½��֤
      */
     string name;
     int userID;
     void getkey(string k){
           key = k;
     }
public:
      /*
       ������
       setName() -- Ϊname��ֵ
       setID() -- ΪuserID��ֵ
      */
      user();
      ~user();
      void setName(string name){
            user::name = name;
      }
      void setID(int ID){
            userID = ID;
      }
};
class buyer : protected user{
private:
protected:
      /*
        ���ݣ�
        add[] -- ��ҵ�ַ��Ӧ�á��顱�洢����������
        len -- �洢user�е�ַ������
        pay -- ������Ľ��
      */
      double pay;
      int len;
      address add[LONG];
public:
      /*
       ������
       getID() -- �����û���ID
       getBuyerName() -- �����û���
       addAddress() -- ���������뵽����ַ�ࡱ����
      */
      buyer();
      buyer(string Name,int ID,int l,address addr[]){
            name = Name;
            userID = ID;
            len = l;
            for(int i=0;i<=l;i++)
                  add[i] = addr[i];
      }
      ~buyer();
      int getID(){
            return userID;
      }
      string getBuyerName(){
            return name;
      }
      void addAddress(address a){
            add[len] = a;
            len++;
      }
};
class address{
private:
protected:
     /* ���ݣ�
            �����ַ�ȼ�����Ӧ��ʡ�����ֵ��;���λ�á�
            level1 -- ����λ��
            level2 -- �ֵ�
            level3 -- ��
            level4 -- ��
            level5 -- ʡ
      */
     string level1,level2,level3,level4,level5;
public:
      /* 
       ������
       ��д��=�������,û�б�Ҫ��C++���������֮��ĸ�ֵ
       printAddress() -- ��������string��ַ
       setLevles() -- ����swich�����ø����������
       getLevels() -- ����swich���������⼶���ַ
      */
     void setLevles(){

     }
     string getLevels(){
           string level;
           return level;
     }
     string printAddress(){
           string Address;
           Address = level5+level4+level3+level2+level1;
           return Address;
     }
}