#include<stdio.h>
#include<stdlib.h>

		float price,t[50],gt[10];
		int q[30],x,r[30],f,a;
		char name[25];
		char adress[50];
		long long int num; 
		int i=50;
		int pass;
		int j=0;
 
int main()
{
	FILE *gb;
	system("COLOR 0e");
	heading();
	printf("\n Enter your name\n");
	scanf("%s",name);
	printf("\n Enter your  mobile number\n");
	scanf("%lld",&num);
	printf("\n Enter your adress (village name):\n");
	scanf("%s",adress);
    items();
	gb=fopen("w.txt","a");
	
		if(gb==NULL)
		
		{
			printf("\n we couldnot find that file");
		}
		{
			 fprintf(gb,"\n\t\t\t###########################################################################");
   			 fprintf(gb,"\n\t\t\t############                                                   ############");
   			 fprintf(gb,"\n\t\t\t############      GROCERRY BILL PROJECT IN C                   ############");
    		 fprintf(gb,"\n\t\t\t############                                                   ############");
  	 		 fprintf(gb,"\n\t\t\t###########################################################################");
 		     fprintf(gb,"\n\n\n");
 		     fprintf(gb,"\n\t\t\t----------------------------------------------------------------------------");
             fprintf(gb,"\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
  			  fprintf(gb,"\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   			  fprintf(gb,"\n\t\t\t        =                 WELCOME                   =");
   		      fprintf(gb,"\n\t\t\t        =                   TO                      =");
  			  fprintf(gb,"\n\t\t\t        =                  MORE                     =");
 		      fprintf(gb,"\n\t\t\t        =               SUPER MARKET                =");
    		  fprintf(gb,"\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   		      fprintf(gb,"\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
   			  fprintf(gb,"\n\t\t\t----------------------------------------------------------------------------");
			fprintf(gb,"\nDate:%s",__DATE__);
  		    fprintf(gb,"\nTIME:%s",__TIME__);
			fprintf(gb,"\n Name: %s",name);
			fprintf(gb,"\n Mobile number: %lld",num);
			fprintf(gb,"\n Adress (village name): %s",adress);
			fprintf(gb,"\n The total number of items is-----%d",q[26]);
			fprintf(gb,"\n The sub total  is-------------------------%2f",t[26]);
			fprintf(gb,"\n the G.S.T is------------------------------%2f",gt[1]);
			fprintf(gb,"\n The C.G.S.T is----------------------------%2f",gt[2]);
			fprintf(gb,"\n The S.G.S.T is----------------------------%2f",gt[3]);
			fprintf(gb,"\n The Total including of all Taxes is.----..%2f",gt[5]);
			fprintf(gb,"\n You have saved on this purchase-----------%2f",gt[4]);
			fprintf(gb,"\n *********Thank You For Visiting visit again***************");
			fprintf(gb,"\n If You Have Any Quries call 1800-599-555.\n");
			for(i=0;i<50;i++)
			{
				fprintf(gb,"__");
			}
			fclose(gb);
			
}
}
int new();
int new()
{
	printf("\n 1-----> new order 2----exit");
	scanf("%d",&r[26]);
	if(r[26]==1)
	{
		system("cls");
		main();
	}
	else
	{
		system("cls");
		exit(0);
	}
}

		int debitcard();
		int debitcard()
		{
			printf("\n You have paid through debit card/creditcard");
			t[26]=t[1]+t[2]+t[3]+t[4]+t[5]+t[6]+t[7]+t[8]+t[9]+t[10]+t[11]+t[12]+t[13]+t[14]+t[15]+t[16]+t[17]+t[18]+t[19]+t[20]+t[21]+t[22]+t[23]+t[24]+t[25];
			gt[1]=t[26]*0.18;
			gt[2]=t[26]*0.09;
			gt[3]=t[26]*0.09;
			t[27]=gt[1]+t[26];
			gt[4]=t[27]*0.015;
			gt[5]=t[27]-gt[4];
			q[26]=q[1]+q[2]+q[3]+q[4]+q[5]+q[6]+q[7]+q[8]+q[9]+q[10]+q[11]+q[12]+q[13]+q[14]+q[14]+q[15]+q[16]+q[17]+q[18]+q[19]+q[20]+q[21]+q[22]+q[23]+q[24]+q[25];
			printf("\n The total number of items is----%d",q[26]);
			printf("\n The sub total  is -------------%2f",t[26]);
			printf("\n the G.S.T is-------------------%2f",gt[1]);
			printf("\n The C.G.S.T is-----------------%2f",gt[2]);
			printf("\n The S.G.S.T is-----------------%2f",gt[3]);
			printf("\n The total including of all taxes is...%f",gt[5]);
			printf("\n You have saved %f on this purchase",gt[4]);
			printf("\n *********Thank You For Visiting visit again***************");
			printf("\n If You Have Any Quries call 1800-599-555.");
			printf("\n\n");
			printf("\n Do you want to check previous bill (1-yes 2-no)");
			scanf("%d",&r[27]);
			if(r[27]==1)
			{
				printf("\n Enter the password to view previous bill:\n");
				for(j=0;j<6;j++)
				{
				scanf("%d",&pass);
				{
				if(pass==123456)
				{
				printf("\n Access granted!\n");
				previous();
				}
				else
				{
					printf("\nIncorrect password, please try again.");
                     printf("\nYou have %d trys left ",5-j-1);
                     printf("\n\nEnter password >> ");
                 }
			}
			}
			}
			else
			{
			new();
			}
		}
		
		int cashpayment();
		int cashpayment()
		{
			printf("\n You have paid through cash");
			t[26]=t[1]+t[2]+t[3]+t[4]+t[5]+t[6]+t[7]+t[8]+t[9]+t[10]+t[11]+t[12]+t[13]+t[14]+t[15]+t[16]+t[17]+t[18]+t[19]+t[20]+t[21]+t[22]+t[23]+t[24]+t[25];
			gt[1]=t[26]*0.15;
			gt[2]=t[26]*0.08;
			gt[3]=t[26]*0.07;
			t[27]=gt[1]+t[26];
			gt[4]=t[27]*0.015;
			gt[5]=t[27]-gt[4];
			q[26]=q[1]+q[2]+q[3]+q[4]+q[5]+q[6]+q[7]+q[8]+q[9]+q[10]+q[11]+q[12]+q[13]+q[14]+q[14]+q[15]+q[16]+q[17]+q[18]+q[19]+q[20]+q[21]+q[22]+q[23]+q[24]+q[25];
			printf("\n The total number of items is----%d",q[26]);
			printf("\n The sub total  is -------------%2f",t[26]);
			printf("\n the G.S.T is-------------------%2f",gt[1]);
			printf("\n The C.G.S.T is-----------------%2f",gt[2]);
			printf("\n The S.G.S.T is-----------------%2f",gt[3]);
			printf("\n The total including of all taxes is...%f",gt[5]);
			printf("\n You have saved %f on this purchase",gt[4]);
			printf("\n *********Thank You For Visiting visit again***************");
			printf("\n If You Have Any Quries call 1800-599-555.");
			printf("\n\n");
			printf("\n Do you want to check previous bill (1-yes 2-no)");
			scanf("%d",&r[27]);
			if(r[27]==1)
			{
				printf("\n Enter the password to view previous bill:\n");
				for(j=0;j<6;j++)
				{
				scanf("%d",&pass);
				{
				if(pass==123456)
				{
				printf("\n Access granted!\n");
				previous();
				}
				else
				{
					printf("\nIncorrect password, please try again.");
                     printf("\nYou have %d trys left ",5-j-1);
                     printf("\n\nEnter password >> ");
                 }
			}
			}
			}
			else
			{
			new();
			}
		}
		
		int heading();
		int heading()
		{
			
			printf("\t\t\t###########################################################################");
   			 printf("\n\t\t\t############                                                   ############");
   			 printf("\n\t\t\t############      GROCERRY BILL PROJECT IN C                   ############");
    		 printf("\n\t\t\t############                                                   ############");
  	 		 printf("\n\t\t\t###########################################################################");
 		     printf("\n\n\n\n");
 		     printf("\n\t\t\t----------------------------------------------------------------------------");
             printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
  			  printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   			  printf("\n\t\t\t        =                 WELCOME                   =");
   		      printf("\n\t\t\t        =                   TO                      =");
  			  printf("\n\t\t\t        =                  MORE                     =");
 		      printf("\n\t\t\t        =               SUPER MARKET                =");
    		  printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
   		      printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
   			  printf("\n\t\t\t----------------------------------------------------------------------------");
		}
		int previous();
		int previous()
		{
			FILE *pre;
			char z;
			pre=fopen("w.txt","r");
			while((z=fgetc(pre))!=-1)//-1 is the value of EOF//
				
				{
				printf("%c",z);
				}
				if(getch())
				system("cls");
				printf(" Enter 1 to go main menu\n");
				main();
	}
				
		
		
		int total();
		int total()
		{
		printf("\n Mode of payment \n1---->credit card/Debit card. \t2---->cash payment.");
		scanf("%d",&f);
		if(f==1)
		{
				debitcard();
		}
			
		else if(f==2)
		{
			cashpayment();
			
		}
		else 
		{
			system("COLOR 4");
			printf("\n Invalid  error");
		}
		}
		

	
	

	int items();
	int items()
	{	
	system("cls");
	int x;
    printf("Item Code----Description-----------------------------Size--------------------------------------------Price\n");
    printf("[1]---------Thums-Up Soft Drink----------------------2.25litres--------------------------------------83.50\n");
    printf("[2]---------Dark Chocolate Peanut Butter-------------1kg--------------------------------------------325.00\n");
    printf("[3]---------Presto! 2 Ply Kitchen Tissue-6 Rolls-----1box-------------------------------------------380.00\n");
    printf("[4]---------Pillsbury Signature Chocolate Cake Mix---1kg--------------------------------------------180.00\n");
    printf("[5]---------Kissan Squeezo Fresh Tomato Ketchup------900ml------------------------------------------140.00\n");
    printf("[6]---------Cadbury Dairy Milk Chocolate Bars--------126g--------------------------------------------65.00\n");
    printf("[7]---------Life Oats Chips--------------------------1kg---------------------------------------------70.00\n");
    printf("[8]---------Cadbury OREO Cracker Biscuit-------------126g-------------------------------------------100.00\n");
    printf("[9]---------Nescafe Sunrise Instant Coffee-----------200g-------------------------------------------130.00\n");
    printf("[10]--------3 Roses Tea Box--------------------------250g-------------------------------------------150.00\n");
    printf("[11]--------Freedom Refined Sunflower Oil Can--------5L---------------------------------------------790.00\n");
    printf("[12]--------Parachute Coconut Hair Oil---------------400ml------------------------------------------140.00\n");
    printf("[13]--------AASHIRVAAD Atta with Multigrains---------10kg-------------------------------------------550.00\n");
    printf("[14]--------Vedaka Sugar-----------------------------5kg--------------------------------------------240.00\n");
    printf("[15]--------Tata Salt--------------------------------1kg---------------------------------------------18.00\n");
    printf("[16]--------Catch Black Pepper-----------------------100g--------------------------------------------65.00\n");
    printf("[17]--------Santoor Sandalwood Soap(pack of 8)-------125g-------------------------------------------240.00\n");
    printf("[18]--------Surf Excel Detergent Bar-----------------800g-------------------------------------------200.00\n");
    printf("[19]--------Tata Sampann Unpolished Toor Dal---------1kg--------------------------------------------150.00\n");
    printf("[20]--------Tata Sampann Unpolished Urad Dal---------1kg---------------------------------------------90.00\n");
    printf("[21]--------Roasted Nuts with Wayanad Pepper---------200g--------------------------------------------70.00\n");
    printf("[22]--------Tata Salt baking Soda--------------------100g--------------------------------------------13.00\n");
    printf("[23]--------Organic Brown Chana----------------------500g--------------------------------------------25.00\n");
    printf("[24]--------Sona Masoori Rice------------------------5 kg-------------------------------------------180.00\n");
	printf("[25]--------nuts-------------------------------------200g-------------------------------------------180.00\n");
	printf("\n please select the option from the list:\n");
    scanf("%d",&x);
    switch(x)
    {
    	
	case 1:
  		{
		system("cls");  	
		printf("You have selected Thums-Up Soft Drink (2.25L) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[1]);
    	price=83.50;
   		t[1]=price*q[1];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[1]);
		if(r[1]==1)
		{
			items();
		}
		if(r[1]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[1]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 2:
    	{  
		system("cls");  	
		printf("You have selected Dark Chocolate Peanut Butter (1kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[2]);
    	price=325.00;
    	t[2]=price*q[2];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[2]);
		if(r[2]==1)
		{
			items();
		}
		if(r[2]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[2]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 3:
    	{  
		system("cls");  	
		printf("You have selected Presto! 2 Ply Kitchen Tissue-6 Rolls (1box) \n");
    	printf("\n Enter the quantity:\n");
   		scanf("%d",&q[3]);
   		price=380.00;
   		t[3]=price*q[3];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[3]);
		if(r[3]==1)
		{
			items();
		}
		if(r[3]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[3]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 4:
    	{  
		system("cls");  	
		printf("You have selected Pillsbury Signature Chocolate Cake Mix (1kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[4]);
    	price=180.00;
    	t[4]=price*q[4];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[4]);
		if(r[4]==1)
		{
			items();
		}
		if(r[4]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[4]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 5:
    	{  
		system("cls");  		
		printf("You have selected Kissan Squeezo Fresh Tomato Ketchup (900ml) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[5]);
    	price=140.00;
    	t[5]=price*q[5];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[5]);
		if(r[5]==1)
		{
			items();
		}
		if(r[5]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[5]>>2)
		{
			printf("\n Invalid number");
		}
		}

		case 6:
   		{  
		system("cls");  		
		printf("You have selected Cadbury Dairy Milk Chocolate Bars (126g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[6]);
    	price=65.00;
    	t[6]=price*q[6];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[6]);
		if(r[6]==1)
		{
			items();
		}
		if(r[6]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[6]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 7:
   		{  
		system("cls");  	
		printf("You have selected Life Oats Chips (1kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[7]);
    	price=210.00;
    	t[7]=price*q[7];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[7]);
		if(r[7]==1)
		{
			items();
		}
		if(r[7]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[7]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 8:
    	{  
		system("cls");  		
		printf("You have selected Cadbury OREO Cracker Biscuit (126g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[8]);
   		price=100.00;
   		t[8]=price*q[8];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[8]);
		if(r[8]==1)
		{
			items();
		}
		if(r[8]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[8]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 9:
    	{  		
		printf("You have selected Nescafe Sunrise Instant Coffee (200g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[9]);
    	price=130.00;
    	t[9]=price*q[9];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[9]);
		if(r[9]==1)
		{
			items();
		}
		if(r[9]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[9]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 10:
    	{  
		system("cls");  		
		printf("You have selected 3 Roses Tea Box (250g) \n");
    	printf("\n Enter the quantity:\n");
   		scanf("%d",&q[10]);
    	price=150.00;
   		t[10]=price*q[10];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[10]);
		if(r[10]==1)
		{
			items();
		}
		if(r[10]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[10]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 11:
    	{  
		system("cls");  	
		printf("You have selected Freedom Refined Sunflower Oil Can (5L) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[11]);
    	price=790.00;
    	t[11]=price*q[11];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[11]);
		if(r[11]==1)
		{
			items();
		}
		if(r[11]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[11]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 12:
    	{  
		system("cls");  	
		printf("You have selected Parachute Coconut Hair Oil (400ml) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[12]);
    	price=140.00;
    	t[12]=price*q[12];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[12]);
		if(r[12]==1)
		{
			items();
		}
		if(r[12]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[12]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 13:
    	{  
		system("cls");  	
		printf("You have selected AASHIRVAAD Atta with Multigrains (10kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[13]);
    	price=550.00;
    	t[13]=price*q[13];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[13]);
		if(r[13]==1)
		{
			items();
		}
		if(r[13]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[13]>>2)
		{
			printf("\n Invalid number");
		}
		}	
	case 14:
		{ 
		system("cls");  	
		printf("You have selected Vedaka Sugar (240) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[14]);
    	price=240.00;
    	t[14]=price*q[14];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[14]);
		if(r[14]==1)
		{
			items();
		}
		if(r[14]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[14]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 15:
    	{  
		system("cls");  	
		printf("You have selected Tata Salt\n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[15]);
    	price=18.00;
    	t[15]=price*q[15];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[15]);
		if(r[15]==1)
		{
			items();
		}
		if(r[15]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[15]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 16:
    	{  
		system("cls");  		
		printf("You have selected Catch Black Pepper (100g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[16]);
    	price=65.00;
    	t[16]=price*q[16];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[16]);
		if(r[16]==1)
		{
			items();
		}
		if(r[16]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[16]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 17:
   		{  
		system("cls");  	
		printf("You have selected Santoor Sandalwood Soap (pack of 8) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[17]);
    	price=240.00;
    	t[17]=price*q[17];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[17]);
		
		if(r[17]==1)
		{
			items();
		}
		if(r[17]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[17]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 18:
    	{  
		system("cls");  		
		printf("You have selected Surf Excel Detergent Bar (800g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[18]);
    	price=200.00;
    	t[18]=price*q[18];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[18]);
		if(r[18]==1)
		{
			items();
		}
		if(r[18]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[18]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 19:
    	{  
		system("cls");  	
		printf("You have selected  Tata Sampann Unpolished Toor Dal (1kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[19]);
    	price=150.00;
    	t[19]=price*q[19];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[19]);
		if(r[19]==1)
		{
			items();
		}
		if(r[19]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[19]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 20:
    	{  
		system("cls");  	
		printf("You have selected Tata Sampann Unpolished Urad Dal (1kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[20]);
    	price=90.00;
    	t[20]=price*q[20];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[20]);
		if(r[20]==1)
		{
			items();
		}
		if(r[20]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[20]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 21:
    	{  
		system("cls");  	
		printf("You have selected Roasted Nuts with Wayanad Pepper (200g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[21]);
    	price=70.00;
    	t[21]=price*q[21];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[21]);
		if(r[21]==1)
		{
			items();
		}
		if(r[21]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[21]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 22:
    	{  
		system("cls");  		
		printf("You have selected Tata Salt baking Soda (100g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[22]);
    	price=13.00;
    	t[22]=price*q[22];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[22]);
		if(r[22]==1)
		{
			items();
		}
		if(r[22]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[22]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 23:
    	{  
		system("cls");  		
		printf("You have selected Organic Brown Chana (500g) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[23]);
    	price=25.00;
    	t[23]=price*q[23];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[23]);
		if(r[23]==1)
		{
			items();
		}
		if(r[23]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[23]>>2)
		{
			printf("\n Invalid number");
		}
		}
	case 24:
    	{  
		system("cls");  	
		printf("You have selected Sona Masoori Rice (5kg) \n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[24]);
    	price=180.00;
    	t[24]=price*q[24];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[24]);
		if(r[24]==1)
		{
			items();
		}
		if(r[24]==2)
		{
			total();
		}
		{
			break;
		}
		if(r[24]>>2)
		{
			printf("\n Invalid number");
		}
		}
		case 25:
    	{  
		system("cls");		
		printf("You have selected nuts\n");
    	printf("\n Enter the quantity:\n");
    	scanf("%d",&q[25]);
    	price=180.00;
    	t[25]=price*q[25];
		printf("\n Do you want add on(1---->yes 2---->no)");
		scanf("%d",&r[25]);
		if(r[25]==1)
		{
			items();
		}
		if(r[25]==2)
		{
			total();
			
		}
		{
			break;
		}
		if(r[25]>>2)
		{
			printf("\n Invalid number");
		}
		}
		default:
			{
				printf("\n Enter the numbers from 1-25");
			}
	}
}

