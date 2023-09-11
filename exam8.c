#include<stdio.h>
struct Marks{

	int roll_no;
	char name[50];
	float chem_marks,maths_marks,phy_marks;
};	

int main()
{
	int i;
	struct Marks marks[5];
	for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
		
		printf("Enter a roll-no :\n");
		scanf("%d",&marks[i].roll_no);
		
		printf("Enter a name :\n");
		scanf("%s",&marks[i].name);
		
		printf("Enter a chemistry marks :\n");
		scanf("%f",&marks[i].chem_marks);
		
		printf("Enter a maths marks :\n");
		scanf("%f",&marks[i].maths_marks);
		
		printf("Enter a physics marks :\n");
		scanf("%f",&marks[i].phy_marks);
	}
	
	for(i=0;i<5;i++)
	{
		
		printf("Student %d\n",i+1);
		float percentage=(marks[i].chem_marks+marks[i].maths_marks+
		marks[i].phy_marks)/300.0*100;
		
		printf("Percentages Of Student :%f\n",percentage);
	}
	
	return 0;
}
