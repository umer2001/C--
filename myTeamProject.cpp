#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
/*----------------------------------Function Declaration------------------------------------*/
void rules();
int * random();
string remarks(int);
void result(int);
/*--------------------------------Function Definations------------------------------------*/
void rules() {
	cout<<"\n\n\t\t\t\t\t ______ _   _ _     _____ _____ \n";
	cout<<"\t\t\t\t\t| ___ | | | | |   |  ___/  ___|\n";
	cout<<"\t\t\t\t\t| |_/ | | | | |   | |__ \\ `--. \n";
	cout<<"\t\t\t\t\t|    /| | | | |   |  __| `--. \\ \n";
	cout<<"\t\t\t\t\t| |\\ \\| |_| | |___| |___/\\__/ /\n";
	cout<<"\t\t\t\t\t\\_| \\_|\\___/\\_____\\____/\\____/ \n";
	cout<<"\n\n\t[1] You Will Be Given 6 M.C.Q.s,Each Will Have 3 Choices...!";
	cout<<"\n\n\t[2] Each Correct Answer Adds One Point To Score";
	cout<<"\n\n\t[3] You Have To Select Only One Option, And Enter Option Number Using Keyboard.";
	cout<<"\n\n\t[4]  Only Enter The Option Number Of Desired option example : 2";
	cout<<"\n\n\t[5] After entering the desired option click ENTER .";
	cout<<"\n\n\t BEST OF LUCK...!";
	cout<<"\n\n\t Press any key to start...";
	getch();
	system("CLS");
}
int * random() {
	int i;
	static int  ran[5];
	time_t my_time = time(NULL);
	string time = ctime(&my_time);
	string a,b,c,d,e,f,g,h ;
	a += time[8];
	b += time[9];
	c += time[11];
	d += time[12];
	e += time[14];
	f += time[15];
	g += time[17];
	h += time[18];
	string dat = a + b ;
	string hou = c + d;
	string min =  e + f;
	string sc = g + h ;
	int date = stoi(dat);
	int hour = stoi(hou);
	int minu = stoi(min);
	int sec= stoi(sc);
	for(i =1 ; i <= 5; i++) {
		ran[i-1] = (date + sec + (i*hour/2) + minu/4)/i;
	}
	return ran;
}
string remarks(int a){
	string remark;
	if( a == 5){
		remark = "EXCELLENT";
	}
	else if( a >= 3){
		remark = "  GOOD   ";
	}
	else {
		remark = "  OKAY   ";
	}
	return remark;
}
void result(int a) {
	system("CLS");
	cout<<"\n\t\t\t\t\t  /////////////////////\n"
 		<<"\t\t\t\t\t // SCORE & REMARKS //\n"
		<<"\t\t\t\t\t/////////////////////\n";
	cout<<"\n\t\t\t\t\t    Your Score : "<<a<<endl;
	if( a <= 1 ) {
		cout<<"\n\t\t  _____  _               _           _   _ \n"
		<<"\t\t |  __ \\(_)             | |         | | | |\n"
		<<"\t\t | |  | |_ _ __ ___  ___| |_ ___  __| | | |__  _   _ \n"
		<<"\t\t | |  | | | '__/ _ \\/ __| __/ _ \\/ _` | | '_ \\| | | |\n"
		<<"\t\t | |__| | | | |  __| (__| ||  __| (_| | | |_) | |_| |\n"
		<<"\t\t |_____/|_|_|  \\___|\\___|\\__\\___|\\__,_| |_.__/ \\__, |\n"
		<<"\t\t  _____       _               _     ____    __  __/ |   ________ _____ _____ _____ ______ \n"
		<<"\t\t |  __ \\     | |             | |   |  _ \\   \\ \\|___/   / |  ____|_   _|  __ |_   _|  ____|\n"
		<<"\t\t | |__) |___ | |__   ___ _ __| |_  | |_) |   \\ \\  /\\  / /| |__    | | | |  | || | | |__\n"
		<<"\t\t |  _  // _ \\| '_ \\ / _ | '__| __| |  _ <     \\ \\/  \\/ / |  __|   | | | |  | || | |  __|\n"
		<<"\t\t | | \\ | (_) | |_) |  __| |  | |_  | |_) _     \\  /\\  /  | |____ _| |_| |__| _| |_| |____\n"
		<<"\t\t |_|  \\_\\___/|_.__/ \\___|_|   \\__| |____(_)     \\/  \\/   |______|_____|_____|_____|______|\n";
	}
	else {
		cout<<"\n\t\t\t\t\t       _ /\\.'|_\n"
			<<"\t\t\t\t\t   _.-| |\\ | / |_\n"
			<<"\t\t\t\t\t  / \\ _>-\"\"\"-._.'|_\n"
			<<"\t\t\t\t\t >`-.'          `./ \\\n"
			<<"\t\t\t\t\t/`./              \\-<\n"
			<<"\t\t\t\t\t`-|    REMARKS :   |_/\n"
			<<"\t\t\t\t\t/_|   "<<remarks(a)<<"    |_\\\n"
			<<"\t\t\t\t\t) |                | |\n"
			<<"\t\t\t\t\t-<|                |\\/\n"
			<<"\t\t\t\t\t`'_\\              /`<\n"
 			<<"\t\t\t\t\t |_/`.          .'\\_/\n"
			<<"\t\t\t\t\t  \\_/ >-.._..-'\\_|\n"
    		<<"\t\t\t\t\t     `-`_| \\_\\|_/\n"
     		<<"\t\t\t\t\t      |   `' |  |\n"
     		<<"\t\t\t\t\t      |      |  |\n"
     		<<"\t\t\t\t\t      |      |  |\n"
     		<<"\t\t\t\t\t      |      |  |\n"
     		<<"\t\t\t\t\t      |      |  |\n"
     		<<"\t\t\t\t\t      |  /\\  |  |\n"
     		<<"\t\t\t\t\t      | /| \\ |\\ |\n"
     		<<"\t\t\t\t\t      |/ |/ \\| \\|\n";
	
		remarks(a);
	}
}
int main() {  
string ques_psl[100] = {
                        "Where Is PSL Hosted This Year? \n\t1.Dubai\n\t2.America\n\t3.Pakistan",
                        "Where Is PSL Hosted Last Year? \n\t1.Dubai\n\t2.America\n\t3.Pakistan",
                        "PSL Stands For? \n\t1.Pakistan super league\n\t2.Pakistan supreme league\n\t3.Pakistan salar league",
                        "Who Is The Captain Of Karachi Kings? \n\t1.Shahid Khan Afridi\n\t2.Imad Wasim\n\t3.Shoaib Malik",
                        "How many teams are participating in PSL this year ?\n\t1.6 \n\t2.4 \n\t3.5",
                        "Who Is The Captain Of Lahore Qalandars? ?\n\t1.Sohail Akhtar \n\t2.Ben Dunk \n\t3.Samit Patel",
                        "Who Is The Captain Of Islamabad United?\n\t1.Faheem Ashraf \n\t2.Asif Ali \n\t3.Shadab Khan",
                        "Who Is The Captain Of Multan Sultan?\n\t1.Shahid Khan Afridi \n\t2.Shan Masood \n\t3.Junaid Khan",
                        "Who Is The Captain Of Quetta Gladiators?\n\t1.Sarfaraz Ahmed \n\t2.Ahmed Shehzad \n\t3.Shane Watson",
                        "Who Is The Captain Of Peshawar Zalmi?\n\t1.Wahab Riaz \n\t2.Darren Sammy \n\t3.Kamran Akmal",
                        "What is PSL called this year \n\t1.PSL 3 \n\t2.PSL 5 \n\t3.PSL 6",
                        "First PSL was held in the year ?\n\t1.2016 \n\t2.2015 \n\t3.2017",
                        "Third PSL or PSL 3 was held in the year ?\n\t1.2017 \n\t2.2016 \n\t3.2018",
                        "Who won PSL 1 ?\n\t1.Multan Sultan \n\t2.Islamabad united \n\t3.Peshawar Zalmi",
                        "Who won PSL 2 ?\n\t1.Islamabad united \n\t2.Quetta Gladiators \n\t3.Peshawar Zalmi",
                        "Who won PSL 3 ?\n\t1.Islamabad united \n\t2.Peshawar Zalmi \n\t3.Karachi Kings",
                        "Who won PSL last year ?\n\t1.Karachi Kings \n\t2.Quetta Gladiators \n\t3.Multan Sultans",
                        "what is the color of Karachi Kings kit ?\n\t1.Red and Blue \n\t2.Blue and White  \n\t3.White and Red",
                        "what is the color of Quetta Gladiators kit ?\n\t1.Purple and Yellow \n\t2.Light Blue and Yellow \n\t3.Dark Blue and Yellow",
                        "what is the color of Islamabad united kit ?\n\t1.Orange and Maroon \n\t2.Orange and Red \n\t3.Yellow and Red",
                        "what is the color of Peshawar Zalmi kit ?\n\t1.Yellow and Sky Blue \n\t2.Yellow and Light Blue \n\t3.Yellow and dark Blue",
                        "what is the color of Multan Sultan kit ?\n\t1.Dark Blue and DarGreen \n\t2.Dark Blue and light Green \n\t3.Blue and light Green",
                        "what is the color of Lahore Qalandars kit ?\n\t1.Green and Silver \n\t2.light Green and Gray \n\t3.Green and Mate Black",
                        "Guess the logo : A Golden loin roaring ?\n\t1.Multan Sultans \n\t2.Islamabad United \n\t3.Karachi Kings",
                        "Guess the logo : Orange face of loin in circle ?\n\t1.Peshawar Zalmi \n\t2.Islamabad United \n\t3.Karachi Kings",
                        "Guess the logo : A Cricketer riding a horse ?\n\t1.Lahore Qalandars \n\t2.Multan Sultan \n\t3.Islamabad United",
                        "Guess the logo : A man, wickets and a ball ?\n\t1.Karachi Kings \n\t2.Multan Sultan \n\t3.Lahore Qalandars",
                        "Guess the logo : Two bats and one helmet ?\n\t1.Quetta Gladiators \n\t2.Peshawar Zalmi \n\t3.Lahore Qalandars",
                        "Guess the logo : Cap and wickets ?\n\t1.Islamabad United \n\t2.Peshawar Zalmi \n\t3.Multan Sultan",
                        "Which team is also known a KHAPAL Team ?\n\t1.Peshawar Zalmi \n\t2.Quetta Gladiators \n\t3.Karachi Kings",
                        "The name of PSL 1 official song ?\n\t1.Dil Se Jaan Laga De \n\t2.Ab Khel Jamay Ga \n\t3.Ab Khel Dikha Ke",
                        "The name of PSL 2 official song ?\n\t1.Dil Se Dekha Pakistan  \n\t2.Ab Khel Jamay Ga \n\t3.Dil Se Jaan Laga De",
                        "The name of PSL 3 official song ?\n\t1.Dil Se Jaan Laga De \n\t2.Tayyar Hain \n\t3.Jhoom Jhoom",
                        "The name of PSL 4 official song ?\n\t1.Tayyar Hain \n\t2.Khel Deewano Ka \n\t3.Dil Se Dekha Pakistan",
                        "The name of PSL 5 official song ?\n\t1.Ab Khel Jamay Ga \n\t2.Ab Khel Dikha Ke \n\t3.Tayyar Hain",
                        "Name of non official song sung by Ali zafar this year ?\n\t1.Mela Loot Liya \n\t2.Ab Khel Jamay Ga \n\t3.Jhoom Jhoom",
                        "The song Ab Khel Ke Dikha is sung by ?\n\t1.Ali Azmat \n\t2.Ali Zafar \n\t3.Rahat Fateh ALi Khan",
                        "The song Ab Khel Jamay Ga is sung by ?\n\t1.Farhan Saeed \n\t2.Atif Aslam \n\t3.Ali Zafar",
                        "The song Dil Se Jaan Laga De is sung by ?\n\t1.Bilal Saeed \n\t2.Ali Zafar \n\t3.Ali Azmat",
                        "The song Khel Deewano Ka is sung by ?\n\t1.Fawad Khan \n\t2.Ali Zafar \n\t3.Atif Aslam",
                        "The song Tayyar Hain is sung by ?\n\t1.Fawad Khan \n\t2.Ali Azmat \n\t3.Ali Zafar",
                        "The song Mela Loot Liya is sung by ?\n\t1.Ali Zafar \n\t2.Ali Azmat \n\t3.Farhan Saeed",
                        "The Anthem name for Islamabad United in PSL 1 was ?\n\t1.Chakka Choka \n\t2.Dilon Ke Hum Hain Badshah \n\t3.Dama Dam Mast",
                        "The Anthem name for karachi kings in PSL 1 was ?\n\t1.Dama Dam Mast \n\t2.Cricket Kay Toofan \n\t3.Dilon Ke Hum Hain Badshah",
                        "The Anthem name for Lahore Qalandars in PSL 1 was ?\n\t1.Dama Dam Mast \n\t2.Cricket Kay Toofan \n\t3.Chakka Choka",
                        "The Anthem name for Multan Sultan in PSL 1 was ?\n\t1.Dilon Ke Hum Hain Badshah \n\t2.Balla Ghumaye Jaa \n\t3.Cricket Kay Toofan",
                        "The Anthem name for Quetta Gladiators in PSL 1 was ?\n\t1.Balla Ghumaye Jaa \n\t2.Chakka Choka \n\t3.Cricket Kay Toofan.",
                        "Name of the stadium present in karachi for PSL ?\n\t1.National Stadium \n\t2.Bugti Stadium \n\t3.Gaddafi Stadium",
                        "Name of the stadium present in Rawalpindi for PSL ?\n\t1.Iqbal Stadium \n\t2.Gaddafi Stadium \n\t3.Rawalpindi Cricket Stadium",
                        "Name of the stadium present in Lahore for PSL ?\n\t1.National Stadium \n\t2.Gaddafi Stadium \n\t3.Jinnah Stadium",
                        "Name of the stadium present in Multan for PSL ?\n\t1.Jinnah Stadium \n\t2.Multan Cricket Stadium \n\t3.National Stadium",
                        "How many matches are going to be held in Karachi this year ?\n\t1.8 \n\t2.9 \n\t3.6",
                        "How many matches are going to be held in Rawalpindi this year ?\n\t1.4 \n\t2.8 \n\t3.6",
                        "How many matches are going to be held in Multan this year ?\n\t1.1 \n\t2.3 \n\t3.4",
                        "How many matches are going to be held in Lahore this year ?\n\t1.14 \n\t2.15\n\t3.12",
                        "Muhammad Hafeez is in which Team ?\n\t1.Lahore Qalandars \n\t2.Karachi Kings \n\t3.Quetta Gladiators",
                        "Dale steyn is in which Team ?\n\t1.Islamabad United \n\t2.Lahore Qalandars \n\t3.Karachi Kings",
                        "Dawid Milan is in which Team ?\n\t1.Lahore Qalandars \n\t2.Multan Sultans \n\t3.Islamabad United",
                        "Babar Azam is in which Team ?\n\t1.Peshawar Zalmi \n\t2.Multan Sultans \n\t3.Karachi Kings",
                        "Mohammad Amir is in which Team ?\n\t1.Lahore Qalandars \n\t2.Karachi Kings \n\t3.Peshawar Zalmi",
                        "Shaheen Afridi is in which Team ?\n\t1.Peshawar Zalmi \n\t2.Lahore Qalandars \n\t3.Karachi Kings",
                        "Fakhar Zaman is in which Team ?\n\t1.Lahore Qalandars \n\t2.Islamabad United \n\t3.Peshawar Zalmi",
                        "Mohammad Irfan is in which Team ?\n\t1.Islamabad United\n\t2.Peshawar Zalmi \n\t3.Multan Sultan",
                        "Imran Tahir is in which Team ?\n\t1.Multan Sultan \n\t2.Karachi Kings \n\t3.Islamabad United",
                        "Shoaib Malik is in which Team ?\n\t1.Islamabad United \n\t2.Peshawar Zalmi \n\t3.Multan Sultans",
                        "Yasir Shah is in which Team ?\n\t1.Islamabad United \n\t2.Lahore Qalandars \n\t3.Peshawar Zalmi",
                        "Ahmed Shehzad is in which Team ?\n\t1.Peshawar Zalmi \n\t2.Karachi kings \n\t3.Quetta Gladiators",
                        "Ben Cutting is in which Team ?\n\t1.Lahore Qalandars \n\t2.Quetta Gladiators \n\t3.Peshawar Zalmi",
                        "Who is the wicket keeper in Karachi kings ?\n\t1.Chadwick Walton \n\t2.Mohammad Rizwan \n\t3.Imad Wasim",
                        "Who is the wicket keeper in Quetta Gladiators ?\n\t1.Sarfaraz Ahmed \n\t2.Umar Akmal \n\t3.Shane Watson",
                        "Who is the wicket keeper in Multan Sultan ?\n\t1.Junaid Khan \n\t2.Mohammad Ilyas \n\t3.Rohail Nazir",
                        "Who is the wicket keeper in Peshawar Zalmi ?\n\t1.Kamran Akmal \n\t2.Tom Banton \n\t3.Adil Amin",
                        "Who is the wicket keeper in Islamabad United ?\n\t1.Faheem Ashraf \n\t2.Luke Ronchi \n\t3.Asif Ali",
                        "Who is the wicket keeper in Lahore Qalandars ?\n\t1.Mohammad Hafeez \n\t2.Ben Dunk \n\t3.Salman Butt",
                        "This team is also called Shan-e-Pakistan ?\n\t1.Quetta Gladiators \n\t2.Islamabad United \n\t3.Karachi Kings",
                        "This team is also called Dama Dam Mast ?\n\t1.Quetta Gladiators \n\t2.Lahore Qalandars \n\t3.Peshawar Zalmi",
                        "United we win is the moto of this team ?\n\t1.Peshawar Zalmi \n\t2.Quetta Gladiators \n\t3.Islamabad United",
                        "Who is the main sponsor of PSL\n\t1.HAIER \n\t2.HBL \n\t3.PEPSI",
                        "What is the total number of matches that are going to be held ?\n\t1.33 \n\t2.34 \n\t3.30",
                        "Each match in PSL is basically a ?\n\t1.Twenty20 \n\t2.Thirty30 \n\t3.Fifty50",
                        "PCB stands for ?\n\t1.Pakistan Cricket Board \n\t2.Pakistan Cricket Brand \n\t3.Pakistan Career Board",
                        "PSL 5 final will be held in ?\n\t1.Lahore \n\t2.Karachi \n\t3.Dubai",
                        "PSL 5 eleminator match 1 will be held in ?\n\t1.karachi \n\t2.Islamabad \n\t3.Lahore",
                        "PSL 5 eleminator match 2 will be held in ?\n\t1.Karachi \n\t2.Lahore \n\t3.Islamabad",
                        "PSL 5 final match will be held on ?\n\t1.23/03/2020 \n\t2.22/03/2020 \n\t3.26/03/2020",
                        "What is the official website of PSL ?\n\t1.psl-t20.com \n\t2.psl-t20.org \n\t3.psl-t20.pk",
                        "PSL 5 winner team will get a cheque worth ?\n\t1.US$300K \n\t2.US$500K \n\t3.US$700K",
                        "PSL 5 runner up team will get a cheque worth ?\n\t1.US$200K \n\t2.US$100K \n\t3.US$300K",
                        "Who is the owner of Karachi kings ?\n\t1.Salman Iqbal \n\t2.Ali Naqvi \n\t3.Fawad Rana",
                        "Who is the owner of Lahore Qalandars ?\n\t1.Ali Naqvi \n\t2.Nadeem Omar \n\t3.Fawad Rana",
                        "Who is the owner of Islamabad United ?\n\t1.Ali Naqvi \n\t2.Salman Iqbal \n\t3.Ali Tareen",
                        "Who is the owner of Quetta Gladiators ?\n\t1.Fawad Rana\n\t2.Nadeem Omar \n\t3.Ali Tareen",
                        "Who is the owner of Multan Sultan ?\n\t1.Ali Tareen \n\t2.Nadeem Omar \n\t3.Asher Schon",
                        "Who is the owner of Peshawar Zalmi ?\n\t1.Fawad Rana \n\t2.Javed Afridi \n\t3.Salman Iqbal",
                        "Name of Karachi Kings Anthem for PSL 5 ?\n\t1.Yeh Hai Karachi \n\t2.Rang Jeet Ka Laal Hai \n\t3.Both Of These",
                        "Name of Lahore Qalandars Anthem for PSL 5 ?\n\t1.Rang Jeet Ka Laal Hai \n\t2.Ye Khel Dewaano Ka \n\t3.None of the above",
                        "Name of Islamabad United Anthem for PSL 5 ?\n\t1.Rang Jeet Ka Laal Hai \n\t2.Ab Khel Ke Dikha \n\t3.None of the above",
                        "Name of Peshawar Zalmi Anthem for PSL 5 ?\n\t1.Dil Se Jaan Laga De \n\t2.We are Peshawar Zalmi \n\t3.Both Of Them",
                        "Name of Multan Sultan Anthem for PSL 5 ?\n\t1.Khel Deewano Ka \n\t2.Ab Khel Ke Dikha \n\t3.None of the above",
                        "Name of Quetta Gladiators Anthem for PSL 5 ?\n\t1.De Maar Saare Char (Ballay Ballay) \n\t2.Lo Phir Say Miley \n\t3.None of the above"
  					};
string ques_pr[100] = {
                        "C++ was developed in the Year? \n\t1.1982\n\t2.1980\n\t3.1979",
                        "C++ was developed by ? \n\t1.Bjarne Stroustrup\n\t2.Linoed inch\n\t3.Dennis Ritchie",
                        "C++ is a _____ language ? \n\t1.Object Oriented league\n\t2.Structured\n\t3.None of the above",
                        "Key word cout in C++ is used for ? \n\t1.Input\n\t2.Output\n\t3.Processing",
                        "Key word cin in C++ is used for ?\n\t1.Input \n\t2.Output \n\t3.Processing",
                        "Which is post increment operator ?\n\t1.a++ \n\t2.++a \n\t3.+a+",
                        "Which is pre increment operator ?\n\t1.a++ \n\t2.+a+ \n\t3.++a",
                        "Which is post decrement operator ?\n\t1.--a \n\t2.a-- \n\t3.-a-",
                        "Which is pre decrement operator ?\n\t1.--a \n\t2.a-- \n\t3.-a-",
                        "How many types of function are in C++ ?\n\t1.1 \n\t2.2 \n\t3.3",
                        "If we want to save a whole number < 36000, what data type to consider ?\n\t1.Long Int 3 \n\t2.Int \n\t3.Double",
                        "If we want to save a number having decimal point, what data type to consider ?\n\t1.Float \n\t2.Double \n\t3.Short Float",
                        "Bool or boolean can have how many values ?\n\t1.Infinite \n\t2.Three \n\t3.Two",
                        "What data type to consider to store a single '$' ?\n\t1.Int \n\t2.char \n\t3.Const",
                        "What data type to consider to store a sentance in C++ ?\n\t1.Char \n\t2.Var \n\t3.String",
                        "This is used to comment a single line in C++ ?\n\t1.// \n\t2./* \n\t3.\\",
                        "This is used to comment multiple lines in C++ ?\n\t1.// \n\t2./**/ \n\t3.\\",
                        "The line in the code that is not read by compiler is called ?\n\t1.Comment \n\t2.Explanation \n\t3.Skipper",
                        "How many types of loops are there in C++ ?\n\t1.1 \n\t2.2 \n\t3.3",
                        "Loop that executes at least one time without checking condition ?\n\t1.For \n\t2.Do-While \n\t3.One-Time",
                        "Loop that only needs a condition to execute ?\n\t1.For \n\t2.Do-While \n\t3.While",
                        "Which loop to consider, when number of iterations are known ?\n\t1.While \n\t2.For \n\t3.Do-While",
                        "Can loop be infinite ?\n\t1.No \n\t2.Yes \n\t3.None of the above",
                        "_____ is not a arithmetic operator ?\n\t1. + \n\t2. % \n\t3. #",
                        "_____ is not a relational operator ?\n\t1. > \n\t2. := \n\t3. !=",
                        "How many types of logical operators are there in C++ ?\n\t1.Two \n\t2.Three \n\t3.Four",
                        "&& is _____ operator ?\n\t1.Assignment \n\t2.Relational \n\t3.Logical",
                        "Logic operator \"AND\"is represented by ?\n\t1.&& \n\t2.& \n\t3.|&",
                        "|| is _____ operator ?\n\t1.Relational \n\t2.Logical \n\t3.Arithmetic",
                        "Which team is also known a KHAPAL Team ?\n\t1.Peshawar Zalmi \n\t2. \n\t3.",
                        "! is _____ operator ?\n\t1.Assignment \n\t2.Relational \n\t3.Logical",
                        "&& is called ?\n\t1.Logical OR \n\t2.Logical AND \n\t3.Logical NOT",
                        "|| is called ?\n\t1.Logical OR \n\t2.Logical AND \n\t3.Logical NOT",
                        "! is called ?\n\t1.Logical AND \n\t2.Logical NOT \n\t3.Logical OR",
                        "Loop executes when the condition is _____ ?\n\t1.Both \n\t2.False \n\t3.True",
                        "Code inside an if statement executes when condition is _____ ?\n\t1.True \n\t2.False \n\t3.None of the above",
                        "If else is used for _____ ?\n\t1.Processing \n\t2.Decision Making \n\t3.Repeatation",
                        "\\n is a _____ ?\n\t1.Operator \n\t2.Keyword \n\t3.Escape Sequence",
                        "\\t is a _____ ?\n\t1.Operator \n\t2.Escape Sequence \n\t3.Keyword",
                        "Escape Sequence used for jumping to next line is _____ ?\n\t1.\n \n\t2.\t \n\t3.\br",
                        "Escape Sequence used for jumping 8 charecters is _____ ?\n\t1.\n \n\t2.\t \n\t3.\\8",
                        "cout is defined in _____ header file ?\n\t1.iostream \n\t2.conio \n\t3.math",
                        "getch() is defined in _____ header file ?\n\t1.conio \n\t2.stdio \n\t3.iostream",
                        "pow() function is defined in _____ ?\n\t1.iostream \n\t2.conio \n\t3.math",
                        "pow function has _____ arguments ?\n\t1.Two \n\t2.Three \n\t3.Four",
                        "Second argument or perameter of pow() function is _____ ?\n\t1.Null \n\t2.Base \n\t3.Exponent",
                        "First argument or perameter of pow() function is _____ ?\n\t1.Base \n\t2.Exponent \n\t3.Null",
                        "3 exponent 10 can be written as _____ ?\n\t1.pow(3,10) \n\t2.pow(10,3) \n\t3.pow(3)^10",
                        "This is not a valid identifier or variable ?\n\t1.dollar2 \n\t2.dollar_2 \n\t3.2_dollar",
                        "This is not a valid identifier or variable ?\n\t1.k \n\t2.k+ \n\t3.k1",
                        "'char alpha;' is _____ ?\n\t1.Variable Initialization \n\t2.Variable Declaration\n\t3.None of the above",
                        "'char alpha = 'a'; ' is _____ ?\n\t1.Variable Declaration \n\t2.Variable Initialization \n\t3.None of the above",
                        "{} are called _____ in programing ?\n\t1.Curley Brackets \n\t2.Delimeter \n\t3.None of the above",
                        "How many bscic types of error are there ?\n\t1.Two \n\t2.Three \n\t3.Four",
                        "int a=3,b=5; is valid ?\n\t1.Yes \n\t2.No \n\t3.None of the above",
                        "8%2; will return _____ ?\n\t1.Zero \n\t2.One \n\t3.Two",
                        "An array can store all elements of _____ ?\n\t1.Same Data Type \n\t2.Any Data Type \n\t3.None of the above",
                        "Index of an array starts with _____ ?\n\t1.1 \n\t2.a \n\t3.0",
                        "Each element of an array is seprated by _____ ?\n\t1.Semi Colon(;) \n\t2.Colon(:) \n\t3.Comma(,)",
                        "Specific element of an array is accesssed by _____ ?\n\t1.arrayname{index} \n\t2.arrayname[index] \n\t3.arrayname.index",
                        "Which language translator C++ uses ?\n\t1.Interpreter \n\t2.Compiler \n\t3.Assembler",
                        "Does every programing language needs a compiler ?\n\t1.No \n\t2.Yes \n\t3.None of the above",
                        "Does every programing language needs a language translator ?\n\t1.Depends on language \n\t2.No \n\t3.Yes",
                        "There are _____ type of language translator ?\n\t1.Three \n\t2.Two \n\t3.One",
                        "Is HTML a programming language ?\n\t1.Yes \n\t2.No \n\t3.None of the above",
                        "What is the extention if a C++ file ?\n\t1. .cs \n\t2. .c++ \n\t3. .cpp",
                        "Array is a _____ ?\n\t1.Data Type \n\t2.Operator \n\t3.Data Structure",
                        "String is a _____ ?\n\t1.Operator \n\t2.Data Type \n\t3.Data Structure",
                        "String concatination in C++ is done by using _____ ?\n\t1. + \n\t2. . \n\t3. _",
                        "Every C++ program has a function named _____ ?\n\t1.main \n\t2.int \n\t3.return",
                        "_____ integer declaration is valid ?\n\t1.integer a; \n\t2.char a; \n\t3.int a;",
                        "_____ charecter declaration is valid ?\n\t1.chrt a; \n\t2.char a; \n\t3.String a;",
                        "string a = hello world; is a valid string initialization ?\n\t1.Yes \n\t2.No \n\t3.None of the above",
                        "An integer array named \"nums\" having five elements is declared as _____ ?\n\t1.nums[5]; \n\t2.int nums[5]; \n\t3.int nums[4]",
                        "#include is a _____ ?\n\t1.Preprocessor \n\t2.Function \n\t3.Both",
                        "String a=\"Hello\",b=\"World\"; then a+b = _____ ?\n\t1.Hello World \n\t2.HelloWorld \n\t3.254784",
                        "_____ is used to terminate a loop on a Specific condition ?\n\t1. ; \n\t2.continue; \n\t3.break;",
                        "_____ is used to skip an iteration of loop on a Specific condition ?\n\t1.space( ); \n\t2.continue; \n\t3.skip();",
                        "Method used to get number of elements of an array is _____ ?\n\t1.length(); \n\t2.size(); \n\t3.elnum();",
                        "Can we access a specific character of a string _____ ?\n\t1.Yes \n\t2.No \n\t3.None of the above",
                        "switch statements can be replaced by _____ ?\n\t1.if else statement \n\t2.OR operator \n\t3.Nothing",
                        "How do you create a variable with the floating number 2.8 ?\n\t1.float x=2.8; \n\t2.int x=2.8; \n\t3.x=2.8;",
                        "Which operator can be used to compare two values ?\n\t1. >< \n\t2. <> \n\t3. ==",
                        "How do you start writing an if statement in C++ ?\n\t1.if x > y then: \n\t2.if (x > y) \n\t3.if x > y :",
                        "Which keyword is used to return a value inside a method ?\n\t1.break \n\t2.return \n\t3.get",
                        "Which follows the case statement in switch ?\n\t1. : \n\t2. ; \n\t3. -",
                        "What is required to avoid falling through from one case to the next ?\n\t1.end; \n\t2.break; \n\t3.stop;",
                        "What keyword covers unhandled possibilities ?\n\t1.default \n\t2.all \n\t3.other",
                        "What is the index number of the last element of an array with 29 elements ?\n\t1.29 \n\t2.28 \n\t3.unknown",
                        "Which of the following is a two-dimensional array ?\n\t1.int array[20, 20]; \n\t2.array anarray[20][20]; \n\t3.int anarray[20][20];",
                        "Which of the following correctly accesses the seventh element stored in foo, an array ?\n\t1.foo[6] \n\t2.foo[7] \n\t3.foo[8]",
                        "Which is not a loop structure ?\n\t1.for \n\t2.repeat until \n\t3.while",
                        "What punctuation is used to signal the beginning and end of code blocks ?\n\t1. ; \n\t2. ( ) \n\t3. { }",
                        "Every line of code should be terminated with _____ in C++ ?\n\t1.dot(.) \n\t2.semi colon(;) \n\t3.Other",
                        "How do you say not equal ?\n\t1. != \n\t2.not= \n\t3.Other",
                        "Is C++ used today ?\n\t1.Not sure \n\t2.No \n\t3.Yes",
                        "Which of the following keywords are used to control access to a class member ?\n\t1.protected \n\t2.default \n\t3.break",
                        "Which is not a correct variable type in C++ ?\n\t1.int \n\t2.real \n\t3.char",
                        "In C++, the expression x.y represents as ?\n\t1.member y of object pointed by x \n\t2.member x of object y \n\t3.member y of object x",
                        "Which type of variables can be referred from anywhere in the c++ code ?\n\t1.Local Variable \n\t2.All Variable \n\t3.Global Variable"
  					};
char ans[100] =	{
					'3','1','1','2','1','1','3','2','1','2',
					'2','1','3','2','3','1','2','1','3','2',
					'3','2','2','3','2','2','3','1','2','1',
					'3','2','1','2','3','1','2','3','2','1',
					'2','1','1','3','1','3','1','1','3','2',
					'2','2','2','2','1','1','1','3','3','2',
					'2','1','3','1','2','3','3','2','1','1',
					'3','2','2','2','1','2','3','2','2','1',
					'1','1','3','2','2','1','2','1','1','3',
					'1','2','3','2','1','3','1','2','3','3'
  				};
				  
  	char answer,again;
    int se,score;
	int* p;
do {
    score=0;
		system("CLS");
		cout<<"\n\n                      __       __  __  __  __        __       __           __       __\n";
		cout<<"                     /   /_/ /  //  / /_  /_    \\_//  / /  / /__/    /   /  / \\  / /_\n";
		cout<<"                    /__ / / /__//__/ __/ /__    _//__/ /__/ /   \\   /__ /__/   \\/ /__\n";
		cout<<"      ____ _____ __       ____  ____       ____  ____  ____  __________  ___    __  _____  ________   ________\n";
		cout<<"     / __ / ___// /      / __ \\/ __ \\     / __ \\/ __ \\/ __ \\/ ____/ __ \\/   |  /  |/  /  |/  /  _/ | / / ____/\n";
		cout<<"    / /_/ \\__ \\/ /      / / / / /_/ /    / /_/ / /_/ / / / / / __/ /_/ / /| | / /|_/ / /|_/ // //  |/ / / __  \n";
		cout<<"   / _______/ / /___   / /_/ / _, _/    / ____/ _, _/ /_/ / /_/ / _, _/ ___ |/ /  / / /  / _/ // /|  / /_/ /  \n";
		cout<<"  /_/   /____/_____/   \\____/_/ |_|    /_/   /_/ |_|\\____/\\____/_/ |_/_/  |_/_/  /_/_/  /_/___/_/ |_/\\____/   \n";
		cout<<"\n\n\t\t\t\t\t\t _ _ _ _ _ _\n";
		cout<<"\t\t\t\t\t\t|           |\n";
		cout<<"\t\t\t\t\t\t| SELECTION |\n";
		cout<<"\t\t\t\t\t\t|_ _ _ _ _ _|\n\n";
		cout<<"\t\t\t\tEnter 1 for PSL & 2 for Programming : ";
		cin>>se;
		system("CLS");
		switch (se) {
			case 1:
				rules();
				p = random();
				cout<<"\n\t\t\t\t\t  ////////////////////\n"
					<<"\t\t\t\t\t // SHORT PSL QUIZ //\n"
					<<"\t\t\t\t\t////////////////////\n\n";
				for(int i = 0; i < 5; i++) {
					cout<<"\tQ."<<i+1<<" "<<ques_psl[p[i]];
					do {
						cout<<"\n\t\t\t\t\tYour answer :";
						cin>>answer;
					}
					while( answer != '1' && answer != '2' && answer != '3' );
					// checking
            		if( answer == ans[p[i]] ) {
              			score++;    
            		}
				}
				result(score);
			break;
			case 2:
				rules();
				p = random();
				cout<<"\n\t\t\t\t\t  ////////////////////////////\n"
					<<"\t\t\t\t\t // SHORT PROGRAMMING QUIZ //\n"
					<<"\t\t\t\t\t////////////////////////////\n\n";
				for(int i = 0; i < 5; i++) {
					cout<<"\tQ."<<i+1<<" "<<ques_pr[p[i]];
					do {
						cout<<"\n\t\t\t\t\tYour answer :";
						cin>>answer;
					}
					while( answer != '1' && answer != '2' && answer != '3' );
					// checking
            		if( answer == ans[p[i]] ) {
              			score++;    
            		}
				}
				result(score);
			break;
			default:
				cout<<"\n\n\t\t\tNot A valid choice";
			break;
		}
		cout<<"\n\t\t\tIf you want to take quiz again enter \"y\" :";
		cin>>again;			
  	}
	while( again == 'y' || again == 'Y');

	getche();
}