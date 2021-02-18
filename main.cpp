// that code are writien by hilal 
/*
     that is council calculator made by hilal 
     as project to learn more about c/cpp and 
     programming so if there any ideas commit
     them.
*/
#include<iostream>
#include<string>
#include <cmath>


int main(void)
{
   std::cout << "what is the available mathmatical type\n";
   std::string type ;
   std::cin >> type ;
   // if-loops for andrstandingthat ^^^.
   //wchar_t eqn[] = L"eqn" ;
   std::string eqn ="eqn" ;
   if( type == eqn )
   {
     std::string rank;
     std::cout<<"rank?\n";
     std::cin>>rank ;
       if(rank == "1")
       { // solve pow1 eqn 
         float XPow1;
         float InPow1a;
         float InPow1b;
         float InPow1c;
         std::cout<<"f(x)=aX+b=c  //so type a,b,c in the order\n";
         std::cout<<"a=";
         std::cin>> InPow1a;
         std::cout<<"\nb=";
         std::cin>> InPow1b;
         std::cout<<"\nc=";
         std::cin>> InPow1c;
         XPow1= (InPow1c - InPow1b) / InPow1a;
         std::cout<<"\n";
         std::cout<< XPow1;
       }// ////////////////////////////////pow1 eqn code end
       if(rank == "2")
       {
         float XPow2_1;
         float XPow2_2;
         float InPow2a;
         float InPow2b;
         float InPow2c;
         std::cout<<"f(x)=a(x^2)+bx+c=0  //so type a,b,c in the order\n";
         std::cout<<"a=";
         std::cin>> InPow2a;
         std::cout<<"\nb=";
         std::cin>> InPow2b;
         std::cout<<"\nc=";
         std::cin>> InPow2c;
         float realPart, imaginaryPart,discriminant;
         discriminant = InPow2b*InPow2b - 4*InPow2a*InPow2a;
    
    if (discriminant > 0) {
        XPow2_1 = (-InPow2b + sqrt(discriminant)) / (2*InPow2a);
        XPow2_2 = (-InPow2b - sqrt(discriminant)) / (2*InPow2a);
        std::cout << "Roots are real and different." << "\n";
        std::cout << "x1 = " << XPow2_1 << "\n";
        std::cout << "x2 = " << XPow2_2 << "\n";
    }
    
    else if (discriminant == 0) {
        std::cout << "Roots are real and same." << "\n";
        XPow2_1 = -InPow2b/(2*InPow2a);
        std::cout << "x1 = x2 =" << XPow2_1 << "\n";
    }

    else {
        realPart = -InPow2b/(2*InPow2a);
        imaginaryPart =sqrt(-discriminant)/(2*InPow2a);
        std::cout << "Roots are complex and different."  << "\n";
        std::cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << "\n";
        std::cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << "\n";
    }
         
    }//the end of the pow2 code


   }// the end of the eqn code
   
 if(type == "2eqns")
 {
    float In_a1;
    float In_b1;
    float In_c1;
    float In_d1;
    float In_a2;
    float In_b2;
    float In_c2;
    float In_d2;
    std::cout<<"ay+bx+c=d , (a_2)y+(b_2)x+(c-2)=(d_2)  //so type a,b,c,(a_2),(b_2),(c_2) in the order"<<"\n";
         std::cout<<"a=";
         std::cin>> In_a1;
         std::cout<<"\nb=";
         std::cin>> In_b1;
         std::cout<<"\nc=";
         std::cin>> In_c1;
         std::cout<<"\n(d)=";
         std::cin>> In_d1;
         std::cout<<"(a_2)=";
         std::cin>> In_a2;
         std::cout<<"\n(b_2)=";
         std::cin>> In_b2;
         std::cout<<"\n(c_2)=";
         std::cin>> In_c2;
         std::cout<<"\n(d_2)=";
         std::cin>> In_d2;
         float q;
         if (In_a1 != In_a2)
         {
         if( In_a1 > In_a2 )
         { q = In_a1 - In_a2 ;}
         if( In_a1 < In_a2 )
         { q = In_a2 - In_a1 ;}
          In_a1=In_a1+q;
          In_b1=In_b1+q;
          In_c1=In_c1+q;
          float aqa = In_a1 - In_a2;
          float aqb = In_b1 - In_b2;
          float aqc = In_c1 - In_c2;
          float aqd = In_d1 - In_d2;
          // ? your algorthim son!!!
         }//the end of if(In_a1 != In_a2)
         
                   
 }// the end of 2eqns
 if(type == "3eqns")
 {
    float In_a1;
    float In_b1;
    float In_c1;
    float In_a2;
    float In_b2;
    float In_c2;
    float In_a3;
    float In_b3;
    float In_c3;

 }// the end of 3eqns

}// the end of main(void)
