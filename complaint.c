#include <stdio.h>
#include<string.h>
#include "plane_utils.h"


int book_complaint(char username[],char phno[]){
	char* arr[5];
	char a[100];
	printf("choose the option which you feel about to complaint:\n");
	printf("1.Flight delays or cancellantions: If flight system causes delayes or cancellatons\n");
	printf("2.Inaccurate flight information: If flight management server info is inaccurate\n");
	printf("3.Poor communication : If the flight updates are not timely you can book this complaint\n");
	printf("4.Uncomfartable or unsafe flight conditions:If you feel our flight is unsafe or uncomfartable choose this\n");
	printf("5.Poor customer service:Passenger may complaint if hospitality is not good\n");
	printf("6.other\n");
	int n;
	scanf("%d",&n);
	arr[0] = "Flight delays or cancellantions: If flight system causes delayes or cancellatons\n";
	arr[1] = "Inaccurate flight information: If flight management server info is inaccurate\n";
	arr[2] = "Poor communication : If the flight updates are not timely you can book this complaint\n";
	arr[3] = "Uncomfartable or unsafe flight conditions:If you feel our flight is unsafe or uncomfartable choose this\n";
	arr[4] = "Poor customer service:Passenger may complaint if hospitality is not good\n";
	if(n==6){
		fgets(a,100,stdin);
	}
	//we have to open a file and print name and phn number and his complaint and if he chooses option 6 then we will scan and print that string in our file.
	FILE *fcomplaints = fopen("complaints.txt","a");
	if(1 <= n <= 5){
		fprintf(fcomplaints,"%s %s %s\n",username,phno,arr[n-1]);
		}
	else if(n==6){
		fprintf(fcomplaints,"%s %s %s\n",username,phno,a);
	}	
	fclose(fcomplaints);
	printf("Your complaint is successfully booked! Hope this may not repeat again:)");
	return 0;
}


void print_about(){
	printf("Air Ticket Management System");
	return;
}