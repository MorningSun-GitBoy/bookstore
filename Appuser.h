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
       getID() -- �����û���ID
       getName() -- �����û���
       collateKey() -- �����û������Ƿ���ȷ
      */
      user();
      ~user();
      void setName(string name){
            user::name = name;
      }
      void setID(int ID){
            userID = ID;
      }
      int getID(){
            return userID;
      }
      string getName(){
            return name;
      }
};
class buyer : public user{
      /*����������
       public--�������ڲ����Է��ʻ����protected��public���Եĳ�Ա�����������ֻ�ܷ��ʻ���public���Եĳ�Ա��
       protected--�������ڲ����Է��ʻ����protected��public���Եĳ�Ա������������޷����ʻ����κγ�Ա�������������ڲ��Ի���ķ���Ȩ��ͬ���ĸ��ࡣ
       private--���������ڲ����Է��ʻ����protected��public���Եĳ�Ա��������������޷����ʻ����κγ�Ա�������������ڲ��޷����ʻ�����κγ�Ա
      */
private:
protected:
      /*
        ���ݣ�
        add[] -- ��ҵ�ַ��Ӧ�á��顱�洢����������
        len -- �洢user�е�ַ������
        off -- �洢���Ӧ�е��ۿ�(���Դ���ԭ���е�buyer������)
        pay -- ������Ľ��
      */
      double pay,off;
      int len;
      address add[LONG];
public:
      /*
       ������
       addAddress() -- ���������뵽����ַ�ࡱ����
       setPay() -- ���ý��
       getPay() -- ���ؽ��
       choseAddress -- ���ص�ַ��
      */
      buyer();
      buyer(string Name,int ID,int l,address *addr[],double p=0){
            name = Name;
            userID = ID;
            len = l;
            for(int i=0;i<=l;i++)
                  add[i] = *addr[i];
            pay = p;
      }
      ~buyer();
      void addAddress(address a){
            add[len] = a;
            len++;
      }
      void setPay(double p){
            pay = p*(1-off);
      }
      double getPay(){
            return pay;
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
};