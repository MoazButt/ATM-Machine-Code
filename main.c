#include<stdio.h>
#include<stdlib.h>
void codeverf(int code);
void checkbalance(int amount1);
void pinchange(int new_code);
void withdrawamount(int cash);
void cashdeposit(int amount2);
int amount=100000;
int main()
{
int code,opt,amount,balance;
printf("\n\n\t\t\t Assalam u Alaikum SIR!");
printf("\n\n\t\t\t WELCOME TO SWISS BANK ");
printf("\n\n\t\tPlease Enter you 4-Digit Pin to Proceed : ");
codeverf(code);
printf("\n\nPlease Select One of the Following Option From Menu: ");
printf("\n\n1) Balance Enquiry.\n\n2) Cash Withdrawal.\n\n3) Cash Deposit.\n\n4) Change PIN Number.\n\n5)Exit ");
printf("\n\nYour Option: ");
scanf("%d",&opt);
if(opt==1)
{
checkbalance(balance);
}
if(opt==2)
{
withdrawamount(amount);
}
if(opt==3)
{
cashdeposit(amount);
}
if(opt==4)
{
pinchange(code);
}
if(opt==5)
{
printf("\n\nPlease Take Your Card ");
printf("\n\n\tALLAH HAFIZ!");
exit(1);
}
printf("\n\nRemember To Collect Your Card\n\nPlease Take Care ALLAH HAFIZ ");
getchar();
getchar();
return 0;
}
void cashdeposit(int amount2)
{
printf("\n\nPlease Enter Amount You Want To Deposit: ");
scanf("%d",&amount2);
printf("\n\nRS:%d is Deposited Successfully in Your Account",amount2);
amount=amount+amount2;
printf("\n\nAfter Cash Deposit your Current Balance is RS: %d ",amount);
}
void withdrawamount(int cash)
{
int i;
printf("\n\nPlease Enter Amount You Want To Withdraw : ");
for(i=0;i<3;i++)
{
scanf("%d",&cash);
if(cash%500==0&&cash<=10000)
{
amount=amount-cash;
printf("\n\nPlease Take Your Amount RS:%d",cash);
printf("\n\nYour Remaining Balance is RS:%d",amount);
break;
}
if (cash>10000)
{
printf("\n\nYou Can't Withdraw Amount Greater Than RS/-10000");
printf("\n\nPlease Re-enter Your Amount You Want : ");
}
else if(cash%500!=0)
{
printf("\n\nYou Can Only With Draw Amount That is Multiple of 500");
printf("\n\nPlease Re-Enter Your Amount : ");
}
}
}
void checkbalance(int amount1)
{
printf("\n\nYour Current Balance is RS : %d",amount);
}
void codeverf(int code)
{
int i;
for(i=1;i<=4;i++)
{
scanf("%d",&code);
if(code==1001)
{
    printf("\n\nYour Pin is Verified");
break;
}
if(i==4 && code!=1001)
{
printf("\n\nYour Card is Captured by the machine ");
printf("\n\nPlease Contact Bank Manager for further details");
printf("\n\n\t\tTHANK YOU!");
exit(4);
}
else if(code!=1001)
{
printf("\t\nThe Pin _Cod is Incorrect ");
printf("\n\nPlease Re-Enter Your Pin : ");
}
}
}
void pinchange(int new_code)
{
int i,pin_code=1001,new_code1,new_code2;
printf("\n\nPlease Enter Your New Four Digit Pin : ");
for(i=0;i<2;i++)
{
scanf("%d",&new_code1);
printf("\n\nPlease Re-enter Your New Four Digit Pin : ");
scanf("%d",&new_code2);
if(new_code1==new_code2)
{
printf("\n\nYour Pin is Updated Successfully");
break;
}
else
{
printf("\n\nYour New Pin Does Not Match With Each Other ");
printf("\n\nPlease Enter Your New Pin Again : ");
}
}
}
