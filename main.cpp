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
   
 if(type == "")
 {
    
 }// the end of ??


}// the end of main(void)