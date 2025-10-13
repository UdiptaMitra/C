/*	WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
a.	Withdrawal amount must be a multiple of 100.
b.	Withdrawal must not exceed balance.
c.	Maintain a minimum balance of rs. 500 after withdrawal.
Output: Transaction success or failure with reason.
*/
#include<stdio.h>
int main()
{
	int acc_balance, withdraw_amt;
	printf("\nInput account balance");
	scanf("%d",&acc_balance);
	printf("\nInput withdraw amount");
	scanf("%d",&withdraw_amt);
	if((withdraw_amt%100==0)&&(withdraw_amt<acc_balance)&&(acc_balance-withdraw_amt>=500))
	{
	    printf("\nTransaction successful");
	}
	else 
	{
	    printf("\nTransaction unsuccessful");
	}
	if(withdraw_amt%100!=0)
	{
	    printf("\nWithdrawal amount is not a multiple of 100, transaction failed");
	}
	if(withdraw_amt>acc_balance)
	{
	    printf("\nWithdrawal amount exceeded balance, transaction failed");
	}
	if(acc_balance-withdraw_amt<500)
	{
	    printf("\nBalance less than Rs. 500, transaction failed");
	}
	return 0;
}
