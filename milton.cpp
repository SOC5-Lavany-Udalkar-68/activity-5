#include<iostream>
using namespace std;
  class Book
{
  public:
  int no;
  Book(int n)
{
  no=n;
}
  Book(Book&B)
{
  no=B.no;
}
  void display()
{
  cout<<"The no of book is:";
}
};

  int main()
{
  Book B1(5);
  Book B2(B1);

  B1.display();
  B2.display();
  return 0;
}
