#include<iostream>

using namespace std;
int A,B;
int adiff(int A,int B)
  {
    int i,C;
    if((A%360)==0)
      {
        A=0;
      }
    if(A>360)
      {
        i=0;
        while(i<A)
          {
            if(A>360)
              {
                A=A-360;
                i++;
              }
            else
              {
                A=A;
                i=i+9999;
              }    
          }

      }
    if(A<-360)
      {
        i=0;
        while(i>A)
          {
            if(A<-360)
              {
                A=A+360;
                i--;
              }
            else
              {
                A=A;
                i=i-9999;
              }    
          }

      }    
   if((B%360)==0)
      {
        B=0;
      }
    if(B>360)
      {
        i=0;
        while(i<B)
          {
            if(B>360)
              {
                B=B-360;
                i++;
              }  
            else
              {
                B=B;
                i=i+9999;
              }       
          }

      }
    if(B<-360)
      {
        i=0;
        while(i>B)
          {
            if(B-360)
              {
                B=B+360;
                i--;
              }
           else
              {
                B=B;
                i=i-9999;
              }         
          }

      }
  C=A-B;
    if(C<0)
      {
        C=C*(-1);
      }
    if(C>180)
      {
        C=(C-360)*(-1);
      }  
  return C;
  }


int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244)<<"\n";
}
