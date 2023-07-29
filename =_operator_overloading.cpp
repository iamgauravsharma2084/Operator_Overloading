#include <iostream>
class operator_overloading
{
    private:
      int a,b;
    public:
      void Setdata(int x , int y)
      {
        a=x;
        b=y;
      }
    public:
     void Show()
     {
        std::cout<<"A : "<<a<<" "<<"B : "<<b<<std::endl;
     }


     operator_overloading& operator =(operator_overloading Z)
     {
        operator_overloading temp;
        a=a+Z.a;
        b=b+Z.b;
        return *this;

     }
};


int main()
{
    operator_overloading obj1,obj2,obj3;
    obj1.Setdata(3,4);
    obj2.Setdata(3,4);
    obj3=(obj1=obj2);
    obj3.Show();
}