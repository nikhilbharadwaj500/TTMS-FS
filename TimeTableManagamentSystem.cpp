//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>

char ans=0; 
int ok;
int b, valid=0;

//FUNCTION DECLERATIONS
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
void MainMenu(void);//MainMenu function decleration
void ex_it(void);//exit function declaration
void LoginScreen(void);//LoginScreen function decleration
void TimeTableMenu(void);//TimeTableMenu function decleration
void AllocateMenu(void);//AllocateMenu function decleration
void TeacherMenu(void);//TeacherMenu function decleration
void Add_Teacher(void);//adds teacher
void List_Teacher(void);//lists teacher
void Search_Teacher(void);//search teacher
void Edit_Teacher(void);//edit Teacher
void Delete_Teacher(void);//delete teacher
void OneMenu(void);//FirstMenu function decleration
void SecondMenu(void);//SecondMenu function decleration
void ThirdMenu(void);//ThirdMenu function decleration
void FourthMenu(void);//FourthMenu function decleration
void FifthMenu(void);//FifthMenu function decleration
void SixthMenu(void);//SixthMenu function decleration
void SeventhMenu(void);//SeventhMenu function decleration
void EighthMenu(void);//EighthMenu function decleration
void OneAllocateMenu(void);//OneAllocateMenu function decleration
void TwoAllocateMenu(void);//TwoAllocateMenu function decleration
void ThreeAllocateMenu(void);//ThreeAllocateMenu function decleration
void FourAllocateMenu(void);//FourAllocateMenu function decleration
void FiveAllocateMenu(void);//FiveAllocateMenu function decleration
void SixAllocateMenu(void);//SixAllocateMenu function decleration
void SevenAllocateMenu(void);//SevenAllocateMenu function decleration
void EightAllocateMenu(void);//EightAllocateMenu function decleration
void One_Add(void);
void One_List(void);
void One_Search(void);
void One_Edit(void);
void One_Delete(void);
void Two_Add(void);
void Two_List(void);
void Two_Search(void);
void Two_Edit(void);
void Two_Delete(void);
void Three_Add(void);
void Three_List(void);
void Three_Search(void);
void Three_Edit(void);
void Three_Delete(void);
void Four_Add(void);
void Four_List(void);
void Four_Search(void);
void Four_Edit(void);
void Four_Delete(void);
void Five_Add(void);
void Five_List(void);
void Five_Search(void);
void Five_Edit(void);
void Five_Delete(void);
void Six_Add(void);
void Six_List(void);
void Six_Search(void);
void Six_Edit(void);
void Six_Delete(void);
void Seven_Add(void);
void Seven_List(void);
void Seven_Search(void);
void Seven_Edit(void);
void Seven_Delete(void);
void Eight_Add(void);
void Eight_List(void);
void Eight_Search(void);
void Eight_Edit(void);
void Eight_Delete(void);
void OneAllocate_Add(void);
void OneAllocate_List(void);
void OneAllocate_Search(void);
void OneAllocate_Edit(void);
void OneAllocate_Delete(void);
void TwoAllocate_Add(void);
void TwoAllocate_List(void);
void TwoAllocate_Search(void);
void TwoAllocate_Edit(void);
void TwoAllocate_Delete(void);
void ThreeAllocate_Add(void);
void ThreeAllocate_List(void);
void ThreeAllocate_Search(void);
void ThreeAllocate_Edit(void);
void ThreeAllocate_Delete(void);
void FourAllocate_Add(void);
void FourAllocate_List(void);
void FourAllocate_Search(void);
void FourAllocate_Edit(void);
void FourAllocate_Delete(void);
void FiveAllocate_Add(void);
void FiveAllocate_List(void);
void FiveAllocate_Search(void);
void FiveAllocate_Edit(void);
void FiveAllocate_Delete(void);
void SixAllocate_Add(void);
void SixAllocate_List(void);
void SixAllocate_Search(void);
void SixAllocate_Edit(void);
void SixAllocate_Delete(void);
void SevenAllocate_Add(void);
void SevenAllocate_List(void);
void SevenAllocate_Search(void);
void SevenAllocate_Edit(void);
void SevenAllocate_Delete(void);
void EightAllocate_Add(void);
void EightAllocate_List(void);
void EightAllocate_Search(void);
void EightAllocate_Edit(void);
void EightAllocate_Delete(void);





//For teachers
struct teacher
{
 char id[20];//staaf id of teacher
 char fst_name[20];//first name of teacher
 char lst_name[20];//last name of teacher
 char gender;//gender of teacher
 char dob[20];//date of birth
 char qualification[20];//Qualification of teacher
 int age; //age of teacher
 int exp;//Experiance of the person
 char addrs[20];//Adders of teacher home
 char cel_no[20];//Phone number 
 char email[20];//email id 

}tech;//Variable of teacher type

struct timetable{
	char day[20];
	char sub1[20];
	char sub2[20];
	char sub3[20];
	char sub4[20];
	char sub5[20];
	char sub6[20];
	char sub7[20];
	
}table;

struct allocate
{
	char subcode[20];
	char subfname[20];
	char sublname[20];
	char tid[20];
	char tfname[20];
	char tlname[20];
	
}all;

//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y)
{
	COORD pos = {x, y};//sets co-ordinates in (x,y).
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main(void)
{
	system("color 71");
    WelcomeScreen();//Use to call WelcomeScreen function
    system("cls");
	Title();//Use to call Title function
	LoginScreen();//Use to call Menu function

}
/* ************************************************* Welcome Screen ********************************************* */
void WelcomeScreen(void) //function for welcome screen
{
	gotoxy(25,6);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,7);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,8);
	printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	gotoxy(25,9);
	printf("        =                 WELCOME                   =");
	gotoxy(25,10);
	printf("        =                   TO                      =");
	gotoxy(25,11);
	printf("        =                  EWIT                     =");
	gotoxy(25,12);
	printf("        =             ISE TIMETABLE                 =");
	gotoxy(25,13);
	printf("        =               MANAGEMENT                  =");
	gotoxy(25,14);
	printf("        =                 SYSTEM                    =");
	gotoxy(25,15);
	printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	gotoxy(25,16);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,17);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(28,22);
	printf(" Enter any key to continue.....");
	getch();
	
}
/* ************************************************* Title Screen ********************************************* */
void Title(void)//function for title screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t      	             ISE DEPARTMENT         ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}
/* ************************************************* Exit Screen ********************************************* */
void ex_it(void)//function to exit
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	getch();//holds screen
	
}
/* ************************************************* Login Screen ********************************************* */
void LoginScreen(void)//function for login screen
{
//list of variables	
int i=0,e=0	;
char Username[15];
char Password[15];
char c= ' ';
char original_Username[25]="ewit";
char original_Password[15]="ewit";

	do
	{
		printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s",&Username);
	
		printf("\n\n\t\t\t\t\tPASSWORD:");
		while(i<10)
		{
	    	Password[i]=getch();
	    	c=Password[i];
	    	if(c==13) break;
	    	else printf("*");
	    	i++;
		}
		Password[i]='\0';
		if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
		{
			printf("\n\n\n\t\t\t\t\t...Login Successfull...");
			getch();
			MainMenu();//call MainMenu function
			break;
		}
		else
		{
			printf("\n\t\t\tPassword in incorrect:( Try Again :)");
			e++;
			system("cls");
			Title();
			LoginScreen();
		}

	}
	while(e<=2);
	system("cls");
}	
/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. TimeTable Information\n");
	printf("\n\t\t\t\t2. Teacher Information\n");
	printf("\n\t\t\t\t3. Subject  Information\n");
	printf("\n\t\t\t\t4. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 4:");
	scanf("%i", &choose);
	
	switch(choose)//switch to differeht case
	{
	
	case 1:
			TimeTableMenu();//TimeTableMenu function is called
    		break;
    case 2:
    		TeacherMenu();
    		break;
	case 3:
			AllocateMenu();
    		break;
	case 4:
			ex_it();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* ************************************************* Teacher Menu ********************************************* */
void TeacherMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add Teacher Information\n");
	printf("\n\t\t\t\t2. List Teachers Record\n");
	printf("\n\t\t\t\t3. Search Teachers Record\n");
	printf("\n\t\t\t\t4. Edit Teachers Record \n");
	printf("\n\t\t\t\t5. Delete Teachers Record\n");
	printf("\n\t\t\t\t6. Back to Main Menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			Add_Teacher();
    		break;
    case 2:
    		List_Teacher();
    		break;
	case 3:
			Search_Teacher();
    		break;
    case 4:
			Edit_Teacher();
			break;
	case 5:
			Delete_Teacher();
			break;
	case 6:
			MainMenu();
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* **************************************ADD TEACHER*******************************************/

void Add_Teacher(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("teacher.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TEACHER                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* STAFF ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",tech.id);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",tech.fst_name);
	tech.fst_name[0]=toupper(tech.fst_name[0]);
	if(strlen(tech.fst_name)>20||strlen(tech.fst_name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(tech.fst_name);b++)
		{
			if (isalpha(tech.fst_name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	
	printf("\n\t\t\tLast Name: ");
    scanf("%s",tech.lst_name);
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&tech.gender);
		if(toupper(tech.gender)=='M'|| toupper(tech.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ******************************************* DATE OF BIRTH ************************************************************** */	    
	
	printf("\n\t\t\tDate of birth(in order dd-mm-yyyy): ");
    scanf("%s",tech.dob);

/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&tech.age);

/* ***************************************** Qualification ********************************************************************** */	
	
	printf("\n\t\t\tQualification:");
    scanf(" %s",tech.qualification);

/* ***************************************** Experience ********************************************************************** */	
    printf("\n\t\t\tExperience:");
    scanf(" %i",&tech.exp);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",tech.addrs);
    tech.addrs[0]=toupper(tech.addrs[0]);
    if(strlen(tech.addrs)>20||strlen(tech.addrs)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",tech.cel_no);
    if(strlen(tech.cel_no)>10||strlen(tech.cel_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(tech.cel_no);b++)
		{
			if (!isalpha(tech.cel_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
    scanf("%s",tech.email);
    if (strlen(tech.email)>30||strlen(tech.email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
}while(strlen(tech.email)>30||strlen(tech.email)<8);


	fprintf(ek,"%s %s %s %c %s %i %i %s %s %s %s \n", tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Add_Teacher();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	TeacherMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
/* ******************************************* List Teachers ***************************************** */
void List_Teacher()
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Teachers Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Staff ID");
		gotoxy(12,15);
		printf("Full Name");
		gotoxy(32,15);
		printf("Gender");
		gotoxy(42,15);
		printf("DOB");
		gotoxy(56,15);
		printf("Age");
		gotoxy(66,15);
		printf("Experience");
		gotoxy(80,15);
		printf("Qualification");
		gotoxy(95,15);
		printf("Phone No.");
		gotoxy(110,15);
		printf("Address");
		gotoxy(125,15);
		printf("Email-id");	
		gotoxy(1,16);
		printf("===================================================================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %i %i %s %s  %s %s\n", tech.id,tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",tech.id);
			gotoxy(12,row);
			printf("%s %s",tech.fst_name,tech.lst_name);
			gotoxy(32,row);
			printf("%c",tech.gender);
			gotoxy(42,row);
			printf("%s",tech.dob);
			gotoxy(56,row);
			printf("%i",tech.age);
			gotoxy(66,row);
			printf("%i",tech.exp);
			gotoxy(80,row);
			printf("%s",tech.qualification);
			gotoxy(95,row);
			printf("%s",tech.cel_no);
			gotoxy(110,row);
			printf("%s",tech.addrs);
			gotoxy(125,row);
			printf("%s", tech.email);
			row++;
		}
		fclose(ek);
		getch();
		TeacherMenu();
}
 
/* ******************************************* Search Teachers ***************************************** */

void Search_Teacher(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Teachers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Staff Id to be viewed:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s\n",tech.id, tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
	{
		if(strcmp(tech.id,name)==0)
		{
		gotoxy(1,15);
		printf("Staff ID");
		gotoxy(12,15);
		printf("Full Name");
		gotoxy(32,15);
		printf("Gender");
		gotoxy(42,15);
		printf("DOB");
		gotoxy(56,15);
		printf("Age");
		gotoxy(66,15);
		printf("Experience");
		gotoxy(80,15);
		printf("Qualification");
		gotoxy(95,15);
		printf("Phone No.");
		gotoxy(110,15);
		printf("Address");
		gotoxy(125,15);
		printf("Email-id");	
		gotoxy(1,16);
	printf("===================================================================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",tech.id);
			gotoxy(12,row);
			printf("%s %s",tech.fst_name,tech.lst_name);
			gotoxy(32,row);
			printf("%c",tech.gender);
			gotoxy(42,row);
			printf("%s",tech.dob);
			gotoxy(56,row);
			printf("%i",tech.age);
			gotoxy(66,row);
			printf("%i",tech.exp);
			gotoxy(80,row);
			printf("%s",tech.qualification);
			gotoxy(95,row);
			printf("%s",tech.cel_no);
			gotoxy(110,row);
			printf("%s",tech.addrs);
			gotoxy(125,row);
			printf("%s", tech.email);
			break;
		}
	   }
	   if(strcmp(tech.id,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Search_Teacher();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		TeacherMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
/* ******************************************* Edit Teachers ***************************************** */

void Edit_Teacher(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("teacher.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		TeacherMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Teachers Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Staff ID of the Teacher : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			TeacherMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s  \n", tech.id,tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
		{
			if(strcmp(tech.id, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%i \t%i \t%s \t%s  \t%s \t%s\n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
				gotoxy(12,22);
				printf("Enter New Staff ID:");
				scanf("%s",tech.id);
				gotoxy(12,24);	
				printf("Enter New First Name: ");
				scanf("%s",tech.fst_name);    
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",tech.lst_name);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&tech.gender);
				tech.gender=toupper(tech.gender);
				gotoxy(12,30);
				printf("Enter DOB(in the form dd-mm-yyyy): ");
				scanf(" %s",tech.dob);
				gotoxy(12,32);
				printf("Enter age: ");
				scanf(" %i",&tech.age);
				gotoxy(12,34);
				printf("Enter Experience in years: ");
				scanf(" %i",&tech.exp);
				gotoxy(12,36);
				printf("Enter Qualification: ");
				scanf("%s",tech.qualification);
				tech.qualification[0]=toupper(tech.qualification[0]);
			    gotoxy(12,38);
				printf("Enter Contact no: ");
				scanf("%s",tech.cel_no);
				gotoxy(12,40);
				printf("Enter Address: ");
				scanf("%s",tech.addrs);
			    tech.addrs[0]=toupper(tech.addrs[0]);
			    gotoxy(12,42);
			    printf("Enter email-id: ");
			    scanf("%s",tech.email);
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c  %s %i %i %s %s %s %s \n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
				printf("\n\n\t\t\tTeacher record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %i %i %s %s %s %s \n",tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("teacher.txt");
   	   rename("temp2.txt","teacher.txt");
		getch();
		TeacherMenu();		
}
/* ******************************************* Delete Teachers ***************************************** */

void Delete_Teacher()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("teacher.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Teachers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Staff ID to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %i %i %s %s %s %s \n",tech.id, tech.fst_name,tech.lst_name,&tech.gender,tech.dob,&tech.age,&tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email)!=EOF)
	{
		if (strcmp(tech.id,name)!=0)
		fprintf(ft,"%s %s %s %c  %s %i %i %s %s %s  %s \n",tech.id, tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
		else 
		{
			printf("%s %s %s %c %s %i %i %s %s %s %s  \n", tech.id,tech.fst_name,tech.lst_name,tech.gender,tech.dob,tech.age,tech.exp,tech.qualification,tech.cel_no,tech.addrs,tech.email);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		TeacherMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("teacher.txt");
		rename("temp.txt","teacher.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		TeacherMenu();
	}

}
/* ************************************************* TimeTable Menu ********************************************* */
void TimeTableMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneMenu();//Add_rec function is called
    		break;
    case 2:
    		SecondMenu();
    		break;
	case 3:
			ThirdMenu();//View_rec function is call
    		break;
    case 4:
			FourthMenu();//Edit_rec function is call
			break;
	case 5:
			FifthMenu();//Dlt_rec function is call
			break;
	case 6:
			SixthMenu();//ex_it function is call
    		break;
    case 7:
			SeventhMenu();//ex_it function is call
    		break;
    case 8:
			EighthMenu();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* ************************************************* First Sem Menu ********************************************* */
void OneMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem  TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable  menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							One_Add();
							
						}
						OneMenu();
						break;
				case 2:
			    		One_List();
						break;
				case 3:
						One_Search();
						break;
				case 4:
						One_Edit();
						break;
				case 5:
						One_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void One_Add(void)
{	
	int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable1.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");

/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);

	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed

}
void One_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			row++;
		}
		fclose(ek);
		getch();
		OneMenu();
}
void One_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        One_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void One_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable1.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		OneMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			    
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable1.txt");
   	   rename("temp2.txt","timetable1.txt");
		getch();
		OneMenu();		
}
void One_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable1.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}
/* ************************************************* Second Sem Menu ********************************************* */
void SecondMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Two_Add();
							
						}
						SecondMenu();
						break;
				case 2:
			    		Two_List();
						break;
				case 3:
						Two_Search();
						break;
				case 4:
						Two_Edit();
						break;
				case 5:
						Two_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void Two_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable2.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);


	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed
    
}
void Two_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
		
			row++;
		}
		fclose(ek);
		getch();
		SecondMenu();
}
void Two_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Two_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SecondMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Two_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable2.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SecondMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SecondMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			   
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable2.txt");
   	   rename("temp2.txt","timetable2.txt");
		getch();
		SecondMenu();		
}
void Two_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable2.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SecondMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}

/* ************************************************* Third Sem Menu ********************************************* */
void ThirdMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Student TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Three_Add();
							
						}
						ThirdMenu();
						break;
				case 2:
			    		Three_List();
						break;
				case 3:
						Three_Search();
						break;
				case 4:
						Three_Edit();
						break;
				case 5:
						Three_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Three_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable3.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);





	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
	fclose(ek);//ek file is closed
    
}
void Three_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		ThirdMenu();
}
void Three_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
	gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Three_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThirdMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Three_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable3.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		ThirdMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			ThirdMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s  \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			    
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable3.txt");
   	   rename("temp2.txt","timetable3.txt");
		getch();
		ThirdMenu();		
}
void Three_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable3.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThirdMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}

/* ************************************************* Fourth Sem Menu ********************************************* */
void FourthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Four_Add();
							
						}
						FourthMenu();
						break;
				case 2:
			    		Four_List();
						break;
				case 3:
						Four_Search();
						break;
				case 4:
						Four_Edit();
						break;
				case 5:
						Four_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Four_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable4.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);





	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
	fclose(ek);//ek file is closed
    
}
void Four_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		FourthMenu();
}
void Four_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
	gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Four_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Four_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable4.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FourthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FourthMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s\n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable4.txt");
   	   rename("temp2.txt","timetable4.txt");
		getch();
		FourthMenu();		
}
void Four_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable4.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}

/* ************************************************* Fifth Sem Menu ********************************************* */
void FifthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Five_Add();
							
						}
						FifthMenu();
						break;
				case 2:
			    		Five_List();
						break;
				case 3:
						Five_Search();
						break;
				case 4:
						Five_Edit();
						break;
				case 5:
						Five_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Five_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable5.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);





	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed
    
}
void Five_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		FifthMenu();
}
void Five_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
	gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
		
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Five_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FifthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Five_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable5.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FifthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FifthMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			    
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable5.txt");
   	   rename("temp2.txt","timetable5.txt");
		getch();
		FifthMenu();		
}
void Five_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable5.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FifthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}
/* ************************************************* Sixth Sem Menu ********************************************* */
void SixthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Six_Add();
							
						}
						SixthMenu();
						break;
				case 2:
			    		Six_List();
						break;
				case 3:
						Six_Search();
						break;
				case 4:
						Six_Edit();
						break;
				case 5:
						Six_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Six_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable6.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);


	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed
    
}
void Six_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		SixthMenu();
	
}
void Six_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Six_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Six_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable6.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SixthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SixthMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			   
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable6.txt");
   	   rename("temp2.txt","timetable6.txt");
		getch();
		SixthMenu();		
}
void Six_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable6.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}
/* ************************************************* Seventh Sem Menu ********************************************* */
void SeventhMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Seven_Add();
							
						}
						SeventhMenu();
						break;
				case 2:
			    		Seven_List();
						break;
				case 3:
						Seven_Search();
						break;
				case 4:
						Seven_Edit();
						break;
				case 5:
						Seven_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Seven_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable7.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);





	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed
    
}
void Seven_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Timetable !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		SeventhMenu();
}
void Seven_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Seven_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SeventhMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Seven_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable7.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SeventhMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SeventhMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			    
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable7.txt");
   	   rename("temp2.txt","timetable7.txt");
		getch();
		SeventhMenu();		
}
void Seven_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable7.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SeventhMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}

/* ************************************************* Eight Sem Menu ********************************************* */
void EighthMenu(void)//function decleration
{
int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem TimeTable");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add TimeTable");
		gotoxy(20,7);
		printf("2. View TimeTable");
		gotoxy(20,9);
		printf("3. Search TimeTable");
		gotoxy(20,11);
		printf("4. Edit TimeTable");
		gotoxy(20,13);
		printf("5. Delete TimeTable");
		gotoxy(20,15);
		printf("6. Back to TimeTable menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						for(int i=1;i<=6;i++)
						{
							Eight_Add();
							
						}
						EighthMenu();
						break;
				case 2:
			    		Eight_List();
						break;
				case 3:
						Eight_Search();
						break;
				case 4:
						Eight_Edit();
						break;
				case 5:
						Eight_Delete();
						break;
				case 6:
						TimeTableMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void Eight_Add(void)
{
		int count=0;
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("timetable8.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW TIMETABLE                   ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
	
	
/* ***************************************** Day ********************************************************************** */	
     
    printf("\n\t\t\tDay:");
    scanf(" %s",table.day);
/* ***************************************** SUBJECT1   ********************************************************************** */	
    printf("\n\t\t\tSubject 1:");
    scanf(" %s",table.sub1);
/* ***************************************** SUBJECT2   ********************************************************************** */	
    printf("\n\t\t\tSubject 2:");
    scanf(" %s",table.sub2);
/* ***************************************** SUBJECT3   ********************************************************************** */	
    printf("\n\t\t\tSubject 3:");
    scanf(" %s",table.sub3);
/* ***************************************** SUBJECT4   ********************************************************************** */	
    printf("\n\t\t\tSubject 4:");
    scanf(" %s",table.sub4);
/* ***************************************** SUBJECT5   ********************************************************************** */	
    printf("\n\t\t\tSubject 5:");
    scanf(" %s",table.sub5);
/* ***************************************** SUBJECT6   ********************************************************************** */	
    printf("\n\t\t\tSubject 6:");
    scanf(" %s",table.sub6);
/* ***************************************** SUBJECT7   ********************************************************************** */	
    printf("\n\t\t\tSubject 7:");
    scanf(" %s",table.sub7);


	fprintf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    getch();
    fclose(ek);//ek file is closed
   
}
void Eight_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("timetable8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Timetable !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=======================================================================================================================");
		row=18;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			
			row++;
		}
		fclose(ek);
		getch();
		EighthMenu();
}
void Eight_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("timetable8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search TimeTable Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Day to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
	{
		if(strcmp(table.day,name)==0)
		{
		gotoxy(1,15);
		printf("DAY");
		gotoxy(17,15);
		printf("I");
		gotoxy(32,15);
		printf("II");
		gotoxy(47,15);
		printf("III");
		gotoxy(62,15);
		printf("IV");
		gotoxy(77,15);
		printf("V");
		gotoxy(92,15);
		printf("VI");
		gotoxy(107,15);
		printf("VII");
		gotoxy(1,16);
		printf(" ");
		gotoxy(11,16);
		printf("(8:30-9:30)");
		gotoxy(27,16);
		printf("(9:30-10:30)");
		gotoxy(42,16);
		printf("(10:45-11:45)");
		gotoxy(57,16);
		printf("(11:45-12:45)");
		gotoxy(72,16);
		printf("(1:30-2:30)");
		gotoxy(87,16);
		printf("(2:30-3:30)");
		gotoxy(102,16);
		printf("(3:30-4:30)");
		gotoxy(1,17);
		printf("=================================================================================================================");
		row=18;
		gotoxy(1,row);
			printf("%s",table.day);
			gotoxy(17,row);
			printf("%s",table.sub1);
			gotoxy(32,row);
			printf("%s",table.sub2);
			gotoxy(47,row);
			printf("%s",table.sub3);
			gotoxy(62,row);
			printf("%s",table.sub4);
			gotoxy(77,row);
			printf("%s",table.sub5);
			gotoxy(92,row);
			printf("%s",table.sub6);
			gotoxy(107,row);
			printf("%s",table.sub7);
			
			break;
		}
	}
	   if(strcmp(table.day,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Eight_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EighthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }		
}
void Eight_Edit(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("timetable8.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		EighthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit TimeTable !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Day to be edited : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			EighthMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7)!=EOF)
		{
			if(strcmp(table.day, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s   \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				gotoxy(12,22);
				printf("Enter New Day:");
				scanf("%s",table.day);
				gotoxy(12,24);	
				printf("Enter Subject1: ");
				scanf("%s",table.sub1);    
				gotoxy(12,26);
				printf("Enter Subject2: ");
				scanf("%s",table.sub2); 
				gotoxy(12,28);
				printf("Enter Subject3: ");
				scanf("%s",table.sub3); 
				gotoxy(12,30);
				printf("Enter Subject4: ");
				scanf("%s",table.sub4); 
				gotoxy(12,32);
				printf("Enter Subject5: ");
				scanf("%s",table.sub5); 
				gotoxy(12,34);
				printf("Enter Subject6: ");
				scanf("%s",table.sub6); 
				gotoxy(12,36);
				printf("Enter Subject7: ");
				scanf("%s",table.sub7); 
			    
			    printf("\nPress U character for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);
				printf("\n\n\t\t\tTimeTable record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s \n",table.day,table.sub1,table.sub2,table.sub3,table.sub4,table.sub5,table.sub6,table.sub7);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("timetable8.txt");
   	   rename("temp2.txt","timetable8.txt");
		getch();
		EighthMenu();		
}
void Eight_Delete()
{
	system("cls");
	L:
		
	printf("\n\n\t\t\tDo you want to delete the Timetable[Y/N]??");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
    {
        remove("timetable8.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EighthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	system("cls");
		goto L;
    }
}
/* ************************************************* Subject Allocation Menu ********************************************* */
void AllocateMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneAllocateMenu();//Add_rec function is called
    		break;
    case 2:
    		TwoAllocateMenu();
    		break;
	case 3:
			ThreeAllocateMenu();//View_rec function is call
    		break;
    case 4:
			FourAllocateMenu();//Edit_rec function is call
			break;
	case 5:
			FiveAllocateMenu();//Dlt_rec function is call
			break;
	case 6:
			SixAllocateMenu();//ex_it function is call
    		break;
    case 7:
			SevenAllocateMenu();//ex_it function is call
    		break;
    case 8:
			EightAllocateMenu();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch	
}
/* ************************************************* First Sem Allocate Menu ********************************************* */
void OneAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem  Alotted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						OneAllocate_Add();
						break;
				case 2:
			    		OneAllocate_List();
						break;
				case 3:
						OneAllocate_Search();
						break;
				case 4:
						OneAllocate_Edit();
						break;
				case 5:
						OneAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void OneAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("first_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	OneAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	OneAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void OneAllocate_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("first_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		OneAllocateMenu();	
}
void OneAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("first_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        OneAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void OneAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("first_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		OneAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("first_sem_subjects.txt");
   	    rename("temp2.txt","first_sem_subjects.txt");
		getch();
		OneAllocateMenu();		
}
void OneAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("first_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		OneAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("first_sem_subjects.txt");
		rename("temp.txt","first_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneAllocateMenu();
	}
}
/* ************************************************* Second Sem Allocate Menu ********************************************* */
void TwoAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem Alloted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to  Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						TwoAllocate_Add();
						break;
				case 2:
			    		TwoAllocate_List();
						break;
				case 3:
						TwoAllocate_Search();
						break;
				case 4:
						TwoAllocate_Edit();
						break;
				case 5:
						TwoAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void TwoAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("second_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	TwoAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	TwoAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void TwoAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("second_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		TwoAllocateMenu();	
}
void TwoAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("second_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        TwoAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		TwoAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void TwoAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("second_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		TwoAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			TwoAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("second_sem_subjects.txt");
   	    rename("temp2.txt","second_sem_subjects.txt");
		getch();
		TwoAllocateMenu();		
}
void TwoAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("second_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		TwoAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("second_sem_subjects.txt");
		rename("temp.txt","second_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		TwoAllocateMenu();
	}
}

/* ************************************************* Third Sem Allocate Menu ********************************************* */
void ThreeAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Alloted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						ThreeAllocate_Add();
						break;
				case 2:
			    		ThreeAllocate_List();
						break;
				case 3:
						ThreeAllocate_Search();
						break;
				case 4:
						ThreeAllocate_Edit();
						break;
				case 5:
						ThreeAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void ThreeAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("third_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	ThreeAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	ThreeAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void ThreeAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("third_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		ThreeAllocateMenu();	
}
void ThreeAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("third_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        ThreeAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThreeAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }	
}
void ThreeAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("third_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		ThreeAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			ThreeAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("third_sem_subjects.txt");
   	    rename("temp2.txt","third_sem_subjects.txt");
		getch();
		ThreeAllocateMenu();		
}
void ThreeAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("third_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		ThreeAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("third_sem_subjects.txt");
		rename("temp.txt","third_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		ThreeAllocateMenu();
	}
}

/* ************************************************* Fourth Sem Allocate Menu ********************************************* */
void FourAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem Alloted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						FourAllocate_Add();
						break;
				case 2:
			    		FourAllocate_List();
						break;
				case 3:
						FourAllocate_Search();
						break;
				case 4:
						FourAllocate_Edit();
						break;
				case 5:
						FourAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void FourAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("fourth_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	FourAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FourAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FourAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("fourth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		FourAllocateMenu();	
}
void FourAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("fourth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FourAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FourAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("fourth_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FourAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FourAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("fourth_sem_subjects.txt");
   	    rename("temp2.txt","fourth_sem_subjects.txt");
		getch();
		FourAllocateMenu();		
}
void FourAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("fourth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FourAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("fourth_sem_subjects.txt");
		rename("temp.txt","fourth_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FourAllocateMenu();
	}
}

/* ************************************************* Fifth Sem Allocate Menu ********************************************* */
void FiveAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem Alotted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						FiveAllocate_Add();
						break;
				case 2:
			    		FiveAllocate_List();
						break;
				case 3:
						FiveAllocate_Search();
						break;
				case 4:
						FiveAllocate_Edit();
						break;
				case 5:
						FiveAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void FiveAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("fifth_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	FiveAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	FiveAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FiveAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("fifth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		FiveAllocateMenu();	
}
void FiveAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("fifth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FiveAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FiveAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FiveAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("fifth_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FiveAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FiveAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("fifth_sem_subjects.txt");
   	    rename("temp2.txt","fifth_sem_subjects.txt");
		getch();
		FiveAllocateMenu();		
}
void FiveAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("fifth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FiveAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("fifth_sem_subjects.txt");
		rename("temp.txt","fifth_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FiveAllocateMenu();
	}
}
/* ************************************************* Sixth Sem Allocate Menu ********************************************* */
void SixAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem Alloted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						SixAllocate_Add();
						break;
				case 2:
			    		SixAllocate_List();
						break;
				case 3:
						SixAllocate_Search();
						break;
				case 4:
						SixAllocate_Edit();
						break;
				case 5:
						SixAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void SixAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("sixth_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	SixAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SixAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SixAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("sixth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		SixAllocateMenu();	
}
void SixAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("sixth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SixAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SixAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("sixth_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SixAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SixAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("sixth_sem_subjects.txt");
   	    rename("temp2.txt","sixth_sem_subjects.txt");
		getch();
		SixAllocateMenu();		
}
void SixAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("sixth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SixAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("sixth_sem_subjects.txt");
		rename("temp.txt","sixth_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SixAllocateMenu();
	}
}
/* ************************************************* Seventh Sem Allocate Menu ********************************************* */
void SevenAllocateMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem Alotted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						SevenAllocate_Add();
						break;
				case 2:
			    		SevenAllocate_List();
						break;
				case 3:
						SevenAllocate_Search();
						break;
				case 4:
						SevenAllocate_Edit();
						break;
				case 5:
						SevenAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void SevenAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("seventh_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	SevenAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	SevenAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SevenAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("seventh_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		SevenAllocateMenu();	
}
void SevenAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("seventh_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SevenAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SevenAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SevenAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("seventh_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SevenAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SevenAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("seventh_sem_subjects.txt");
   	    rename("temp2.txt","seventh_sem_subjects.txt");
		getch();
		SevenAllocateMenu();		
}
void SevenAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("seventh_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SevenAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("seventh_sem_subjects.txt");
		rename("temp.txt","seventh_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SevenAllocateMenu();
	}
}

/* ************************************************* Eight Sem Allocate Menu ********************************************* */
void EightAllocateMenu(void)//function decleration
{
int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem Alloted Teachers");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Record");
		gotoxy(20,7);
		printf("2. View Record");
		gotoxy(20,9);
		printf("3. Search Record");
		gotoxy(20,11);
		printf("4. Edit Record");
		gotoxy(20,13);
		printf("5. Delete Record");
		gotoxy(20,15);
		printf("6. Back to Menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						EightAllocate_Add();
						break;
				case 2:
			    		EightAllocate_List();
						break;
				case 3:
						EightAllocate_Search();
						break;
				case 4:
						EightAllocate_Edit();
						break;
				case 5:
						EightAllocate_Delete();
						break;
				case 6:
						AllocateMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void EightAllocate_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("eighth_sem_subjects.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW SUBJECT TEACHER             ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ******************************************* SUBJECT ID ************************************************************** */	    
	
	printf("\n\t\t\tSubject Code: ");
    scanf("%s",all.subcode);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tSubject Name: ");
    scanf("%s %s",all.subfname,all.sublname);
    
/* ******************************************* TEACHER ID ************************************************************** */	    
	
	printf("\n\t\t\tStaff ID: ");
    scanf("%s",all.tid);

/* ******************************************* Subject Name ************************************************************** */	    
	printf("\n\t\t\tTeacher Name: ");
    scanf("%s %s",all.tfname,all.tlname);
    
	fprintf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	EightAllocate_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	EightAllocateMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void EightAllocate_List(void)
{
		int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("eighth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Subjects with Teachers !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		
		gotoxy(1,16);
	printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			row++;
		}
		fclose(ek);
		getch();
		EightAllocateMenu();	
}
void EightAllocate_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("eighth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Subject !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if(strcmp(all.subcode,name)==0)
		{
		gotoxy(1,15);
		printf("Subject Code");
		gotoxy(20,15);
		printf("Subject Name");
		gotoxy(40,15);
		printf("Staff ID");
		gotoxy(60,15);
		printf("Teacher Name");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",all.subcode);
			gotoxy(20,row);
			printf("%s %s",all.subfname,all.sublname);
			gotoxy(40,row);
			printf("%s",all.tid);
			gotoxy(60,row);
			printf("%s %s",all.tfname,all.tlname);
			break;
		}
	   }
	   if(strcmp(all.subcode,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        EightAllocate_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EightAllocateMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void EightAllocate_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("eighth_sem_subjects.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		EightAllocateMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Subjects Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Subject Code : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			EightAllocateMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
		{
			if(strcmp(all.subcode, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%s \t%s \t%s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				gotoxy(12,22);
				printf("Enter New Subject Code: ");
				scanf("%s",all.subcode);
				gotoxy(12,24);
				printf("Enter New Subject Name: ");
				scanf("%s %s",all.subfname,all.sublname);    
				gotoxy(12,26);
				printf("Enter New Teacher ID: ");
				scanf("%s",all.tid);
				gotoxy(12,28);
				printf("Enter New Teacher Name: ");
				scanf("%s %s",all.tfname,all.tlname);  
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
				printf("\n\n\t\t\tSubject record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("eighth_sem_subjects.txt");
   	    rename("temp2.txt","eighth_sem_subjects.txt");
		getch();
		EightAllocateMenu();		
}
void EightAllocate_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("eighth_sem_subjects.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Subjects Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Subject Code to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname)!=EOF)
	{
		if (strcmp(all.subcode,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
		else 
		{
			printf("%s %s %s %s %s %s  \n",all.subcode,all.subfname,all.sublname,all.tid,all.tfname,all.tlname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		EightAllocateMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("eighth_sem_subjects.txt");
		rename("temp.txt","eighth_sem_subjects.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		EightAllocateMenu();
	}
}



