/*
 ������
      book -- �鱾�࣬�洢�鱾��Ϣ
*/
#include <iostream>
#include <string>
using namespace std;//�����С�namespace������ʹ������������
class book{
private:
protected:
      /*
       ���ݣ�
       bookID -- ���
       bookName -- ����
       author -- ����
       publishing -- ������Ϣ
       price -- �鱾�۸�
      */
      string bookID,bookName,author,publishing;
      double price;
public:
      /*
       ������
       getID() -- 
       getBookName() -- 
       getAuthor() -- 
       getPublishing() -- 
       getprice() -- 
      */
     book();
     book(string ID,string NAME,string au,string pu,double p){
           bookID = ID;
           bookName = NAME;
           author = au;
           publishing = pu;
           price = p;
     }
     ~book();
     void dispaly(){//������ֲ���
           cout<<"��ţ�"<<bookID<<"\t";
           cout<<"������"<<bookName<<"\t";
           cout<<"���ߣ�"<<author<<"\t";
           cout<<"�����磺"<<publishing<<"\t";
           cout<<"���ۣ�"<<price<<"\t";
           //�����հ汾�п��ܻ�ɾ�����߸�����������ֶ�
     }
     string getID(){
           return bookID;
     }
     string getBookName(){
           return bookName;
     }
     string getAuthor(){
           return author;
     }
     string getPublishing(){
           return publishing;
     }
     double getPrice(){
           return price;
     }
};