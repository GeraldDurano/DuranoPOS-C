#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <malloc.h>
#include<conio.h>


typedef struct {
	char *name;
	float price;
} datainfo;

typedef struct {
	int code;
	char *name;
	float price;
	int quantity;
}tmplt;

static datainfo datas[] =
{
	{"Loaded Fries"	, 150.00},
	{"Sisig w/ Rice" , 130.00},
	{"Beach Cocktail" , 80.00},
	{"Choco Rhum"	  ,120.00},
	{"Tempura"		, 50.00}

};

static tmplt list[] = {};


void updateList(int index, int c, int q){
	list[index].code = c;
	list[index].name = datas[c-1].name;
	list[index].quantity = q;
	list[index].price = q * datas[c-1].price;
}


int main(){
	int count, listc;
	char cname[15], input;
	int i;
	int icode = 1, quan;

	//Get item count
	for(count=0; datas[count].name != '\0'; count++);

	printf("|||CONSUELO'S BEACH & COCKTAIL BAR||| \n");
	int main(int argc,char **argv)
{

struct stat ImageStat;

unsigned int ImageSize=0;

char *ImageBuffer = NULL;

int ImageFileDescp = 0;



   if (argc!=2){
    printf("Usage: ./a.out <filename.jpg> \n");
return 0;
}

// Getting the stat of image file

   stat(argv[1],&ImageStat);

   ImageSize = ImageStat.st_size;

  printf("Iamge Size is %d\t\n",ImageSize);


   // Allocate memory for the image

ImageBuffer = (char *)malloc(ImageSize);

ImageFileDescp = open(argv[1],0600);
// Reading the image
read(ImageFileDescp,ImageBuffer,ImageSize);

// Do the processing

//

// close the file.
close(ImageFileDescp);
free(ImageBuffer);
return 0;
 }


	//Input cashier's name
	do{
		printf("\nEnter cashier's name : ");
		fflush(stdin);
	}while(scanf("%s", &cname) != 1);

	printf("\nOur Available Menu and Drinks.\n\n");

	//Printing list of menu
	printf("\nCode \t Name \t\t Price\n");
	for(i=0; i < count; i++){
		printf("%d \t %s \t P%.2f \n", i+1,datas[i].name,datas[i].price);
	}

	printf("\n\n");

	order:

	//Get list count
	for(listc=0; list[listc].code != '\0'; listc++);
	int t = 0;

	//Get menu code

	do{

		if(t > 0){
			printf("Please input valid code.\n\n");
		}

		printf("Please select menu code : ");
		fflush(stdin);
		t++;
	}while(scanf("%d", &icode) != 1 || icode > count || icode < 1);


	t = 0;
	//Get quantity
	do{
		if(t > 0){
			printf("Please input valid quantity amount.\n\n");
		}
		printf("Quantity : ");
		fflush(stdin);
		t++;
	}while(scanf("%d", &quan) != 1 || quan < 1);
	fflush(stdin);
	int validate = 0;
		if(listc == 0){
			updateList(0,icode,quan);
		}else{
			for(i=0; i < listc; i++){
				if(list[i].code == icode){
				//		printf("code , icode : %d %d\n", list[i].code, icode);
					updateList(i,icode,quan);
					break;
				}else{
					validate = 1;
				}

			}

				if(validate == 1){
				//	printf("i : %d\n", i);
					updateList(i,icode,quan);
				}
		}





	t = 0;
	//Get validation
	do{
		if(t > 0){
			printf("Please input valid input (Y or N).\n\n");
		}
		printf("Would you like to order another? ");
		fflush(stdin);
		t++;
	}while(scanf("%c", &input) != 1 || tolower(input) != 'y' && tolower(input) != 'n');
	for(listc=0; list[listc].code != '\0'; listc++);
	printf("\n");
	printf("Code \t Name \t\t Qty \t Price \n");
	int c;
	for(c =0; c < listc; c++){
		printf("%d\t %s \t %d \t P%.2f\n", list[c].code, list[c].name, list[c].quantity, list[c].price);
	}
	printf("\n");
	if(tolower(input) == 'y'){
		goto order;
	}

	float totalbill, vat, net, recieved, change;
	for(i=0; i<listc;i++){
		totalbill = totalbill + list[i].price;
	}
	vat = totalbill * .12;
	net = totalbill - vat;
	printf("\nTotal bill : P%.2f", totalbill);
	printf("\nVAT: P%.2f", vat);
	printf("\nNET: P%.2f\n\n", net);

	do{
		printf("Amount recieved : ₱");
		fflush(stdin);
	}while(scanf("%f", &recieved) != 1 || recieved < totalbill);
	change = recieved - totalbill;
	printf("\nChange : P%.2f", change);

	printf("\n\nTotal bill : P%.2f", totalbill);
	printf("\nVAT: P%.2f", vat);
	printf("\nNET: P%.2f\n\n", net);
	printf("Amount recieved : P%.2f", recieved);
	printf("\nChange : P%.2f", change);
	printf("\n\nTransact by : %s\n\n\n\ ", cname);
	printf("Thank you for ordering");
	 time_t s, val = 1;
    struct tm* current_time;

    // time in seconds
    s = time(NULL);

    // to get current time
    current_time = localtime(&s);

    // print time in minutes,
    // hours and seconds
    printf("%02d:%02d:%02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);


	return 0;
}

