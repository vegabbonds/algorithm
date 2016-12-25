#include <stdio.h>

void main()
{
	int i, j;
	int temp;
	int data[100];
	int count;
	int plus;
	int trigger;
	while(1)
	{
		scanf("%d", &temp);
		plus = 0;
		count = 0;
		trigger = 0;
		if(temp == 0)
			break;
		while(temp>10)
		{
			data[count] = temp%10;
			//printf("check : %d\n", data[count]);
			temp = temp/10;
			count++;			
		}
		if(temp == 10)
		{
			data[count] = 0;
			count++;
			data[count] = 1;
		}
		else
		{
			data[count] = temp;
		}
		

		if(data[0] != 0)
			trigger = 1;

		for(i=0; i<count+1; i++)
		{
			if(data[i] == 0 && trigger == 0)
				continue;
			else if(data[i] != 0 && trigger == 0)
			{
				trigger = 1;
				printf("%d", data[i]);
				plus = plus + data[i];
			}
			else
			{
				printf("%d", data[i]);
				plus = plus + data[i];
			}
		}
		printf(" %d\n", plus);
	}

}