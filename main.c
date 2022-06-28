#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
int main()
{
char name[100];
bool arr[3]={0};
int A[3];
time_t t;
srand((unsigned)time(&t));
int number,score=0,num;
float total, wrong=0;
int ans,i,j;
printf("\n\n\t...............................welcome to our quiz project..........................\n\n\n");
printf("\t\t\tEnter your name:");
gets(name);
printf("\n\n\t\t\tEnter your code:");
scanf("%d",&j);
printf("\n\n\n\n\n\t\t\t\tplease,enter your favorite subject!\n\n");
printf("\t\t\tPHYSICS enter [1]\n\n");
printf("\t\t\tCSE  enter [2]\n\n");
printf("\t\t\tMATH enter [3]\n\n");
printf("\t\t\texit enter [4]\n\n");
printf("\t\t\tenter your decision:");
scanf("%d",&number);
switch(number)
{
case 1: printf("\t\t\twelcome to physics");
printf("\n\t\t\tThere are 30 MCQ");
printf("\n\t\t\tThe MCQ will be REANDOMLY set for you");
printf("\n\t\t\tGet 2 number for each correct answer");
printf("\n\t\t\tNegative marking allowed\n");
printf("\t\t\tFor each wrong answer minus  -.5 will be done\n\n");
for(i=0; i<3; i++)
{
int r = rand()%3;
if(!arr[r])
A[i]= r;
else
i--;
arr[r]=1;
}
for(i=0; i<3; i++)
{
switch(A[i])
{
case 0:
printf("*. Physical sciences were divided into:");
printf("\n[1]4 disciplines\n[2]3 disciplines\n[3]5 disciplines\n[4]6 disciplines");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Albert Einstein was awarded Nobel Prize for his path-breaking research and formulation of the:");
printf("\n[1] Theory of Relavitity \n[2] Laws of P\n[3] Principle of Wave-Particle Duality \n[4] Theory of Critical Opalescence");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which one of the following types of Laser is used in Laser Printers?\n[1] Semiconductor laser \n[2] Excimer Laser \n[3] Dye Laser \n[4] Gas Laser");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. The power of a lens is measured in : \n[1] diopters \n[2] aeon \n[3] lumen \n[4] candela");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. If a moving body turns its speed to 1.5 times, what will be the impact on its kinetic energy?");
printf("\n[1] will become 1.5 times \n[2] will become 3 times \n[3] will become 2.25 times \n[4] will become 6 times");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Two Flat mirrors are placed at an angle of 60° from each other. How many images will be formed of a Candle placed in between them? ");
printf("\n[1] 3 \n[2] 5 \n[3] 4 \n[4] 6");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following is the SI physical unit of dynamic viscosity? \n[1] Poise \n[2] Pascal-second \n[3] Newton-second \n[4] Poise-second");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. An antenna in a Geostationary satellite should have a minimum beam width of which among the following values to cover the entire earth?");
printf("\n[1] 08.56° \n[2] 17.34° \n[3] 22.16° \n[4] 23.25°");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following is studied under ” fulminology”? \n[1] Sudden changes in atmosphere \n[2] Lightning \n[3] Cloudbursts \n[4] Volcanic Eruptions");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following has the lowest frequency Range? \n[1] L-Band \n[2] S-Band \n[3] C-Band \n[4] X-Band");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
break;/////////
case 1:
printf("*. In many countries with cold climates, the municipalities often sprinkle salt on icy roads in winter.  Which among the following is the correct reason for this.");
printf("\n[1] The Salt inhibits the formation of Ice Crystals \n[2] The Salt lowers the Freezing Point of water \n[3] The Salt raises the freezing Point of water\n[4] The salt provides necessary friction to the tires of the vehicles");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following correctly represents a Parsec? \n[1] 0.326 Light Years \n[2] 3.261 Light Years \n[3] 32.61 Light Years \n[4] 3.026 Light Years");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. “Fermi” is a unit of which among the following? \n[1] Length \n[2] Mass \n[3] Velocity \n[4] Frequency");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which among the following property of the matter is studied in “Rheology”? \n[1] Gravitation \n[2] Viscosity \n[3] Magnetic Properties \n[4] Entropy");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. The term “Isopycnic” is most closely defined by which among the following? \n[1] Two places with same atmospheric pressure \n[2] Two liquids with same viscosity \n[3] Two liquids with same density \n[4] Two places with same temperature");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Which among the following is measured by an Odometer? \n[1] Pressure \n[2] Height \n[3] Distance \n[4] Velocity");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. The power we use at Home has a frequency of 60Hz. What would be the period of the sine wave? \n[1] 0.116 seconds \n[2] 0.0116 seconds \n[3] 0.00116 secon \n[4] 0.0016 Microseconds ");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following waves are used in the gemstone industry to change white topaz into blue topaz? \n[1] X-Rays \n[2] Gamma Rays \n[3] Alpha Radiation \n[4] Beta Radiation");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following waves are most commonly used in the Night Vision Devices? \n[1] Microwaves \n[2] Infra Red Waves \n[3] Ultra Violet Waves \n[4] Radio Waves");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Which among the following strictly works on the principle of dipole movement of the water molecules? \n[1] Refrigerator \n[2] Microwave Oven \n[3] Air Conditioner \n[4] Electric Geyser");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
break;////////
case 2:
printf("*. Which among the following is the most common cause of Sunburn? \n[1] Ultraviolet Radiation \n[2] Visible Radiation \n[3] Infrared Radiation \n[4] Microwave Radiation");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;

}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. One Torr is equivalent to how many mm of Mercury? \n[1] 1 mm \n[2] 10 mm \n[3] 100 mm \n[4] 0.1 mm");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. “Svedberg Unit” is a unit of _______? \n[1] Concentration \n[2] Size \n[3] Density \n[4] Time");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. A vehicle moving on a circular path experiences ______? \n[1] centripetal force \n[2] centrifugal force \n[3] gravitational force \n[4] None of the above");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. At which of the following places water shall boil at the lowest temperature? \n[1] Kochi \n[2] ooty \n[3] Mount Abu \n[4] New Delhi");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. In which year, Sir Chandrasekhara Venkata Raman was awarded Nobel Prize for Raman effect? \n[1] 1927 \n[2] 1929 \n[3] 1930 \n[4] 1932");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Which among the following are used in Computed tomography (CT) Scan? \n[1] X-Rays \n[2] Ultrasound \n[3] Infrared waves \n[4] Radio Waves");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which among the following instruments used in Forensic Sciences is popular as Lie detector? \n[1] SmartWater \n[2] Culpascope \n[3] Polygraph \n[4] Bio Sensor");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. An electrical fuse is used to interrupt excessive________? \n[1] Voltagen[2] Current \n[3] Resistance \n[4] Inductance");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. Who among the following coined the term “cosmic rays” ? \n[1] Henri Becquereln\n[2] Theodor Wulf \n[3] Robert Millikan \n[4] Bruno Rossi");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
break;///////
default : puts("\t\t\tplease you enter displayed number");/////////////////////////////1st
}}break;

case 2: puts("\n\t\t\twelcome to cse");
printf("\n\t\t\tThere are 30 MCQ");
printf("\n\t\t\tThe MCQ will be REANDOMLY set for you");
printf("\n\t\t\tGet 2 number for each correct answer");
printf("\n\t\t\tNegative marking allowed\n");
printf("\t\t\tFor each wrong answer minus  -.5 will be done\n\n");

for(i=0; i<3; i++)

{
int r = rand()%3;
if(!arr[r])
A[i]= r;
else
i--;
arr[r]=1;
}
for(i=0; i<3; i++)
{

switch(A[i])

{

case 0:
printf("*. C99 standard guarantees uniqueness of __ characters for internal names.\n1) 31 \n2) 63 \n3) 12 \n4) 14");

printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. C99 standard guarantees uniqueness of ___ characters for external names.\n1) 31\n2) 6\n3) 12\n4) 14");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which of the following is not a valid variable name declaration?\n1) int __a3;\n2) int __3a;\n3) int __A3;\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which of the following is not a valid variable name declaration?\n1) int _a3;\n2) int a_3;\n3) int 3_a;\n4) int _3a");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Why do variable names beginning with the underscore is not encouraged?\n1) It is not standardized\n2) To avoid conflicts since assemblers and loaders use such names\n3) To avoid conflicts since library routines use such names\n4) To avoid conflicts with environment variables of an operating system");

printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. All keywords in C are in ____________\n1) LowerCase letters\n2) UpperCase letters\n3) CamelCase letters\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Variable name resolution (number of significant characters for the uniqueness of variable) depends on ___________\n1) Compiler and linker implementations\n2) Assemblers and loaders implementations\n3) C language\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which of the following is not a valid C variable name?\n1) int number;\n2) float rate;\n3) int variable_count;\n4) int $main");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which of the following is true for variable names in C?\n1) They can contain alphanumeric characters as well as special characters\n2) It is not an error to declare a variable to be one of the keywords(like goto, static)\n3) Variable names cannot start with a digit\n4) Variable can be of any length");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. A variable declared in a function can be used in main().\n1) True\n2) False\n3) True if it is declared static\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}

break;///1///
case 1:
printf("*. Which of the following declaration is illegal?\n1) char *str = “Best C programming classes by Sanfoundry”;\n2) char str[] = “Best C programming classes by Sanfoundry”;\n3) char str[20] = “Best C programming classes by Sanfoundry”;\n3) char[] str = “Best C programming classes by Sanfoundry”;");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which keyword is used to prevent any changes in the variable within a C program?\n1) immutable\n2) mutable\n3) const\n4) volatile");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Which of the following is not a pointer declaration?\n1) char a[10];\n2) char a[] = {‘1’, ‘2’, ‘3’, ‘4’};\n3) char *str;\n4) char a;");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which of the following statement is false?\n1) A variable defined once can be defined again with different scope\n2) A single variable cannot be defined with two different types in the same scope\n3) A variable must be declared and defined at the same time\n4) A variable refers to a location in memory");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. The name of the variable used in one function cannot be used in another function.\n1) True\n2) False\n3) May be\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. The C code ‘for(;;)’ represents an infinite loop. It can be terminated by ___________\n1) break\n2) exit(0)\n3) abort()\n4) terminate");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which for loop has range of similar indexes of ‘i’ used in for (i = 0;i < n; i++)?\n1) for (i = n; i>0; i–)\\n3) for (i = n-1; i>0; i–)\n4) for (i = n-1; i>-1; i–)");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which of the following cannot be used as LHS of the expression in for (exp1;exp2; exp3)?\n1) Variable\\n3) typedef\n4) macros");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. Which is correct with respect to the size of the data types?\n1) char > int > float\n2) int > char > float\n3) char < int < double\n4) double > char > int");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. Which of the data types has the size that is variable?\n1) int\n2) struct\n3) float\n4) double");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:2\n");}
break;///2///
case 2:

printf("*. Property which allows to produce different executable for different platforms in C is called?\n1) File inclusion\n2) Selective inclusion\n3) Conditional compilation\n4) Recursive macros");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==3)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*. What is #include <stdio.h>?\n1) Preprocessor directive\n2) Inclusion directive\n3) File inclusion directive\n4) None of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. C preprocessors can have compiler specific features.\\n2) False\n3) Depends on the standard\n4) Depends on the platform");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else {printf("wrong!!!");
printf("correct answer:1\n");}
printf("* . C preprocessor is conceptually the first step during compilation.\n1) True\n2) False\n3) Depends on the compiler\n4) Depends on the standard");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else {printf("wrong!!!");
printf("correct answer:1\n");}
printf(" *. Preprocessor feature that supply line numbers and filenames to compiler is called?\n1) Selective inclusion\n2) macro substitution\n3) Concatenation\n4) Line control");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}else {printf("wrong!!!");/////
printf("correct answer:4\n");}

printf("*. #include <somefile.h> are _____ files and #include “somefile.h” ______ files.\n1) Library, Library\n2) Library, user-created header\n3) User-created header, library\n4) They can include all types of file");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==4)
{
score+=1;
}else {printf("wrong!!!");
printf("correct answer:4\n");}
printf("*. What is a preprocessor?\\n2) That is nothing but a loader\\n4) All of the mentioned");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}else{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*. Which directory the compiler first looks for the file when using #include?\n1)Different C:COMPILERINCLUDE\n2) C:COMPILERINCLUDE\n4) Both C:COMPILERINCLUDE and S:SOURCEHEADERS simultaneously");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}else {printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. What would happen if you create a file stdio.h and use #include “stdio.h”?\n1) The predefined library file will be selected\n2) The user-defined library file will be selected\n3) Both the files will be included\n4) The compiler won’t accept the program");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==2)
{
score+=1;
}else {printf("wrong!!!");
printf("correct answer:2\n");}
printf("*. What is the sequence for preprocessor to look for the file within <>?\n1) The predefined location then the current directory\n2) The current directory then the predefined location\n3) The predefined location only\n4) The current directory location");
printf("\nanswer:");
scanf("%d",&ans);
if(ans==1)
{
score+=1;
}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
break;///3///
default :
puts("\t\t\tplease you enter displayed number");
}}break;
case 3:puts("welcome to math");
printf("\n\t\t\tThere are 30 MCQ");
printf("\n\t\t\tThe MCQ will be REANDOMLY set for you");
printf("\n\t\t\tGet 2 number for each correct answer");
printf("\n\t\t\tNegative marking allowed\n");
printf("\t\t\tFor each wrong answer minus  -.5 will be done\n\n");
for(i=0; i<3; i++)
{
int r = rand()%3;
if(!arr[r])
A[i]= r;
else
i--;
arr[r]=1;
}
for(i=0; i<3; i++)
{
switch(A[i])
{
case 0:
printf("*:If 2 sets A and B are given, then set consisting of all elements which are either in A or in B or in both is called:\n1:Intersection of A and B\n2:union of A and B\n3:Complement of A\n4:Complement of B\nanswer:");
scanf("%d",&ans);
if(ans==2){
score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:If U = {1,2,3,4,5} and A = {2,4} then A' should be \n1:{2,4,5}\n2:{2,4}\n3:{1,2,3,4,5}\n{1,3,5}\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*:Set consisting of all first elements of each ordered pair in relation is called\n1:subset\n2:domain of relation\n3:range of relation\n4:complement of a set\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:Number of elements in power set {1, 2, 3} are\n1:5\n2:6\n3:7\n4:8\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*: Range of R = {(0, 2), (2, 4), (3, 4), (4, 5)} is\n1:{0, 2, 4, 5}\n2:{0, 2, 3, 4}\n3:{2, 4, 5}\n4:{3, 4, 5}\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*: A set containing only one element is said to be\n1:subset\n2:singleton set\n3:power set\n4:empty set\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:Union of set A and B is denoted by\n1:A + B\n2:A - B\n3:A∩B\n4:A∪B\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*: If X = {1, 2, 3, 4, 5} and Y = {2, 4, 5, 6, 8} then Y - X equals to\n1:{4, 5}\n2:{1, 6}\n3:{6, 8}\n4:{1, 3}\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*:If A = {1, 2, 3, 4} and B = {4, 5, 6, 7} then A∪B should be\n1:{2, 3, 4, 5, 6, 7}\n2:{1, 2, 3, 4, 5, 6, 7}\n3:{4}\n4:{1, 2, 3, 5, 6, 7}\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:Set N = {1, 2, 3, 4, 5.....} is known as\n1:set of odd numbers\n2:set of whole numbers\n3:set of natural numbers\n4:set of even numbers\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
break;////
case 1:
printf("*:If two quantities are related in such a way that increase in 1 quantity causes increase in other quantity, then this variation is said to be\n1:joint variation\n2:extreme variation\n3:direct variation\n4:inverse variation\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*: In a : b = c : d, b and c are called\n1:antecedent\n2:extreme \n3:consequent\n4:mean\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*:In ratio a : b, first term a is called\n1:antecedent\n2:extreme \n3:consequent\n4:mean\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*: According to theorem of alternando if a : b = c : d then\n1:b : a = d : c\n2:a : c = b : d\n3:a : d = b : c\n4:a + b = c + d\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:Symbolically proportion of a, b, c, d is written as\n1:a : b : : c : d\n2:a + b : : c + d\n3:a + b = c + d\n4:a - b = c - d\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}
else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*:In ratio a : b, second term b is called\n1:antecedent\n2:extreme \n3:consequent\n4:mean\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*:Unit of ratio is\n1:cm\n2:inches\n3:no unit\n4:radians\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
printf("*: If two quantities are related in such a way that when 1 quantity increases, other quantity decreases, then this variation is said to be\n1:extreme variation\n2:joint variation\n3:direct variation\n4:inverse variation\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*: Ratio of a and b should be written as\n1:a : b\n2:a + b\n3:b + a\n4:b : a\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*:Types of variations are\n1:1\n2:2\n3:3\n4:4\nanswer:");
scanf("%d",&ans);
if(ans==3){score++;}else
{printf("wrong!!!");
printf("correct answer:3\n");}
break;
case 2:
printf("*:Vertical angles that are opposite to each other are also\n1:not equal\n2:opposite\n3:scalene\n4:equal\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*:Two lines that make an angle are called\n1:scalene\n2:rays\n3:segment\n4:vertex\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*:Surface area of hollow cylinder with radius ‘r’ and height ‘h’ is measured by\n1:2πr - h\n2:2πr + h\n3:πrh\n4:2πrh\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*: A polygon having 10 sides is called \n1:decagon\n2:heptagon\n3:quadrilateral\n4:hexagon\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*:A polygon having 8 sides is called \n1:hexagon\n2:nonagon\n3:decagon\n4:octagon\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*:A triangle that has no equal sides and no equal angles is known as\n1:isosceles triangle\n2:scalene triangle\n3:equilateral triangle\n4:right angle\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*: Perimeter of a rectangle with base ‘b’ and height ‘h’ is measured by\n1:2 * b⁄h\n2:2(h + b)\n3:2(b - h)\n4:2(h - b)\nanswer:");
scanf("%d",&ans);
if(ans==2){score++;}else
{printf("wrong!!!");
printf("correct answer:2\n");}
printf("*: Area of a rectangle with base ‘b’ and height ‘h’ is measured by\n1:b × h\n2:b + h\n3:b⁄h\n4:h⁄b\nanswer:");
scanf("%d",&ans);
if(ans==1){score++;}else
{printf("wrong!!!");
printf("correct answer:1\n");}
printf("*:A line going through midpoint from one side to other side of a circle is called\n1:angle\n2:area\n3:radius\n4:diameter\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
printf("*:Exterior angles of any polygon sum up to\n1: 90°\n2:180°\n3:270°\n4:360°\nanswer:");
scanf("%d",&ans);
if(ans==4){score++;}else
{printf("wrong!!!");
printf("correct answer:4\n");}
break;
default :
puts("\t\t\tplease you enter displayed number");}

}break;

case 4: puts("\t\t\tThank you");
break;
default :
puts("\n\n\t\t\tplease you enter displayed number!!!");
}
printf("\n\n\t\t\tcorrect MCQ is %d\n\n",score);
wrong=30-score;
wrong=(wrong*.5);
total=((score*2)-wrong);
printf("\t\t\tyor total number of exam:%f\n\n",total);
if(total>=20 &&total<=29)
printf("\t\t\tyour mark is average");
else if(total>=30 && total<=39)
printf("\t\t\tyour mark is good");
else if(total>=40 && total<=60)
printf("your mark is best");
else
{
printf("\t\t\tyour mark is poor");

}
return 0;
}
