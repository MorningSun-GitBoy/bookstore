/*
 ������
      book -- �鱾�࣬�洢�鱾��Ϣ
*/
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
protected:
      /*
       ������
       getID() -- 
       getBookName() -- 
       getAuthor() -- 
       getoublishing() -- 
       getprice() -- 
      */
     book();
     ~book();
     void dispaly(){}
     string getID(){}
     string getBookName(){}
     string getAuthor(){}
     string getoublishing(){}
     double getprice(){}
}