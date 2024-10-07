#include <stdio.h>
#include <math.h>
#include<string.h>
#include<stdlib.h>

int Binary_to_Decimal( int);
int Binary_to_Octal( int);
int Binary_to_Hexadecimal( int);
int Decimal_to_Binary( int);
int Decimal_to_Octal( int);
int Decimal_to_Hexadecimal( int);
int Octal_to_Binary( int);
int Octal_to_Decimal( int);
int Octal_to_Hexadecimal( int);
void Hexadecimal_to_Binary(char []);
void Hexadecimal_to_Decimal(char []);
void Hexadecimal_to_Octal(char []);

int main()
{
    int choice,numbers=1,checking;
    int b,o,d;
    int bin,dec,oct,hex;
    char h[100], q;
    int spacebar, x,y;
	opt1:
    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while(numbers!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

       	printf("1.BINARY CONVERSION\n");
		printf("2.DECIMAL CONVERSION\n");
		printf("3.OCTAL CONVERSION\n");
		printf("4.HEXA-DECIMAL CONVERSION\n");
		printf("5.EXIT\n");
		printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);
        system("CLS");
        switch(choice)
        {
            case 1:
            	l1:
            	printf("     >>> BINARY CONVERSION <<<     \n\n");
				printf("--------------------------------------\n");
	        	printf("|Choose The Options From Below|\n");
		    	printf("1.BINARY TO DECIMAL\n");
		    	printf("2.BINARY TO OCTAL\n");
		    	printf("3.BINARY TO HEXADECIMAL\n");
		    	scanf("%d",&bin);
		    	system("CLS");
		    	switch(bin)
		    	{
		    		case 1:
                		printf("\n***BINARY TO DECIMAL***\n");
                		D:
                		printf("\nEnter the Number in Binary form (0s & 1s): ");
                		scanf("%d",&b);

                		checking=b;

                		while(checking!=0)
                		{
                    		numbers=checking%10;
                    		if(numbers>1)
                    		{
                        		printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        		printf("***TRY AGAIN****\n");
                        		goto D;
                    		}
                    		else
                    		checking=checking/10;
                		}
						
		                Binary_to_Decimal(b); 
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'B' to return BINARY CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='B'|| q=='b')
	                	{
	 	               		system("cls");
		               		goto l1;	
                		} 
						break;

            		case 2:
                		printf("\n***BINARY TO OCTAL***\n");
                		E:
                		printf("\nEnter the Number in Binary form (0s & 1s): ");
                		scanf("%d",&b);
                		checking=b;
						while(checking!=0)
                		{
                    		numbers=checking%10;
                    		if(numbers>1)
                    		{
                        		printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        		printf("***TRY AGAIN****\n");
                        		goto E;
                    		}
                    		else
                    		checking=checking/10;
                		}

                		Binary_to_Octal(b);
						printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'B' to return BINARY CONVERSION:\n");
	               		scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='B'|| q=='b')
	                	{
	 	               		system("cls");
		               		goto l1;	
                		} 
						break;

            		case 3:
                		printf("\n***BINARY TO HEXA-DECIMAL***\n");
                		F:
                		printf("\nEnter the Number in Binary form (0s & 1s): ");
                		scanf("%d",&b);
                		checking=b;
                		while(checking!=0)
                		{
                    		numbers=checking%10;
                    		if(numbers>1)
                    		{
                        		printf("\n%d IS NOT BINARY NUMBER.\n",b);
                        		printf("***TRY AGAIN****\n");
                        		goto F;
                    		}
                    		else
                    		checking=checking/10;
                		}

                		Binary_to_Hexadecimal(b);
						printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'B' to return BINARY CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='B'|| q=='b')
	                	{
	 	               		system("cls");
		               		goto l1;	
                		} 
						break;	
				}
		    	
			case 2:
				l2:
				printf("        >>> DECIMAL CONVERSION <<<            \n\n");	
				printf("...............................\n");
    			printf("|Choose The Options From Below|\n"); 
    			printf("1.DECIMAL TO BINARY\n");
    			printf("2.DECIMAL TO OCTAL\n");
    			printf("3.DECIMAL TO HEXADECIMAL\n");
    			scanf("%d",&dec);
    			system("CLS");
    			switch(dec)
    			{
    				case 1:
                		printf("\n***DECIMAL TO BINARY***\n");
                		printf("\nEnter the Number in Decimal form (0 to 9): ");
                		scanf("%d",&d);
                		Decimal_to_Binary(d); 
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'D' to return DECIMAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='D'|| q=='d')
	                	{
	 	               		system("cls");
		               		goto l2;	
                		} 
						break;

            		case 2:
                		printf("\n***DECIMAL TO OCTAL***\n");
                		printf("\nEnter the Number in Decimal form (0 to 9): ");
                		scanf("%d",&d);
                		Decimal_to_Octal(d);
						printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'D' to return DECIMAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='D'|| q=='d')
	                	{
	 	               		system("cls");
		               		goto l2;	
                		}  
						break;

            		case 3:
                		printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                		printf("\nEnter the Number in Decimal form (0 to 9): ");
                		scanf("%d",&d);
                		Decimal_to_Hexadecimal(d); 
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'D' to return DECIMAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='D'|| q=='d')
	                	{
	 	               		system("cls");
		               		goto l2;	
                		} 
						break;

				}
		
			case 3:
				l3:
				printf("      >>> OCTAL CONVERSION <<<     \n\n");
				printf("...............................\n");
    			printf("|Choose The Options From Below|\n"); 
    			printf("1.OCTAL TO BINARY\n");
    			printf("2.OCTAL TO DECIMAL\n");
    			printf("3.OCTAL TO HEXADECIMAL\n");
    			scanf("%d",&oct);
    			system("CLS");
        		switch (oct)
        		{
        			case 1:
                	printf("\n***OCTAL TO BINARY***\n");
                	A:
                	printf("\nEnter the Number in Octal form (0 to 7): ");
                	scanf("%d",&o);
                	checking=o;
                	while(checking!=0)
                	{
                    	numbers=checking%10;
                    	if(numbers>7)
                    	{
                        	printf("\n%d IS NOT OCTAL NUMBER.\n",o);
                        	goto A;
                    	}
                    	else
                    	{
                    		checking=checking/10;
                    		x++;
                    	}
                	}
                	Octal_to_Binary(o); 
                	printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'T' to return OCTAL CONVERSION:\n");
	                scanf(" %c",&q);
	                if(q=='y'|| q=='Y')
	                {
	 	               system("cls");
		               goto opt1;	
                	}
					if(q=='t'|| q=='T')
	                {
	 	               system("cls");
		               goto l3;	
                	} 
					break;

            		case 2:
                		printf("\n***OCTAL TO DECIMAL***\n");
                		B:
                		printf("\nEnter the Number in Octal form (0 to 7): ");
                		scanf("%d",&o);
                		checking=o;
                		while(checking!=0)
                		{
                    		numbers=checking%10;
                    		if(numbers>7)
                    		{
                        		printf("\n%d IS NOT OCTAL NUMBER.\n",o);
                        		goto B;
                    		}
                    		else
                    		{
                    			checking=checking/10;
                    			x++;
                    		}
                		}
                		Octal_to_Decimal(o); 
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'T' to return OCTAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='t'|| q=='T')
	                	{
	 	               		system("cls");
		               		goto l3;	
                		} 
						break;

            		case 3:
                		printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                		C:
                		printf("\nEnter the Number in Octal form (0 to 7): ");
                		scanf("%d",&o);
                		checking=o;
                		while(checking!=0)
                		{
                    		numbers=checking%10;
                    		if(numbers>7)
                    		{
                        		printf("\n%d IS NOT OCTAL NUMBER.\n",o);
                        		goto C;
                    		}
                    		else
                    		{
                    			checking=checking/10;
                    			x++;
                    		}
                		}
                		Octal_to_Hexadecimal(o); 
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'T' to return OCTAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='T'|| q=='t')
	                	{
	 	               		system("cls");
		               		goto l3;	
                		} 
						break;
				}
            
			case 4:
				l4:
				printf("       HEXADECIMAL CONVERSION      \n\n");
				printf("...............................\n");
    			printf("|Choose The Options From Below|\n"); 
    			printf("1.HEXADECIMAL TO BINARY\n");
    			printf("2.HEXADECIMAL TO DECIMAL\n");
    			printf("3.HEXADECIMAL TO OCTAL\n");
    			scanf("%d",&hex);
    			system("CLS");
    			switch (hex)
    			{
    				case 1:
                	printf("\n***HEXA-DECIMAL TO BINARY***\n");
                	X:
                	printf("\nEnter the Number in Hexa-Decimal form: ");
                	scanf("%s",&h);
                	for(x=strlen(h)-1;x>=0;x--)
                	{
                    	if(h[x]>'f' && h[x]<='z' || h[x]>'F'&& h[x]<='Z')
                    	{
                        	printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        	printf("'%c' IS NOT Hexa-Decimal Number.\n",h[x]);
                        	goto X;
                    	}
                	}
                	Hexadecimal_to_Binary(h);
                	printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'H' to return HEXADECIMAL CONVERSION:\n");
	                scanf(" %c",&q);
	                if(q=='y'|| q=='Y')
	                {
	 	               system("cls");
		               goto opt1;	
                	}
					if(q=='h'|| q=='H')
	                {
	 	               system("cls");
		               goto l4;	
                	} 
					break;

            		case 2:
                		printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                		Y:
                		printf("\nEnter the Number in Hexa-Decimal form: ");
                		scanf("%s",&h);
                		for(x=strlen(h)-1;x>=0;x--)
                		{
                    		if(h[x]>'f' && h[x]<='z' || h[x]>'F'&& h[x]<='Z')
                    		{
                        		printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        		printf("'%c' IS NOT Hexa-Decimal Number.\n",h[x]);
                        		goto Y;
                    		}
                		}
                		Hexadecimal_to_Decimal(h);
						printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'H' to return HEXADECIMAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='h'|| q=='H')
	                	{
	 	               		system("cls");
		               		goto l4;	
                		}  
						break;

            		case 3:
                		printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                		Z:
                		printf("\nEnter the Number in Hexa-Decimal form: ");
                		scanf("%s",&h);
                		for(x=strlen(h)-1;x>=0;x--)
                		{
                    		if(h[x]>'f' && h[x]<='z' || h[x]>'F'&& h[x]<='Z')
                    		{
                        		printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        		printf("'%c' IS NOT Hexa-Decimal Number.\n",h[x]);
                        		goto Z;
                    		}
                		}
                		Hexadecimal_to_Octal(h);
                		printf("\nEnter 'Y' to return to NUMBER SYSTEM CONVERSION\nor,\nEnter 'H' to return HEXADECIMAL CONVERSION:\n");
	                	scanf(" %c",&q);
	                	if(q=='y'|| q=='Y')
	                	{
	 	               		system("cls");
		               		goto opt1;	
                		}
						if(q=='h'|| q=='H')
	                	{
	 	               		system("cls");
		               		goto l4;	
                		} 
						break;
        		}
        	case 5:
        		exit(0);
        		
        	default:
                printf("\n***INVALID NUMBER***\n");
                break;
    	}
} 
    spacebar = 3+35;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar--;
            for( y=1;y<=2*x-1;y++)
            {
                printf("*");
            }
            printf("\n");
        }
        spacebar = 37;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar++;
            for( y=1;y<=2*(3-x)-1;y++)
            {
                printf("*");

            }

            printf("\n");

        }
}

int Binary_to_Decimal( int bin)
{
    int remainder,summation=0,x=0;
    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }

    printf("\nEquivalent Decimal Number : %d",summation);
}

 int Binary_to_Octal( int bin)
{
    int x=0,remainder,sum=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        sum=sum+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(sum!=0)
    {
        remaining[x]=sum%8;
        sum=sum/8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remaining[x]);
    }
}

 int Binary_to_Hexadecimal( int bin)
{
    int remainder,x=0,summation=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(summation!=0)
    {
        remaining[x]=summation%16;
        summation=summation/16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remaining[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remaining[x]);
        }

    }
}

int Decimal_to_Binary( int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%2;
        dec=dec/2;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Binary Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

int Decimal_to_Octal( int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%8;
        dec=dec/8;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

 int Decimal_to_Hexadecimal( int dec)
{
    int remainder[50],x,length=0;
    do
    {
        remainder[x]=dec%16;
        dec=dec/16;
        x++;
        length++;
    }
    while(dec!=0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remainder[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remainder[x]);
        }

    }
}

int Octal_to_Binary( int oct)
{
    int remainder[50],length=0,decimals=0,x=0,numbers,answers;

    while(oct!=0)
    {
        answers=oct % 10;
        decimals = decimals + answers * pow(8,x);
        x++;
        oct = oct/10;
    }

    x=0;
    do
    {
        remainder[x]=decimals%2;
        decimals=decimals/2;
        x++;
        length++;
    }
    while(decimals!=0);

    printf("\nEquivalent Binary Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }
}

int Octal_to_Decimal( int oct)
{
    int decimals=0,x=0,numbers,answers;

    while(oct!=0)
    {
        answers=oct % 10;
        decimals = decimals + answers * pow(8,x);
        x++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimals);
}

int Octal_to_Hexadecimal( int oct)
{
    int remainder[50],length=0,decimal=0,x=0,numbers,answers=0;
    while(oct!=0)
    {
        answers=oct % 10;
        decimal = decimal + answers * pow(8,x);
        x++;
        oct = oct/10;
    }
    x=0;
    while(decimal!=0)
    {
        remainder[x]=decimal%16;
        decimal=decimal/16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(x=length-1;x>=0;x--)
    {
        switch(remainder[x])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remainder[x]);
        }

    }
}

void Hexadecimal_to_Binary(char hex[])
{
    int x=0;
    printf("\nEquivalent Binary Number : ");
    for(x=0;x<strlen(hex);x++)
    {
        switch (hex[x])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[x]);
        }
    }

}

void Hexadecimal_to_Decimal(char hex[])
{
    int x,numbers=0,powered=0,decimal=0;

    for(x=strlen(hex)-1;x>=0;x--)
    {
        if(hex[x]=='A'||hex[x]=='a')
        {
            numbers=10;
        }
        else if(hex[x]=='B'||hex[x]=='b')
        {
            numbers=11;
        }
        else if(hex[x]=='C'||hex[x]=='c')
        {
            numbers=12;
        }
        else if(hex[x]=='D'||hex[x]=='d')
        {
            numbers=13;
        }
        else if(hex[x]=='E'||hex[x]=='e')
        {
            numbers=14;
        }
        else if(hex[x]=='F'||hex[x]=='f')
        {
            numbers=15;
        }
        else
        {
            numbers=hex[x]-48;
        }

        decimal=decimal+numbers*pow(16,powered);
        powered++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

}

void Hexadecimal_to_Octal(char hex[])
{
    int x,length,numbers=0,powered=0,decimal=0,remainder[100];

    for(x=strlen(hex)-1;x>=0;x--)
    {
        if(hex[x]=='A'||hex[x]=='a')
        {
            numbers=10;
        }
        else if(hex[x]=='B'||hex[x]=='b')
        {
            numbers=11;
        }
        else if(hex[x]=='C'||hex[x]=='c')
        {
            numbers=12;
        }
        else if(hex[x]=='D'||hex[x]=='d')
        {
            numbers=13;
        }
        else if(hex[x]=='E'||hex[x]=='e')
        {
            numbers=14;
        }
        else if(hex[x]=='F'||hex[x]=='f')
        {
            numbers=15;
        }
        else
        {
            numbers=hex[x]-48;
        }

        decimal=decimal+numbers*pow(16,powered);
        powered++;
    }

    x=0,length=0;
    while(decimal!=0)
    {
        remainder[x]=decimal%8;
        decimal=decimal/8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for(x=length-1;x>=0;x--)
    {
        printf("%d",remainder[x]);
    }

}
