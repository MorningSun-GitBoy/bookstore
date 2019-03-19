/*
������
      user -- �û��࣬�����û��ĸ�������
      address -- ��ַ�洢�࣬������ļ�����з���
      buyer -- �������࣬���ڹ������
*/
#include <string>//������
#include <iostream>
#define LONG 5 //�û�����Ӳ�ʹ�õĵ�ַ����
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
      user(){}
      //~user();
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
     address(){
           level1="";
           level2="";
           level3="";
           level4="";
           level5="";
     }
     address(string l){//Ϊ�������Ĵ����趨
           level1=l;
           level2="";
           level3="";
           level4="";
           level5="";
     }
     //~address();
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
        len -- �洢user�е�ַ������
        pay -- ������Ľ��
      */
      double pay;
      int len;
      
public:
      /*
       ���ݣ�
       add[] -- ��ҵ�ַ��Ӧ�á��顱�洢����������//���������޷����ʸ���protected��Ա
       ������
       addAddress() -- ���������뵽����ַ�ࡱ����
       getAddress() -- ���ص�ַ����
       setPay() -- ���ý��
       getPay() -- ���ؽ��
       choseAddress -- ���ص�ַ��
      */
      address add[LONG];
      buyer();
      buyer(string Name,int ID,int l,address *addr[],double p=0){
            name = Name;
            userID = ID;
            len = l;
            for(int i=0;i<=l;i++)
                  add[i] = *addr[i];
            pay = p;
      }
      //~buyer();
      void addAddress(address a){
            add[len] = a;
            len++;
      }
      address getAddress(int i){
            return add[i];
      }
      /*
       virtual void dispaly()=0;
       virtual void setPay(double p=0)=0;
       //��֮ǰ������ֻ����ע�͵���
      */
};
/*
 member,honoured_guest,layfolkΪbuyer����������
 ���ڷ�����㹺���˵��ۿۺ���������
 ÿ���඼����һ����0����������
*/
class member : public buyer{
      int leager_grade;//��ʾ��Ա�ȼ�
public:
      member(string Name,int ID,int l,address *addr[],double p,int i)
       : buyer(Name,ID,l,addr,p){//��������б���Ҫд���������ͣ�ֻҪ�븸���в�����һ�¼���
             leager_grade = i;
      }
      void display(){
            cout<<"�����ˣ�"<<name<<"\t";
            cout<<"��ţ�"<<userID<<"\t";
            cout<<"��Ա����"<<leager_grade<<"\n";
            cout<<"��ַ��"<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            if(leager_grade==1)
                  pay = 0.95*p+pay;
            else if(leager_grade==2)
                  pay = 0.90*p+pay;
            else if(leager_grade==3)
                  pay = 0.85*p+pay;
            else if(leager_grade==4)
                  pay = 0.80*p+pay;
            else if(leager_grade==5)
                  pay = 0.7*p+pay;
            else cout<<"�������";
      }
};
class honoured_guest : public buyer{
      double discount_rate;//���Ա�ʾ������ۿۣ�0-1֮���С����
public:
      honoured_guest(string Name,int ID,int l,address *addr[],double p,double r=0.5)
       : buyer(Name,ID,l,addr,p){
             discount_rate = r;
       }
      void display(){
            cout<<"�����ˣ�"<<name<<"\t";
            cout<<"��ţ�"<<userID;
            cout<<"����ۿۣ�"<<discount_rate*100<<"%\n";
            cout<<"��ַ��"<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            pay = pay+(1-discount_rate)*p;
      }
};
class layfolk : public buyer{
public:
      layfolk(string Name,int ID,int l,address *addr[],double p)
       : buyer(Name,ID,l,addr,p){
       }
      void display(){
            cout<<"�����ˣ�"<<name<<"\t";
            cout<<"��ţ�"<<userID<<"\t";
            cout<<"��ַ��"<<getAddress(1).printAddress()<<"\n";
      }
      void setpay(double p=0){
            pay = pay+p;
      }
};