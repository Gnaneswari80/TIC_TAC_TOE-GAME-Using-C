
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main()

{
	 int value=2,cg=0,i,dec=0,j,count=0,p=0,k,position,row,temp=0;
    char a[3][3],ch,ch2;
  //  int gm,gd=DETECT;
   // initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    clrscr();
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
	  a[i][j]='_';
	  }
	  }
    do
    {
    p=0;
    system("cls");
    textcolor(4);
    textbackground(1);
    printf("\t\t\t\t");cprintf("TIC TAAC TOA GMAME");
    printf("\n\n\n\n\n\n\n");
    printf("\n");
		 for(i=0;i<3;i++)
		 {
		  printf("\t\t\t");
		    for(j=0;j<3;j++)
		      {     textbackground(2);
		      textcolor(4);
			  printf("|");
			  cprintf("__%c__",a[i][j]);
			  printf("|");
			  }
			  printf("\n");
		  }
	      //	  printf("\t__________________________");
		   textbackground(0);
		if(value==1)
		{
		printf("\n\t\t\t");
		textcolor(9);
		cprintf("player 2 have to play 'O'");}
		else if(value==2)
		{
		printf("\n\t\t\t");
		textcolor(9);
		cprintf("Player 1 have to play  'X'");
		}
		  B:printf("\n\t\t\t");
		  textcolor(6);
		 cprintf(" Enter row and position");printf("\nNOTE:If you Entered wrongly...You may lost your chance");printf("\t\t");scanf("%d %d",&row,&position);
		  temp=0;

		 /* for(i=0;i<3;i++)
		  {
		     for(j=0;j<3;j++)
		     {
			 if(a[i][j]=='x'||a[i][j]=='o')
			 {
			 printf("\nNot possible to place here");
			 temp++;
			 }
		      }
		    }
		      //	 if(temp==9)
			// goto A;
		   //	 else
		     //	 goto B;
		     //    A:
	     /*	    if(temp==9)
		      {
			 printf("\nDo you want to Quit these game press y/n");
			 scanf(" %c",&ch2);
			 for(i=0;i<3;i++)
			 {
			     for(j=0;j<3;j++)
			     {
				a[i][j]= 'c';
				}
			  }
		       if(ch2=='n')
		       goto B;  */
	       //	      }
		      ////////////////
			if(a[row-1][position-1]=='X'||a[row-1][position-1]=='O')
		  {
		  printf("\n\t\t\tNot possible to place");
		  goto B;
		  }

		      if(cg==0)
		      {
		      a[row-1][position-1]='X';
		      cg=1;
		      value=1;                 //pl1
		      ch='X';
		      dec++;
		      }
		      else
		      {
		      a[row-1][position-1]='O';     //pl 2
		       cg=0;
		       ch='O';
		       dec++;
		       value=2;
		       }
		       if(a[0][0]==ch&&a[0][1]==ch&&a[0][2]==ch)
		       count=1;
		       else if(a[0][0]==ch&&a[1][0]==ch&&a[2][0]==ch)
		       count=1;
		       else if(a[2][0]==ch&&a[2][1]==ch&&a[2][2]==ch)
		       count=1;

		       else if(a[0][2]==ch&&a[1][2]==ch&&a[2][2]==ch)
		       count=1;
		       else if(a[1][0]==ch&&a[1][1]==ch&&a[1][2]==ch)
		       count=1;
		       else if(a[0][0]==ch&&a[1][1]==ch&&a[2][2]==ch)
		       count=1;
		       else if(a[0][2]==ch&&a[1][1]==ch&&a[2][0]==ch)
		       count=1;
		       else if(a[0][1]==ch&&a[1][1]==ch&&a[2][1]==ch)
		       count=1;
		       if(count==1)
		       {
			  system("cls");
			  printf("\n\n\n\n\n\n\n\n");
			   for(i=0;i<3;i++)
		 {
		  printf("\t\t\t");
		    for(j=0;j<3;j++)
		      {     textbackground(2);
		      textcolor(4);
			  printf("|");
			  cprintf("__%c__",a[i][j]);
			  printf("|");
			  }
			  printf("\n");
		  }
			/*  printf("\n\n\n\n\n\n\n\n");
			  for(i=0;i<3;i++)
			  {
			  printf("\t\t\t");
			      for(j=0;j<3;j++)
			      {
			      printf("\|__%c__|",a[i][j]);
			      }
			      printf("\n");
			      }    */
			      textcolor(3);
			      textbackground(0);
			   if(ch=='X')
			   {
			   printf("\n\t\t\t");
			   cprintf("PLAYER 1:is the winner");
			 //  ch2='n';
			   p=1;
			   }
			   else if(ch=='O')
			   {
			   printf("\n\t\t\t");
			   cprintf("PLAYER 2:is the winner");
			  // ch2='n';
			   p=1;
			   }
		       }
		       if(dec==9)
		       {
		       textcolor(2);
		       printf("\n");
			   cprintf("DO you want to continue these game press(y/n)");
			   scanf(" %c",&ch2);
			   if(ch2=='n')
			   p=1;
			   dec=0;
			   for(i=0;i<3;i++)
			   {
			       for(j=0;j<3;j++)
			       {
				    a[i][j]='_';
				    }
				    }
				  //  }
			   }
		     // }

		}while(p!=1);
getch();
}
