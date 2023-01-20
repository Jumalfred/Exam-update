#include<stdio.h>
#include<math.h>
int main(){
	int point,no,marks,Totalpoints=0,totalmarks;
	char sub[10],grade[] = "EDCBA";
		printf("Enter the number of subjects : ");
		scanf("%d",&no);
	int i = 0;
	for(i; i < no; i++){
			printf("Enter the name of the subject :");
			scanf("%s",&sub);
			printf("Enter marks scored in %s :",sub);
			scanf("%d",&marks);
	if(marks >= 70){
		point =4;
		printf("Grade attained in %s is :%c,%d points gained.\n",sub,grade[point],point);
//		printf
	}
	else if(marks >= 60){
		point = 3;
		printf("Grade attained in %s is :%c,%d points gained.\n",sub,grade[point],point);
	}
	else if(marks >= 50){
		point = 2;
		printf("Grade attained in %s is :%c,%d points gained.\n",sub,grade[point],point);
	}
	else if(marks >= 40){
		point = 1;
		printf("Grade attained in %s is :%c,%d point gained.\n",sub,grade[point],point);
	}
	else if(marks < 40){
		point = 0;
		printf("Grade attained in %s is :%c, Retake ahead !!\n",sub,grade[point]);
	}
	Totalpoints += point;
	totalmarks += marks;
}
float points = (Totalpoints+0.0)/(no+0.0);
int check = round(points);
printf("Total Marks is :%d\n",totalmarks);
printf("Points attained is : %d/%d\n",Totalpoints,no*4);
printf("Overall grade :%c\n",grade[check]);
}
