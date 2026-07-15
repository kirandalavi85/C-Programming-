#include<stdio.h>

int Addition(int iNo)
{
	int iDigit = 0;
	int Add = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while( iNo > 0 )
	{
		iDigit = iNo % 10;

		Add = Add + iDigit;

		iNo = iNo / 10;
	}

	return Add;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);

	iRet = Addition(iValue);

	printf(" \nThe Addition of %d is : %d ",iValue,iRet );

	return 0;
}