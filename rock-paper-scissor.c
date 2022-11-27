#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("***WELCOME TO ROCK PAPER SCISSORS**\n\n\n");
  int num=0,n,a;
  char name[20];
  //user entries
  printf("enter your name------> ");
  gets(name);
  printf("\n");
  printf("enter the number of sets\n ");
  printf("(please enter odd no.of sets)\n-------->");
  scanf("%d",&n);
  int p=n;
  printf("\n\n");
  while(n%2==0)
  {
    printf("/n (please enter odd no.of sets)\n-------->");
    scanf("%d",&n);
  }
 
   int b=0,v=0;
   
    for(int i=0;i<n;i++)
  {
    srand(time(NULL));
    num=rand()%3;
    printf("enter your option\n");
    printf("0=rock\n1=paper\n2=scissor\n------->");
    scanf("%d",&a);
    if(a<3)
    {
    
    num=rand()%3;
    
    //computer output
    if(num==0)
   {
     printf("computer- rock\n");
   }
   else if(num==1)
   {
     printf("computer- paper \n");
   }
   else 
   {
     printf("computer- scissor\n ");
   }
   
   
   
   //your output
if(a==0)
   {
     printf("you    - rock\n\n");
   }
   else if(a==1)
   {
     printf("you    - paper \n\n");
   }
   else 
   {
     printf("you    - scissor\n\n ");
   }
   

   
   //game result
  if(num==0&&a==1)
  {
    
    printf("\t\t you won😀\n");  
    b++;
    v++;
  }
  else if(num==0&&a==2)
  {
   
    printf("\t\t you lost😔\n");
    v++;
  }
  else if(num==1&&a==0)
  {
    
    printf("\t\t you lost😔\n");
    v++;
  }
  else if(num==1&&a==2)
  {
   
    printf("\t\t you won😀\n");
    v++;
    b++;
  }
  else if(num==2&&a==0)
  {
   
    printf("\t\t you won😀\n");
    v++;
    b++;
  }
   if(num==2&&a==1)
  {
    
    printf("\t\t you lost😔\n");  
    v++;
  }
  else if (num==a)
  {
    printf("\nits draw😂\n");
  }
  
  
 
 
 else
{
 printf("🤦🤦🤦\nenetr valid input b/w 0 to 2\n");
 n++;
}

printf("*****************************************************\n");
 
 }
 printf("hey");
 puts(name);
 
 // series result
 if(b>(v/2))
 {
   printf("Its celebration time \n🎉🎉🎉\n");
   printf("you won %d times out of %d times",b,p);
   printf("\nyou are champion\n\n\n");
 }
 else if(b==v)
 {
   printf("its tie ,u played well");
 }
 else
{
  printf("\nu lost the match😔😔😔\n"); 
 printf("you only won %d times out of %d times",b,p);
  printf("\nbetter luck next time\n\n");
 
}
}
printf("\n\n###########################################################################################################################################################################################");
  return 0;
}    