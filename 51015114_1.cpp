#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int ecs(char ec)
{	
	if (ec=='U')
	{
		return 1;
		
	}
	else
	{
		return 2;
	}
}
int main()
{	


	
	
	struct stuff
	{
		int id;
		char name;
		int price;
		int time;
		int salary;
		
		
	};

	
	struct stuff temp;
	struct stuff *list=(struct stuff *)malloc (10*sizeof(struct stuff));
	for(int i=0;i<10;i++)
	{	 printf("輸入id:") ;
		scanf("%d",&list[i].id);
		printf("輸入name:") ;
		scanf("%s",&list[i].name);
		printf("輸入price:") ;
		scanf("%d",&list[i].price);
		printf("輸入time:") ;
		scanf("%d",&list[i].time);		
		list[i].salary=list[i].price*list[i].time;
	}
	char ec;
	getchar();
	scanf("%c",&ec);	
	if(ecs(ec)==1)
	{
		for (int j=0;j<10;j++)
		{
			for(int z=0;z<j;z++)
			{
				if (list[z].salary > list[j].salary) 
				{
					temp.salary =list[z].salary;
       			list[z].salary = list[j].salary;
        		list[j].salary = temp.salary;
        		
				temp.id =list[z].id;
       			list[z].id = list[j].id;
        		list[j].id = temp.id;
        		
        		temp.name =list[z].name;
       			list[z].name = list[j].name;
        		list[j].name = temp.name;
        		
        		temp.price =list[z].price;
       			list[z].price = list[j].price;
        		list[j].price = temp.price;
        		
        		temp.time =list[z].time;
       			list[z].time = list[j].time;
        		list[j].time = temp.time;
				}
				
			}
		}
	}
	else
		{
			for (int j=0;j<10;j++)
			{
				for(int z=0;z<j;z++)
				{
					if (list[z].salary < list[j].salary) 
					{
						temp.salary =list[z].salary;
		       			list[z].salary = list[j].salary;
		        		list[j].salary = temp.salary;
		        		
						temp.id =list[z].id;
		       			list[z].id = list[j].id;
		        		list[j].id = temp.id;
		        		
		        		temp.name =list[z].name;
		       			list[z].name = list[j].name;
		        		list[j].name = temp.name;
		        		
		        		temp.price =list[z].price;
		       			list[z].price = list[j].price;
		        		list[j].price = temp.price;
		        		
		        		temp.time =list[z].time;
		       			list[z].time = list[j].time;
		        		list[j].time = temp.time;
					}
				}
			}
		}
	
		for(int c=0;c<10;c++)
		{
			printf("id=%d  name=%c  x=%d\n",list[c].id,list[c].name,list[c].salary);
		 } 
	
	
	return 0; 
  }  
