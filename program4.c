#include <stdio.h>

#include<stdio.h>


#include<stdlib.h>


#include<unistd.h>


#include<sys/types.h>


#include<string.h>


#include<sys/wait.h>
int main()

{

int a[1000];

int sum=0;

for(int i=0;i<1000;i++)

{
  
  a[i]=i;

}
//make ten processes of size 2
  
 int p1[2];

   int p2[2];

   int p3[2];

   int p4[2];

   int p5[2];

   int p6[2];
 
   int p7[2];
 
   int p8[2];

   int p9[2];
 
   int p10[2];

if (pipe(p1)==-1)
  
 
 {
     
  
 printf("Pipe Failed  1" );
 
  
     return 1;
   

 }

if (pipe(p2)==-1)
  

  {
     
  
 printf("Pipe Failed  2" );
 
  
     return 1;
  
 
 }
 
if (pipe(p3)==-1)

  
  {

       
 printf("Pipe Failed 3" );

   
     return 1;
  
 
 }

if (pipe(p4)==-1)
  
 
 {
 
      
 printf("Pipe Failed 4" );

   
     return 1;
   

 }

 if (pipe(p5)==-1)
 
 
  {

       
 printf("Pipe Failed 5" );
   

     return 1;
 
  
 }

 if (pipe(p6)==-1)
  

  {

       
 printf("Pipe Failed 6" );

   
     return 1;

   
 }

 if (pipe(p7)==-1)

  
  {
 
      
 printf("Pipe Failed 7" );

   
     return 1;
   
 
}

 if (pipe(p8)==-1)
  

  {
       

 printf("Pipe Failed 8" );

   
     return 1;

   
 }
if (pipe(p9)==-1)
  

  {
 
      
 printf("Pipe Failed 9" );

   
     return 1;

   
 }
if (pipe(p10)==-1)
  

  {
     
  
 printf("Pipe Failed 10" );

   
     return 1;
   
 
  }
int cpid = fork();

  
 
 if (cpid < 0)

    
{

        
printf("fork Failed" );
 

       return 1;
 
   
}
else
 
{

     
 int cpid1=fork();

  if(cpid1 ==0 )

   
 {

     
 for(int i=0;i<100;i++)

 {
     
sum+=a[i];
 
}

 
 write(p1[1],sum,strlen(sum)+1) ;


    close(p1[1]);
   

     exit(0);
  
 
 }

 //} 
 else
  
  
{

    
  int cpid2=fork();
  
if(cpid2==0 )
  
 
 {
 
    
 for(int i=100;i<200;i++)

 {
     sum+=a[i];
 
}

 
   write(p2[1],sum,strlen(sum)+1) ;


    close(p2[1]);
   

     exit(0);
  
  
}

  

  //}
else 

{

   int cpid3=fork();
  
if(cpid3==0 )
 
  
 {
    
 
 for(int i=200;i<300;i++)

 {
     sum+=a[i];

 }

 
   write(p3[1],sum,strlen(sum)+1) ;


    close(p3[1]);

   
     exit(0);
  

  }
 

//}

else

{
   
 int cpid4=fork();

  if(cpid4==0 )
 
  
 {
     

 for(int i=300;i<400;i++)
 
{
     sum+=a[i];

 }
 
 
  write(p4[1],sum,strlen(sum)+1) ;

   
 close(p4[1]);

   
     exit(0);
  

  }


//}

else

{
  
  int cpid5=fork();

  if(cpid5==0 )
  
 
 {
  
   
 for(int i=400;i<500;i++)
 
{
     sum+=a[i];

 }
 

   write(p5[1],sum,strlen(sum)+1) ;


    close(p5[1]);

   
     exit(0);
 
 
  }


//}

else

{

    int cpid6=fork();
  
if(cpid6==0 )
   
 
{
    
 
 for(int i=500;i<600;i++)

 {
 
    sum+=a[i];
 
}

 
   write(p6[1],sum,strlen(sum)+1) ;

  
  close(p6[1]);
   
   
  exit(0);
  

  }


//}

else 

{

    int cpid7=fork();
 
 if(cpid7==0 )
 
  
 {
   
  
 for(int i=600;i<700;i++)
 
{
     
sum+=a[i];

 }

 
   write(p7[1],sum,strlen(sum)+1) ;


    close(p7[1]);
   

     exit(0);

  
  }


//}

else

{

    int cpid8=fork();
 
 if(cpid8==0 )
   
 
{

     
 for(int i=700;i<800;i++)

 {

     sum+=a[i];

 }

 
   write(p8[1],sum,strlen(sum)+1) ;


    close(p8[1]);
   
 
    exit(0);
  
  
}


//}

else

{

    int cpid9=fork();

  if(cpid9==0 )
   

 {
  
   
 for(int i=800;i<900;i++)

 {
     
sum+=a[i];
 
}

 
   write(p9[1],sum,strlen(sum)+1) ;


    close(p[1]);

   
     exit(0);
  
 
 }


//}

else

{
    
int cpid10=fork();
 
 if(cpid10==0 )
   

 {
     
 
for(int i=900;i<1000;i++)

 {

     sum+=a[i];

 }
 
   
write(p10[1],sum,strlen(sum)+1) ;

    
close(p10[1]);

   
     exit(0);
  

  }


//}

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);


wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

read(p1[0],sum,100);

read(p2[0],sum, 200);

read(p3[0],sum, 300);

read(p4[0],sum, 400);

read(p5[0],sum, 500);

read(p6[0],sum, 600);

read(p7[0],sum, 700);

read(p8[0],sum, 800);

read(p9[0],sum, 900);

read(p10[0],sum, 1000);

printf("sum=%d",sum);

close(p1[0]);

close(p2[0]);

close(p3[0]);

close(p4[0]);

close(p5[0]);

close(p6[0]);

close(p7[0]);

close(p8[0]);

close(p9[0]);

close(p10[0]);

}

}

}

}

}

}

}

}

}

}


 
}