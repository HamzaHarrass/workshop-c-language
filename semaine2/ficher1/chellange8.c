#include<stdio.h>
# include <math.h>


  int main (){
  	
  	float a,b,m,B,A,M;
     
     a=-15;
     b=-10;
     
       do {
            m=(a+b)/2;
			    A=pow(a,3)+12*pow(a,2)+1;
			    B=pow(b,3)+12*pow(b,2)+1;
			    M=pow(m,3)+12*pow(m,2)+1;
		 
		    if(A*M<0) b=m;
			if(B*M<0) a=m;
       	  
	   }while (b-a>0.00001) ;
	   printf("%f %f",a,b);
  	
  	return 0;
  }
