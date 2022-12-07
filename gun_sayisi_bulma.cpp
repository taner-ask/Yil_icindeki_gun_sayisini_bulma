#include<stdio.h>
int main(){
	
	int ay,gun;
	yeniden:
	printf("ay giriniz: ");
	scanf("%d",&ay);
	printf("gun giriniz: ");
	scanf("%d",&gun);
	
	
	
	switch(ay){
		case 1: 
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			printf("%d. gun",gun);
			}
			
			
			break;
			
		case 2:
			if(gun<1 || gun>28)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31;
			printf("%d. gun",gun);
			}
			break;
			
		case 3:
			if(gun<1 || gun>30)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28;
			printf("%d. gun",gun);
			}
			break;
			
		case 4:
			if(gun<1 || gun>30)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{			
			gun += 31+28+31;
			printf("%d. gun",gun);
			}
			break;
			
		case 5:
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30;
			printf("%d. gun",gun);
			}
			break;
			
		case 6:
			if(gun<1 || gun>30)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31;
			printf("%d. gun",gun);
			}
			break;	
		
		case 7:
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31;
			printf("%d. gun",gun);
			}
			break;
			
		case 8:
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31+30;
			printf("%d. gun",gun);
			}
			break;
			
		case 9:
			if(gun<1 || gun>30)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31+30+31;
			printf("%d. gun",gun);
			}
			break;
			
		case 10:
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31+30+31+30;
			printf("%d. gun",gun);
			}
			break;
			
			case 11:
				if(gun<1 || gun>30)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31+30+31+30+31;
			printf("%d. gun",gun);
			}
			break;
			
		case 12:
			if(gun<1 || gun>31)
				{
				printf("GECERSIZ GUN\n\n");
				goto yeniden;
				}
			else
			{
			gun += 31+28+31+30+31+31+30+31+30+31+30;
			printf("%d. gun",gun);
			}
			break;
		
		default:
			printf("gecersiz ay\n");
			goto yeniden;	
	}
	
	
	return 0;
}
