#include<stdio.h>
int main()
{
	char ch;
	do
  {
	int pizza=250,burger=100,manchurian=130,dosa=120,sandwich=80,quantity,amount=0;
	static int totalamount=0;
	
    printf("\t\t\t\t***********************************************\n");
    printf("\t\t\t\t\t\t    MENU\n");
    printf("\t\t\t\t***********************************************\n");
    printf("\t\t\t\t\t1.pizza          price=250rs/pcs\n");
    printf("\t\t\t\t\t2.burger         price=100rs/pcs\n");
    printf("\t\t\t\t\t3.manchurian     price=130rs/pcs\n");
    printf("\t\t\t\t\t4.dosa           price=120rs/pcs\n");
    printf("\t\t\t\t\t5.sandwich       price=80rs/pcs\n\n");
    
    int choice;
    printf("\t\t\t\t\tplease enter your choice...  :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:printf("\t\t\t\t\tyou have selected pizza.\n\n");
    	       printf("\t\t\t\t\tenter the quantity : ");
	           scanf("%d",&quantity);
	           amount=pizza*quantity;
	    break;
    	
    	case 2:printf("\t\t\t\t\tyou have selected burger.\n\n");
               printf("\t\t\t\t\tenter the quantity : ");
	           scanf("%d",&quantity);
	           amount=burger*quantity;
	    break;
    	
    	case 3:printf("\t\t\t\t\tyou have selected manchurian.\n\n");
    	       printf("\t\t\t\t\tenter the quantity : ");
	           scanf("%d",&quantity);
	           amount=manchurian*quantity;
	    break;
    	
    	case 4:printf("\t\t\t\t\tyou have selected dosa.\n\n");
    		   printf("\t\t\t\t\tenter the quantity : ");
			   scanf("%d",&quantity);
	           amount=dosa*quantity;
        break;
    	
    	case 5:printf("\t\t\t\t\tyou have selected sandwich.\n\n");
    		   printf("\t\t\t\t\tenter the quantity : ");
			   scanf("%d",&quantity);
			   amount=sandwich*quantity;
    	break;
    	
    	default:printf("\t\t\t\t\tnot available in menu...");
	}
	printf("\n\t\t\t\t\tamount:%d",amount);
	
	printf("\n\t\t\t\t***********************************************\n");
	totalamount=totalamount+amount;
    printf("\t\t\t\t\tTotal Amount : %d",totalamount); 
    
	printf("\n\n\t\t\t\t\tDo you want place more orders ? (y&n)");
	ch=getche();
    printf("\n\n");
  }
  while(ch=='y');
}