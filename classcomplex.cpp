#include<iostream>
using namespace std;

class complex{
  int real,img;
  public :
  void setdata(int r,int i)
  {
    real = r;
    img = i;
  }
  void getdata()
  {
    cout<<"Enter the realno = "<<endl;
    cin>>real;
    cout<<"Enter the imaginary = "<<endl;
    cin>>img;
  }
  complex sum(complex c2)
  {
    complex t;
    t.real = real + c2.real;
    t.img = img + c2.img;

    return t;
  }
  void output()
  {
    cout<<real<<"+"<<img<<"i"<<endl;
  }
};

int main()
{
  complex c1,c2,c3;
  c1.setdata(7,3);
  c2.getdata();
  c3 = c1.sum(c2);
  c1.output();
  c2.output();
  c3.output();
  return 0;
}
