#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <cstdlib>
#include <windows.h>
#include<iomanip>
using namespace std;
const int size = 1000;
void member_list();
void member_registration();
void member_login();
void book_managment();
void book_list_member();
void book_list_manager();
void add_book();
void manager_login();
void manager_menu();
void member_menu();
void manage_date(int &year,int &month,int &day);
void main_menu();
void sort_book_title();
void sort_book_author();
void searchgenre();
void sortbydate();
void sortbygenre();
void borrowlistmember();
void borrow_member();
void search_author();
void search_title();
void fine();
void allpeople();
void allbook();
void allnotr();
void allr();
void returnandpay();
void edit_book(char *book_id,char *book_genre,char*book_title,char*book_author,double &book_price_perday,int &book_pday,int &book_pmonth,int &book_pyear);
void membership(int &member_expyear);
void delete_member(int j, int &countmember);
void delete_book(int i,int &countbook);
void edit_member(char *member_username , long long &member_password);
void Edit_information_manager(long &manager_password,char *manager_username);
long manager_password=1234;
char manager_username[size]="manager";
int li , bli ,t, r=0, k=0 , h=0 ,allborrowedbook[100] , allborrowedmember[100] ,  countbook=0 , countmember=0, day=4, month=3, year=2023 , m=0, y=0;
struct Member
{
    char username[size];
	long long password;
	char firstname[size];
	char lastname[size];
	long long phone_number;
	string bbl;
	long fine;
	int day;
	int month;
	int year;
	int expyear;
	int bbem;
    long long s[100];
    int rl[100];
    int r;
    int g;
};
Member member[1000];

 struct Book
{
	char id[size];
	char genre[size];
    char title[size];
    char author[size];
    double price_perday;
    bool situation=false;
    int pday;
    int pmonth;
    int pyear;
    char comment[size];
    int bday;
    int bmonth;
    int byear;
    int bc;
    int bbl[100];
};
Book book[1000];

void allr(){
	system("cls");
	cout<<"...Returned..."<<endl;
	cout<<endl;
	member[li];
	if(member[li].r==0){
		cout<<"List is empty"<<endl;
		cout<<endl;
		cout<<"1. Back to member menu"<<endl;
		cout<<"2. Back to main menu"<<endl;
		cout<<"Choose an option above :";
		int t;
		cin>>t;
		system("cls");
		switch(t){
			case 1:
				member_menu();
				break;
			case 2:
				main_menu();
				break;
			default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
		}
	}else{
		cout<<endl;
		for(int i=0;i<member[li].r;i++){	
		cout<<"\t"<<"Id :"<<"\t"<<book[member[li].rl[i]].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[member[li].rl[i]].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[member[li].rl[i]].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[member[li].rl[i]].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[member[li].rl[i]].price_perday<<endl;
        cout<<endl;          
		 }                         
		}
	cout<<"1. Back to member menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			member_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
	}
	}
void borrow_member(){
	member[li];
	cout<<"Enter the number of the book :";
	cin>>bli;
	bli=bli-1;
	if(book[bli].situation==false){
	allborrowedbook[h]=bli;
	allborrowedmember[h]=li;
	member[li].bbl[member[li].g]=bli;
	book[bli].situation=true;
	book[bli].bday=day;
	book[bli].bmonth=month;
	book[bli].byear=year;
	member[li].bbem++;
	book[bli].bc++;
	member[li].g++;
	m++;
	h++;
		system("cls");
cout<<"Dear "<<member[li].username<<" You've borrowed "<<book[bli].title<<" by "<<book[bli].author<<" on "<<book[bli].bday<<"/"<<book[bli].bmonth<<"/"<<book[bli].byear<<"!"<<endl;
	cout<<endl;
	cout<<"1. Back to member menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	int y;
	cin>>y;
	system("cls");
	switch(y){
		case 1:
			member_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
		
}
	}else{
		system("cls");
		cout<<"Book is not available!"<<endl;
		cout<<endl;
			cout<<"1. Back to member menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			member_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}

}
void allnotr(){
	system("cls");
	cout<<"...Books You Have..."<<endl;
	cout<<endl;
	member[li];
	if(member[li].bbem==0){
		cout<<"List is empty"<<endl;
		cout<<endl;
		cout<<"1. Back to member menu"<<endl;
		cout<<"2. Back to main menu"<<endl;
		cout<<"Choose an option above :";
		int t;
		cin>>t;
		system("cls");
		switch(t){
			case 1:
				member_menu();
				break;
			case 2:
				main_menu();
				break;
			default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
		}
	}else{
		for(int i=0;i<member[li].g;i++){
				if(book[member[li].bbl[i]].situation==true){
				cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[member[li].bbl[i]].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[member[li].bbl[i]].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[member[li].bbl[i]].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[member[li].bbl[i]].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[member[li].bbl[i]].price_perday<<endl;
        cout<<endl;                              
			}	
		}
			 }               	
	cout<<"1. Back to member menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			member_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
void returnandpay(){
	cout<<endl;
	member[li];
	if(member[li].bbem==0){
		cout<<"List is empty"<<endl;
		cout<<endl;
		cout<<"1. Back to member menu"<<endl;
		cout<<"2. Back to main menu"<<endl;
		cout<<"Choose an option above :";
		int t;
		cin>>t;
		system("cls");
		switch(t){
			case 1:
				member_menu();
				break;
			case 2:
				main_menu();
				break;
			default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
		}
	}else{
		int i;
	for( i=0;i<member[li].g;i++){
				if(book[member[li].bbl[i]].situation==true){
				cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[member[li].bbl[i]].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[member[li].bbl[i]].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[member[li].bbl[i]].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[member[li].bbl[i]].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[member[li].bbl[i]].price_perday<<endl;
        cout<<endl;                              
			}	
		}
	cout<<"Enter number of the book :";
	int w,t;
    cin>>i;
    i=i-1;
    for(int j=0;j<countbook;j++){
    	if(strcmp(book[member[li].bbl[i]].id,book[j].id)==0){
    		w=j;
    		break;
		}
	}
		system("cls");
	cout<<"Dear "<<member[li].username<< " you returned "<<book[w].title<<" by "<<book[w].author<<"!"<<endl;
	cout<<endl;
	member[li].rl[y]=w;
	member[li].r++;
	book[w].situation=false;
	y++;
	cout<<"Done!"<<endl;
	cout<<endl;
	cout<<"1. Back to member menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int e;
	cin>>e;
	system("cls");
	switch(e){
		case 1:
			member_menu();
			break;
		case 2:
			main_menu();
			break;
	default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
}
}
void allbook(){
	cout<<"...All Borrowed Books..."<<endl;
	cout<<endl;
	if(h==0){
		cout<<"List is empty"<<endl;
		cout<<endl;
		cout<<"1. Back to manager menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			manager_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}else{
		for(int i=0;i<h;i++){
			int w=0;
		for(int j=i+1;j<h;j++){
		    if(allborrowedbook[i]==allborrowedbook[j]){
		    	w++;
			}
		}
		if(w==0){
		cout<<"\t"<<"Id :"<<"\t"<<book[allborrowedbook[i]].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[allborrowedbook[i]].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[allborrowedbook[i]].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[allborrowedbook[i]].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[allborrowedbook[i]].price_perday<<endl;
        cout<<endl; 
		}
	}                  
	cout<<endl;
	cout<<"1. Back to manager menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			manager_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
}
 void allpeople(){
 	cout<<"...All Members Who Have Borrowed..."<<endl;
	cout<<endl;
	if(h==0){
		cout<<"List is empty"<<endl;
		cout<<endl;
		cout<<"1. Back to manager menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			manager_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}else{   	  
	for(int i=0;i<h;i++){
			int w=0;
		for(int j=i+1;j<h;j++){
		    if(allborrowedmember[i]==allborrowedmember[j]){
		    	w++;
			}
		}
		if(w==0){
		cout<<"\t"<<"Firstname :"<<"\t"<<member[allborrowedmember[i]].firstname<<endl;
		cout<<"\t"<<"Lastname :"<<"\t"<<member[allborrowedmember[i]].lastname<<endl;
		cout<<"\t"<<"Phone number :"<<"\t"<<member[allborrowedmember[i]].phone_number<<endl;
		cout<<"\t"<<"Password :"<<"\t"<<member[allborrowedmember[i]].password<<endl;
		cout<<"\t"<<"Joining date :"<<"\t"<<member[allborrowedmember[i]].day<<"/"<<member[allborrowedmember[i]].month<<"/"<<member[allborrowedmember[i]].year<<endl;
		cout<<"\t"<<"Joining exp :"<<"\t"<<member[allborrowedmember[i]].day<<"/"<<member[allborrowedmember[i]].month<<"/"<<member[allborrowedmember[i]].expyear<<endl;
		cout<<endl;	
		}
	}                                                             
	cout<<endl;
	cout<<"1. Back to manager menu"<<endl;
	cout<<"2. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			manager_menu();
			break;
		case 2:
			main_menu();
			break;
		default :
		    				cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
}
void fine(){
		system("cls");
		cout<<"...Fine..."<<endl;
		cout<<endl;
	int i;
	for( i=0;i<member[li].bbem;i++)
	if(book[member[li].bbl[i]].situation==true){
		member[li].s[i]=(((year-book[member[li].bbl[i]].byear)*365+(month-book[member[li].bbl[i]].bmonth)*30+(day-book[member[li].bbl[i]].bday))-14)*book[member[li].rl[i]].price_perday;
		if(member[li].s[i]<1){
		cout<<"\t"<<"No fine for "<<book[member[li].bbl[i]].title<<" by "<<book[member[li].bbl[i]].author<<endl;
		}else{
			cout<<"\t"<<"You have to pay "<<"$"<<member[li].s[i]<<" for "<<book[member[li].bbl[i]].title<<" by "<<book[member[li].bbl[i]].author<<endl;
		}
	}
	cout<<endl;
	cout<<"1. Retuen and pay"<<endl;
	cout<<"2. Back to member menu"<<endl;
	cout<<"3. Back to main menu"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
		system("cls");
	switch(t){
		case 1:
			returnandpay();
			break;
		case 2:
		  member_menu();
		  break;
	    case 3:
	    	main_menu();
	      break;
	    default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
	}
}
void member_menu(){
	system("color 7");
	member[li];
	            cout<<"...Member Menu..."<<endl;
	            cout<<endl;
		    	cout<<"1. View all books and search"<<endl;
		    	cout<<"2. return and pay fine"<<endl;
		    	cout<<"3. View all books you have"<<endl;
		    	cout<<"4. View all returned books by you"<<endl;
		    	cout<<"5. Edit information"<<endl;
		    	cout<<"6. Show date"<<endl;
		    	cout<<"7. Membership"<<endl;
		    	cout<<"8. Back to main menu"<<endl;
		    	cout<<"Choose an option above :";
		    	int f;
		    	cin>>f;
		    	system("cls");
		    	switch(f){
		    		case 1:
		    			book_list_member();
		    			break;
		    		case 2:
		    			fine();
		    			break;
		    		case 3:
		    			allnotr();
		    			break;
		    		case 4:
		    			allr();
		    			break;
		    		case 5:
		    		     edit_member(member[li].username , member[li].password);
		    			break;
		    		case 6:	
		    		cout<<"...Date..."<<endl;
		    		cout<<"Current date :"<<day<<"/"<<month<<"/"<<year<<endl;
		    		cout<<"2. Back to the main menu"<<endl;
		    		cout<<"Choose an option above :";
		    		int t;
		    		cin>>t;
		    		system("cls");
		    		switch(t){
		    			case 1:
		    				member_menu();
		    				break;
		    			case 2:
		    				main_menu();
		    				break;
					}
					case 7:
						cout<<"...Membership..."<<endl;
						cout<<endl;
						cout<<"Joining exp :"<<member[li].day<<"/"<<member[li].month<<"/"<<member[li].expyear<<endl;
						cout<<"1. Membership renewal"<<endl;
						cout<<"2. Back to the member menu"<<endl;
						cout<<"3. Back to the main menu"<<endl;
						cout<<"Choose an option above :";
						int r;
						cin>>r;
						system("cls");
						switch(r){
							case 1:
								 membership(member[li].expyear);
								break;
							case 2:
								member_menu();
								break;
							case 3:
								main_menu();
								break;
						}
						break;
		    		case 8:
		    			main_menu();
		    			break;
		    		default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
				}
				
}
void membership(int &member_expyear){
	member[li].expyear=member[li].expyear+1;
	cout<<"Done!"<<endl;
	cout<<"Joining exp :"<<member[li].day<<"/"<<member[li].month<<"/"<<member[li].expyear<<endl;
	cout<<"1. Back to the member menu"<<endl;
	cout<<"2. Back to the main menu"<<endl;
	cout<<"Choose an option above :";
						int r;
						cin>>r;
						system("cls");
						switch(r){
							case 1:
								member_menu();
								break;
							case 2:
								main_menu();
								break;
							default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
}
}
void edit_member(char *member_username , long long &member_password){
	system("cls");
	cout<<"...Edit information..."<<endl;
	cout<<endl;
            cout<<" Username :"<<member[li].username<<endl;
			cout<<" Password :"<<member[li].password<<endl;
	cout<<"1. Change username"<<endl;
	cout<<"2. change password"<<endl;
	cout<<"Choose an option above :";
	int r;
	cin>>r;
	long long password;
	char username[size];
	switch(r){
		case 1 :
			cin.ignore();
			cout<<"Enter username :";
			cin.getline(username,size);
			strcpy(member[li].username,username);
			cout<<endl;
			break;
		case 2:
			cout<<"Enter password :";
			cin>>password;
            member[li].password=password;
			cout<<endl;
			break;
		default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
	}
	system("cls");
	        cout<<" Username :"<<member[li].username<<endl;
			cout<<" Password :"<<member[li].password<<endl;
			cout<<endl;
			cout<<"1. Back to the member menu"<<endl;
			cout<<"2. Back to the main menu"<<endl;
			cout<<"Choose an option above :";
			int e;
			cin>>e;
			system("cls");
			switch(e){
				case 1:
					member_menu();
					break;
				case 2:
					main_menu();
					break;
				default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
			}
}
void manager_menu(){
	system("cls");
	system("color 7");
	    cout<<"...Manager Menu..."<<endl;
	    cout<<endl;
		cout<<"1. Manage books"<<endl;
		cout<<"2. Manage members"<<endl;
		cout<<"3. Manage date"<<endl;
		cout<<"4. all members who borrowed"<<endl;
		cout<<"5. all borrowed books"<<endl;
		cout<<"6. Edit information"<<endl;
		cout<<"7. Back to main menu"<<endl;
		cout<<"Choose an option above :";
		int y;
		cin>>y;
		system("cls");
		switch(y){
			case 1:
				book_managment();
				 break;
		    case 2:
		    	member_list();
		    	 break;
		    case 3:
		    	cout<<"...Date..."<<endl;
		    	cout<<endl;
		    	cout<<"Current date :"<<day<<"/"<<month<<"/"<<year<<endl;
					   cout<<"1. Change the date"<<endl;
					   cout<<"2. Back to manager menu"<<endl;
					   cout<<"Choose on of the options above:";
					   int t;
					   cin>>t;
					   	system("cls");
					   switch(t){
					   	case 1:
					   		manage_date(year,month,day);
					   	    cout<<"Current date:"<<day<<"/"<<month<<"/"<<year<<endl;
					   	    cout<<endl;
					   	    cout<<"1. Back to manager menu"<<endl;
					   	    cout<<"2. Back to main menu"<<endl;
					   	    cout<<"Choose on of the options above:";
					   	    int e;
					   	    cin>>e;
					   	    system("cls");
					   	    switch(e){
					   	    	case 1:
					   	    		manager_menu();
					   	    		break;
					   	    	case 2:
					   	    		main_menu();
					   	    		break;
					   	    	default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
							   }
					   	    manager_menu();
					   		 break;
					   	case 2:
					   	    manager_menu();
					   		 break;
					   	default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
					   }
		    	  break;
		    case 4:
		    	allpeople();
		    	break;
		    case 5:
		    	allbook();
		    	break;
		    case 6:
		    	Edit_information_manager(manager_password,manager_username);
		    	  break;
		    case 7:
		    	main_menu();
		    	  break;
		    	default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
		}
}
void Edit_information_manager(long &manager_password,char *manager_username){
	system("cls");
	cout<<"...Edit information..."<<endl;
	cout<<endl;
	cout<<" Username :"<<manager_username<<endl;
    cout<<" Password :"<<manager_password<<endl; 
    cout<<endl;
	cout<<"1. Change password"<<endl;
	cout<<"2. Change username"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	char username[size];
	long password;
	system("cls");
	switch(t){
		case 1:
			cout<<" Enter new password :";
			cin>>password;
			manager_password=password;
			break;
		case 2:
			cin.ignore();
			cout<<" Enter new username :";
			cin.getline(username,size);
			manager_username=username;
			break;	
			default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
	}
	system("cls");
	cout<<" Done!"<<endl;
	cout<<endl;
	cout<<" Username :"<<manager_username<<endl;
    cout<<" Password :"<<manager_password<<endl; 
	cout<<"1. Back to the main menu"<<endl;
	cout<<"2. Back to the manager menu"<<endl;
	cout<<"Choose an option above :";
	int e;
	cin>>e;
	system("cls");
	switch(e){
		case 1:
			main_menu();
			break;
		case 2:
			manager_menu();
			break;
			default :
		    			cout<<"\n Invalid Choice! \n"<<endl;
		    			sleep(1.5);
		    			system("cls");
		    			main_menu();
		    			break;
	}
}
void manager_login(){
	system("cls");
	system("color 8");
	long password;
    char username[size];
	      cout<<"...Manager Login..."<<endl;
	      cout<<endl;
		  cout<<"Enter your username:"<<endl;
		  cin.ignore();
		  cin.getline(username,size);
		  cout<<"Enter your password"<<endl;
          cin>>password;
  	  if(manager_password==password && (strcmp(manager_username,username)==0)){
		  	manager_menu();
		  }else{
		  system("cls");	
		  	cout<<"Wrong password or wrong username!"<<endl;
		  	cout<<endl;
		  	cout<<" 1. Try again"<<endl;
		  	cout<<" 2. Back to the main menu"<<endl;
		  	cout<<"Choose an option above :";
		  	int r;
		  	cin>>r;
		  	system("cls");
		  	switch(r){
		  		case 1:
		  			manager_login();
		  			break;
		  		case 2:
		  			main_menu();
		  			break;
		  			default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
			  }
		  }
}
void add_book(){
	system("cls");
	cout<<"...Add Book..."<<endl;
	cout<<endl;
	cout<<"Book id :";
      			loop:
      				cin.ignore();
      				cin.getline(book[countbook].id,size);
      			int w=0;
      				for(int i=0;i<countbook;i++){
      					if(strcmp(book[countbook].id,book[i].id)==0){
      							w++;
					  }
				  }
				  if(w>0){
				  	cout<<"This id has been used.Enter another id :"<<endl;
				  	goto loop;
					  }
					  cout<<endl;
	cout<<"Title :"<<" ";
	istream& ignore(streamsize n=1, int delim = EOF);
	cin.getline(book[countbook].title,size);
	cout<<endl;
	cout<<"Author :"<<" ";
	cin.getline(book[countbook].author,size);
	cout<<endl;
	cout<<"Genre :"<<" ";
	cin.getline(book[countbook].genre,size);
	cout<<endl;
	cout<<"Price per day :"<<" ";
	cin>>book[countbook].price_perday;
	cout<<endl;
	cout<<"Publication day :"<<" ";
	cin>>book[countbook].pday;
	cout<<endl;
	cout<<"Publication month :"<<" ";
	cin>>book[countbook].pmonth;
	cout<<endl;
	cout<<"Publication year :"<<" ";
	cin>>book[countbook].pyear;
	countbook++;
	cout<<endl;
	cout<<"1. Back to manager menu"<<endl;
	cout<<"2. Back to book managment"<<endl;
	cout<<"Choose an option above :";
	int p;
	cin>>p;
	system("cls");
	switch(p){
		case 1:
			manager_menu();
			break;
		case 2:
			book_managment();
			break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
}
void book_list_manager(){
	system("cls");
	cout<<"...Book List..."<<endl;
	cout<<endl;
	if(countbook==0){
		cout<<"The list is empty."<<endl;
		cout<<endl;
	}else{
	for(int i=0;i<countbook;i++){
		cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
		cout<<"\t"<<"Borrow count :"<<"\t"<<book[i].bc<<endl;
        cout<<endl;
		}	
	}
	cout<<"1. Edit information"<<endl;
	cout<<"2. Go back to manager menu"<<endl;
	cout<<"3. Go back to main menu"<<endl;
	cout<<"Choose an option above :";
	int u;
	cin>>u;
	switch(u){
		case 1:
			cout<<"Enter number of the book :";
	cin>>t;
	system("cls");
edit_book(book[t-1].id,book[t-1].genre,book[t-1].title,book[t-1].author,book[t-1].price_perday,book[t-1].pday,book[t-1].pmonth,book[t-1].pday);
        case 2:
        		system("cls");
		    manager_menu();
        	 break;
        case 3:
        		system("cls");
		    main_menu();
        	 break;
		     default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
void edit_book(char *book_id,char *book_genre,char*book_title,char*book_author,double &book_price_perday,int &book_pday,int &book_pmonth,int &book_pyear){
	cout<<"...Edit Book..."<<endl;
	cout<<endl;
	cout<<"1. Change id"<<endl;
	cout<<"2. Change title"<<endl;
	cout<<"3. Change author"<<endl;
	cout<<"4. Change genre"<<endl;
	cout<<"5. Change price perday"<<endl;
	cout<<"6. Change publication day"<<endl;
	cout<<"7. Change publication month"<<endl;
	cout<<"8. Change publication year"<<endl;
	cout<<"Choose an option above :";
	int y;
	cin>>y;
	system("cls");
	switch(y){
		case 1:
			cout<<"Enter new id :";
			cin.ignore();
			cin.getline(book[t-1].id,size);
			break;
		case 2:
			cout<<"Enter new title :";
			cin.ignore();
				cin.getline(book[t-1].title,size);
			break;
		case 3:
			cout<<"Enter new author :";
			cin.ignore();
				cin.getline(book[t-1].author,size);
			break;
		case 4:
			cout<<"Enter new genre :";
			cin.ignore();
				cin.getline(book[t-1].genre,size);
			break;
		case 5:
			cout<<"Enter new price perday :";
			cin>>book[t-1].price_perday;
			break;
		case 6:
			cout<<"Enter new publication day :";
			cin>>book[t-1].pday;
			break;
		case 7:
			cout<<"Enter new publication month :";
			cin>>book[t-1].pmonth;
			break;
		case 8:
			cout<<"Enter new publication year :";
			cin>>book[t-1].pyear;
			break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	system("cls");
	cout<<"Done!"<<endl;
    cout<<"1. Back to manager menu"<<endl;
    cout<<"2. Back to main menu"<<endl;
    cout<<"Choose an option above :";
    int t;
    cin>>t;
    system("cls");
    switch(t){
    	case 1:
    		manager_menu();
    		break;
    	case 2:
    		main_menu();
    		break;
    		default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
    		
}
}
void search_author(){
	system("cls");
	cout<<"...Search..."<<endl;
	cout<<endl;
	int j=0;
	char author[size];
	cout<<"Enter author :";
	cin.ignore();
	cin.getline(author,size);
	cout<<endl;
	for(int i=0;i<countbook;i++){
		if(strcmp(book[i].author,author)==0){
			cout<<j+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
        j++;
		}	
		}
		if(j==0){
			cout<<"Nothing was found"<<endl;
			sleep(1.5);
				system("cls");
			member_menu();
		}else{
			cout<<"1. Borrow one of the books above"<<endl;
		        cout<<"2. Back to member menu"<<endl;
		        cout<<"Choose an option above :";
		        int q;
		        cin>>q;
		        system("cls");
		        switch(q){
		        	case 1:
		        		borrow_member();
		        		system("cls");
		        		break;
		        	case 2:
		        		system("cls");
		        		member_menu();
		        		break;
		        		default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
				}
		}
			}
void search_title(){
	system("cls");
		cout<<"...Search title..."<<endl;
		cout<<endl;
	int j=0;
	char title[size];
	cout<<"Enter title :";
	cin.ignore();
	cin.getline(title,size);
		cout<<endl;
	for(int i=0;i<countbook;i++){
		if(strstr(book[i].title,title)!=0){cout<<j+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
        j++;
		}	
		}
		if(j==0){
			cout<<"Nothing was found"<<endl;
			sleep(1.5);
				system("cls");
			member_menu();
		}else{
			cout<<"1. Borrow one of the books above"<<endl;
		        cout<<"2. Back to member menu"<<endl;
		        cout<<"Choose an option above :";
		        int q;
		        cin>>q;
		        
		        switch(q){
		        	case 1:
		        	borrow_member();
		        	system("cls");
		        		break;
		        	case 2:
		        		system("cls");
		        		member_menu();
		        		break;
		        		default :
		        			system("cls");
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
				}
		}   
	}
void searchgenre(){
	system("cls");
	cout<<"...Search genre..."<<endl;
	cout<<endl;
	cout<<"Enter genre :";
	int j=0;
	char genre[size];
	cin.ignore();
	cin.getline(genre,size);
	cout<<endl;
	for(int i=0;i<countbook;i++){
		if(strstr(book[i].genre,genre)!=0){
			cout<<j+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
       cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
		j++;
        cout<<endl;
		}	
		}
	cout<<"1. Borrow one of the books above"<<endl;
	cout<<"2. Go back to member menu"<<endl;
	cout<<"3. Go back to main menu"<<endl;
	cout<<"Choose an option above :";
	int u;
	cin>>u;
	switch(u){
		case 1:
			borrow_member();
			system("cls");
		case 2:
				system("cls");
		    member_menu();
		     break;
		case 3:
				system("cls");
		    main_menu();
		     break;
		     default :
		    		cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
void sortbydate(){
	system("cls");
	cout<<"...Sorted By Publication Date..."<<endl;
	cout<<" Least recent to most recent :"<<endl;
	cout<<endl;
	for(int i=0;i<countbook-1;i++){
		for(int j=i+1;j<countbook;j++){
    if(book[i].pyear>book[j].pyear){
				int t;
				char r[size];
				strcpy(r,book[i].id);
				strcpy(book[i].id,book[j].id);
                strcpy(book[j].id,r);
				strcpy(r,book[i].title);
				strcpy(book[i].title,book[j].title);
                strcpy(book[j].title,r);
                strcpy(r,book[i].author);
				strcpy(book[i].author,book[j].author);
                strcpy(book[j].author,r);
                t=book[i].price_perday;
                book[i].price_perday=book[j].price_perday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pday=book[j].pday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pmonth=book[j].pmonth;
                book[j].pmonth=t;
                t=book[i].pyear;
                book[i].pyear=book[j].pyear;
                book[j].pyear=t;
                strcpy(r,book[i].genre);
				strcpy(book[i].genre,book[j].genre);
                strcpy(book[j].genre,r);
		}else{
			if(book[i].pyear==book[j].pyear && book[i].pmonth>book[j].pmonth){
				int t;
				char r[size];
				strcpy(r,book[i].id);
				strcpy(book[i].id,book[j].id);
                strcpy(book[j].id,r);
				strcpy(r,book[i].title);
				strcpy(book[i].title,book[j].title);
                strcpy(book[j].title,r);
                strcpy(r,book[i].author);
				strcpy(book[i].author,book[j].author);
                strcpy(book[j].author,r);
                t=book[i].price_perday;
                book[i].price_perday=book[j].price_perday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pday=book[j].pday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pmonth=book[j].pmonth;
                book[j].pmonth=t;
                t=book[i].pyear;
                book[i].pyear=book[j].pyear;
                book[j].pyear=t;
                strcpy(r,book[i].genre);
				strcpy(book[i].genre,book[j].genre);
                strcpy(book[j].genre,r);
		}else{
			if(book[i].pyear==book[j].pyear && book[i].pmonth==book[j].pmonth && book[i].pday > book[j].pday){
			int t;
				char r[size];
				strcpy(r,book[i].id);
				strcpy(book[i].id,book[j].id);
                strcpy(book[j].id,r);
				strcpy(r,book[i].title);
				strcpy(book[i].title,book[j].title);
                strcpy(book[j].title,r);
                strcpy(r,book[i].author);
				strcpy(book[i].author,book[j].author);
                strcpy(book[j].author,r);
                t=book[i].price_perday;
                book[i].price_perday=book[j].price_perday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pday=book[j].pday;
                book[j].price_perday=t;
                t=book[i].price_perday;
                book[i].pmonth=book[j].pmonth;
                book[j].pmonth=t;
                t=book[i].pyear;
                book[i].pyear=book[j].pyear;
                book[j].pyear=t;
                strcpy(r,book[i].genre);
				strcpy(book[i].genre,book[j].genre);
                strcpy(book[j].genre,r);
		}
		}
		}
		}
	}
	for(int i=0;i<countbook;i++){
			cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
        cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
		}	
	cout<<"1. Borrow one of the books above"<<endl;
	cout<<"2. Go back to member menu"<<endl;
	cout<<"3. Go back to main menu"<<endl;
	cout<<"Choose an option above :";
	int u;
	cin>>u;
	
	switch(u){
		case 1:
			borrow_member();
			system("cls");
		case 2:
			system("cls");
		    member_menu();
		     break;
		case 3:
			system("cls");
		    main_menu();
		     break;
		     default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	}
void edit_book_information(){
	system("cls");
	int i;
	cout<<"...Edit Information..."<<endl;
	cout<<endl;
	cout<<"1. Change id"<<endl;
	cout<<"2. Change title"<<endl;
	cout<<"3. Change author"<<endl;
	cout<<"4. Change genre"<<endl;
	cout<<"5. Change price perday"<<endl;
	cout<<"4. Change publication day"<<endl;
	cout<<"4. Change publication month"<<endl;
	cout<<"4. Change publication year"<<endl;
	cout<<"Choose an option above :";
	int t;
	cin>>t;
	system("cls");
	switch(t){
		case 1:
			cout<<"Enter new id :";
			cin.ignore();
			cin.getline(book[i].id,size);
			break;
		case 2:
			cout<<"Enter new title :";
			cin.ignore();
			cin.getline(book[i].title,size);
			break;
		case 3:
			cout<<"Enter new author :";
			cin.ignore();
			cin.getline(book[i].author,size);
			break;
		case 4:
			cout<<"Enter new ganre :";
			cin.ignore();
			cin.getline(book[i].genre,size);
			break;
		case 5:
			cout<<"Enter new price perday :";
			cin>>book[i].price_perday;
			break;
		case 6:
			cout<<"Enter new publication day :";
			cin>>book[i].pday;
			break;
		case 7:
			cout<<"Enter new publication month :";
			cin>>book[i].pmonth;
			break;
		case 8:
			cout<<"Enter new publication year :";
			cin>>book[i].pyear;
			break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
	system("cls");
	cout<<"Done!"<<endl;
	cout<<endl;
	cout<<"1. Back to the manager menu"<<endl;
	cout<<"2. Back to the main menu"<<endl;
	cout<<"Choose an option above :";
	int y;
	cin>>y;
	system("cls");
	switch(y){
		case 1:
			manager_menu();
			break;
		case 2:
			main_menu();
			break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
}
void book_list_member(){
	system("cls");
		cout<<"...Books..."<<endl;
		cout<<endl;
	  if(countbook==0){
		cout<<"list is empty!"<<endl;
		cout<<"1. Back to the member menu"<<endl;
		cout<<"2. Back to the main menu"<<endl;
		cout<<"Choose an option above :";
		int e;
		cin>>e;
		system("cls");
		switch(e){		
            case 1:
            	member_menu();
                     	break;
            case 2:
            	main_menu();
                        break;
                default :
		    		cout<<setw(70);
		    			cout<<endl;
                        	cout<<"ERROR! INVALID INPUT!";
             	sleep(1.5);
            	exit(0);
		    			break;
	}
	}else{	
	    for(int i=0;i<countbook;i++){
	    	cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
        cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
		}
		cout<<"1. Borrow one of the books above"<<endl;
		cout<<"2. Search author"<<endl;
		cout<<"3. Search title"<<endl;
		cout<<"4. search genre"<<endl;
		cout<<"5. Sort by title"<<endl;
		cout<<"6. Sort by author"<<endl;
		cout<<"7. Sort by gnere"<<endl;
		cout<<"8. Sort by publication date"<<endl;
		cout<<"9. Back to member menu"<<endl;
		cout<<"Choose an option above :";
		int e;
		cin>>e;
		switch(e){		
            case 1:
                borrow_member();
             		    system("cls");
				break;
			case 2:
		        		system("cls");
				search_author();
				break;
			case 3:
						system("cls");
				search_title();
				break;
			case 4:
						system("cls");
			    searchgenre();
			             break;	
			case 5:
					
				sort_book_title();
				  cout<<"1. Borrow one of the books above"<<endl;
		          cout<<"2. Back to member menu"<<endl;
		          cout<<"Choose an option above :";
		        int t;
		        cin>>t;
		        switch(t){
		        	case 1:
		                borrow_member();
		                system("cls");
		        	    	break;
		        	case 2:
		        		system("cls");
		        	 	member_menu();
		        	    	break;
		        	default :
		    		      	cout<<setw(70);
		    		       	cout<<endl;
	                        cout<<"ERROR! INVALID INPUT!";
                    	sleep(1.5);
                    	exit(0); 
		    		     	break;
			 }
				break;
			case 6:
						system("cls");
				sort_book_author();
				 cout<<"1. Borrow one of the books above"<<endl;
		         cout<<"2. Back to member menu"<<endl;
		         cout<<"Choose an option above :";
		        int q;
		        cin>>q;
		        
		        switch(q){
		        	case 1:
		        borrow_member();
		        system("cls");
		        		break;
		        	case 2:
		        		system("cls");
		       	member_menu();
		        		break;
		        	default :
		    			cout<<setw(70);
		    			cout<<endl;
                     	cout<<"ERROR! INVALID INPUT!";
              	sleep(1.5);
              	exit(0);
		    			break;
				}
				break;	
			case 7:
				system("cls");
				sortbygenre();
				break; 
			case 8:
						system("cls");
			    sortbydate();
			             break;
		    case 9:
			 		    system("cls");
			    member_menu();
			             break;
			default :
		    	    	cout<<setw(70);
		    			cout<<endl;
	                    cout<<"ERROR! INVALID INPUT!";
            	sleep(1.5);
              	exit(0);
		    			break;
	}
}
}
void sort_book_title(){
		system("cls");
		cout<<"...Sorted By Title..."<<endl;
		cout<<endl;
    char T[100];
	for(int i=0 ; i<countbook-1 ; i++){
       for( int k=i+1 ; k<countbook ; k++){
           if ( strcmp( book[i].title, book[k].title ) > 0 ){
                   strcpy( T , book[i].title );
                   strcpy( book[i].title, book[k].title);
                   strcpy( book[k].title , T );
}
}
} 
for(int i=0;i<countbook;i++){
	cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Price perday"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
}
   cout<<"1. Borrow one of the books above"<<endl;
   cout<<"2. Back to member menu"<<endl;
   cout<<"Choose an option above :";
		int e;
		cin>>e;
		
		switch(e){
			case 1:
				borrow_member();
				system("cls");
				break;
			case 2:
				system("cls");
				member_menu();
				break;
				default :
		    			cout<<setw(70);
		    			cout<<endl;
	cout<<"ERROR! INVALID INPUT!";
	sleep(1.5);
	exit(0);
		    			break;
	}
}
void sortbygenre(){
	system("cls");
	cout<<"...Sorted By Genre..."<<endl;
	cout<<endl;
	char T[1000];
	int y;
	for(int i=0 ; i<countbook-1 ; i++){
       for( int k=i+1 ; k<countbook ; k++){
           if ( strcmp( book[i].genre, book[k].genre ) > 0 ){
                   strcpy( T , book[i].author );
                   strcpy( book[i].author, book[k].author);
                   strcpy( book[k].author , T );                  
				   strcpy( T , book[i].id );
                   strcpy( book[i].id, book[k].id);
                   strcpy( book[k].id , T );                  
				   strcpy( T , book[i].title );
                   strcpy( book[i].title, book[k].title);
				   strcpy( book[k].title , T );                  
				   strcpy( T , book[i].genre );
                   strcpy( book[i].genre, book[k].genre);
                   strcpy( book[k].genre , T );                   
                   y=book[i].price_perday;
                   book[i].price_perday=book[k].price_perday;
                   book[k].price_perday=y;                  
                   y=book[i].pday;
                   book[i].pday=book[k].pday;
                   book[k].pday=y;
                   y=book[i].pmonth;
                   book[i].pmonth=book[k].pmonth;
                   book[k].pmonth=y;
                   y=book[i].pyear;
                   book[i].pyear=book[k].pyear;
                   book[k].pyear=y;
}
}
} 
for(int i=0;i<countbook;i++){
	cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Author"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
}
   cout<<"1. Borrow one of the books above"<<endl;
   cout<<"2. Back to member menu"<<endl;
   cout<<"Choose an option above :";
		int e;
		cin>>e;
			
		switch(e){
			case 1:
				borrow_member();
				system("cls");
			       	break;
			case 2:
				system("cls");
				member_menu();
			      	break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	                         cout<<"ERROR! INVALID INPUT!";
	            sleep(1.5);
             	exit(0);
		    			break;	
		}
}
void sort_book_author(){
		system("cls");
	cout<<"...Sorted By Author..."<<endl;
	cout<<endl;
	char T[1000];
	int y;
	for(int i=0 ; i<countbook-1 ; i++){
       for( int k=i+1 ; k<countbook ; k++){
           if ( strcmp( book[i].author, book[k].author ) > 0 ){
                   strcpy( T , book[i].author );
                   strcpy( book[i].author, book[k].author);
                   strcpy( book[k].author , T );                  
				   strcpy( T , book[i].id );
                   strcpy( book[i].id, book[k].id);
                   strcpy( book[k].id , T );                  
				   strcpy( T , book[i].title );
                   strcpy( book[i].title, book[k].title);
				   strcpy( book[k].title , T );                  
				   strcpy( T , book[i].genre );
                   strcpy( book[i].genre, book[k].genre);
                   strcpy( book[k].genre , T );                   
                   y=book[i].price_perday;
                   book[i].price_perday=book[k].price_perday;
                   book[k].price_perday=y;                  
                   y=book[i].pday;
                   book[i].pday=book[k].pday;
                   book[k].pday=y;
                   y=book[i].pmonth;
                   book[i].pmonth=book[k].pmonth;
                   book[k].pmonth=y;
                   y=book[i].pyear;
                   book[i].pyear=book[k].pyear;
                   book[k].pyear=y;
}
}
} 
for(int i=0;i<countbook;i++){
	cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Author"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday"<<"\t"<<book[i].price_perday<<endl;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		}else{
			cout<<"\t"<<"Not available to borrow"<<endl;
		}
        cout<<endl;
}
   cout<<"1. Borrow one of the books above"<<endl;
   cout<<"2. Back to member menu"<<endl;
   cout<<"Choose an option above :";
		int e;
		cin>>e;
			
		switch(e){
			case 1:
				borrow_member();
				system("cls");
			       	break;
			case 2:
				system("cls");
				member_menu();
			      	break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	                         cout<<"ERROR! INVALID INPUT!";
	            sleep(1.5);
             	exit(0);
		    			break;	
		}
}
void book_managment(){
	system("cls");
	cout<<"...Book Managment..."<<endl;
	           cout<<endl;
	cout<<"1. Show all books"<<endl;
	cout<<"2. Add a new book"<<endl;
	cout<<"3. Delete a book"<<endl;
	cout<<"4. Back to manager menu"<<endl;
	cout<<"Choose an option above :";
	int m;
	cin>>m;
	system("cls");
	switch(m){
		case 1:
			book_list_manager();
		       break;
		case 2:
			add_book();
		       break;
		case 3:
			int i;
	if(countbook==0){
		cout<<"list is empty!"<<endl;
		cout<<endl;
	    }else{
	              for( i=0;i<countbook;i++){
		cout<<i+1<<".";
		cout<<"\t"<<"Id :"<<"\t"<<book[i].id<<endl;
        cout<<"\t"<<"Title :"<<"\t"<<book[i].title<<endl;
        cout<<"\t"<<"Author :"<<"\t"<<book[i].author<<endl;
        cout<<"\t"<<"Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<"\t"<<"Price perday :"<<"\t"<<book[i].price_perday<<endl;
        cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<"\t"<<"Available to borrow"<<endl;
		     }else{
			cout<<"\t"<<"Not available to borrow"<<endl;
			cout<<"\t"<<"has been borrowed by "<<member[li].username<<" on "<<book[bli].bday<<"/"<<book[bli].bmonth<<"/"<<book[bli].byear<<endl;
		}
        cout<<endl;
		}	
	}
			cout<<"Enter number of the book :";
			cin>>i;
			delete_book(i,countbook);
		       break;
		case 4:
			manager_menu();
		       break;
		default :
		    		cout<<setw(70);
		    			cout<<endl;
	                       cout<<"ERROR! INVALID INPUT!";
	        sleep(1.5);
	        exit(0);
		       break;
}
}
void delete_book(int i, int &countbook){
		for(i=i-1;i<countbook;i++){
        strcpy(book[i].id,book[i+1].id);
        strcpy(book[i].title,book[i+1].title);
        strcpy(book[i].author,book[i+1].author);
        strcpy(book[i].genre,book[i+1].genre);
        book[i].price_perday=book[i+1].price_perday;
cout<<"\t"<<"Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        book[i].situation=book[i+1].situation;
         --countbook;
     }
    system("cls");
cout<<"Done!"<<endl;
	 if(countbook==0){
		cout<<"List is empty!"<<endl;
		cout<<endl;
	}else{
	for( i=0;i<countbook;i++){
		cout<<i+1<<".";
		cout<<" Id :"<<"\t"<<book[i].id<<endl;
        cout<<" Title :"<<"\t"<<book[i].title<<endl;
        cout<<" Author :"<<"\t"<<book[i].author<<endl;
        cout<<" Genre :"<<"\t"<<book[i].genre<<endl;
        cout<<" Price perday :"<<"\t"<<book[i].price_perday<<endl;
cout<<" Publication date :"<<"\t"<<book[i].pday<<"/"<<book[i].pmonth<<"/"<<book[i].pyear<<endl;
        if(book[i].situation==false){
        	 cout<<" Available to borrow"<<endl;
		}else{
			cout<<" Not available to borrow"<<endl;
		}
        cout<<endl;
		}	
	}
	 cout<<"1. Back to manager menu"<<endl;   
	 cout<<"2. Back to main menu"<<endl;  
	 cout<<"Choose an option above :";
	 	 int t;
	 cin>>t;
	 system("cls");
	          switch(t){
	             	case 1:
	 		            manager_menu();
	 		                 break;
	              	case 2:
	  		            main_menu();
	 		                 break;
	 	        	default :
		    			        cout<<setw(70);
		    			          cout<<endl;
	                                 cout<<"ERROR! INVALID INPUT!";
	                    sleep(1.5);
	                    exit(0);
		    			      break;
	 }
		} 
void member_login(){
	system("cls");
	system("color 8");
	    cout<<"...Member Login..."<<endl;
			cout<<endl;		    
		cout<<"Enter your username:"<<endl;
			 char username[size];
			cin.ignore();
			cin.getline(username,size);
	    cout<<"Enter your password:"<<endl;
		    long long password;
		    cin>>password;
		    for(int i=0;i<countmember;i++){
		    if(member[i].password==password && (strcmp(member[i].username,username)==0)){
		    	    li=i;
		         	member[li];
		        	system("cls");
				member_menu();
			}
		}
	system("cls");
			cout<<"Wrong password or wrong username!"<<endl;
				cout<<endl;
				cout<<"1. Try again"<<endl;
				cout<<"2. Back to main menu"<<endl;
				int e;
				cin>>e;
				system("cls");
				  switch(e){
    				 	case 1:
						       member_login();
						          break;
     					case 2:
						       main_menu();
						          break;
						default :
		    			          cout<<setw(70);
		    			            cout<<endl;
	                                   cout<<"ERROR! INVALID INPUT!";
	                           sleep(1.5);
	                           exit(0);
		    			          break;
				}	
		}
void member_registration(){
		system("cls");
		system("color 8");
			cout<<"..Member Registration.."<<endl;
			cout<<endl;
      		cout<<"Enter a username:"<<endl;
      			loop:
      				int w=0;
      				cin.ignore();
				         cin.getline(member[countmember].username,size);
      				  for(int i=0;i<countmember;i++){
      					if(strcmp(member[countmember].username,member[i].username)==0){
      							w++;
					  }
				  }
			   if(w>0){
				  	cout<<"This username has been used.Enter another username :"<<endl;
				  	  goto loop;
					  }
    cout<<"Enter your first name :"<<endl;
      	    istream& ignore(streamsize n=1, int delim = EOF);
			cin.getline(member[countmember].firstname,size);
    cout<<"Enter your last name:"<<endl;
      		cin.getline(member[countmember].lastname,size);
    cout<<"Enter your phone number:"<<endl;
      		cin>>member[countmember].phone_number;
    cout<<"Enter a password:"<<endl;
      		cin>>member[countmember].password;
    cout<<"You registered successfuly on "<<day<<"/"<<month<<"/"<<year<<"!"<<endl;
      		member[countmember].day=day;
      		member[countmember].month=month;
      		member[countmember].year=year;
      		member[countmember].expyear=member[countmember].year+1;
      		countmember++;
      		cout<<endl;
      		system("cls");
      	li=countmember-1;
	member_menu();
	}
void member_list(){
    system("cls");
       cout<<"...Member List..."<<endl;
       cout<<endl;
	  int j;
	            if(countmember==0){
		           cout<<"List is empty!"<<endl;
		           cout<<endl;
                   cout<<"1. Go back to manager menu"<<endl;
                   cout<<"2. Go back to main menu"<<endl;
                   cout<<"Choose an option above :";
                int r;
                            cin>>r;
                system("cls");
                    switch(r){
     	                case 1:
     		     		 manager_menu();
     		                break;
     	                case 2:
     		             main_menu();
     		                break;
     		            default :
		    			        cout<<setw(70);
		    			           cout<<endl;
	                                  cout<<"ERROR! INVALID INPUT!";
	                     sleep(1.5);
	                     exit(0);
		    			     break;
	 }    
	}else{
		 for(j=0;j<countmember;j++){
	                    cout<<j+1<<"."<<endl;
		                cout<<" Username :"<<"\t"<<member[j].username<<endl;
		                cout<<" Firstname :"<<"\t"<<member[j].firstname<<endl;
                		cout<<" Lastname :"<<"\t"<<member[j].lastname<<endl;
                		cout<<" Phone number :"<<"\t"<<member[j].phone_number<<endl;
                		cout<<" Password :"<<"\t"<<member[j].password<<endl;
                 		cout<<" Brrow count :"<<"\t"<<member[j].bbem<<endl;
                		cout<<" Joining date :"<<"\t"<<member[j].day<<"/"<<member[j].month<<"/"<<member[j].year<<endl;
	                   	cout<<" Joining exp :"<<"\t"<<member[j].day<<"/"<<member[j].month<<"/"<<member[j].expyear<<endl;
	                	cout<<endl;		
	}
	    cout<<"1. Delete member"<<endl;
        cout<<"2. Go back to manager menu"<<endl;
        cout<<"3. Go back to main menu"<<endl;
        cout<<"Choose an option above :";
    int r;
     cin>>r;
           switch(r){
                	case 1 :
     		                       cout<<"Enter number of the member :";
     		                     cin>>j;
     		                   system("cls");
     		            delete_member(j,countmember);
                            		break;
                	case 2:
     		                   system("cls");
     		     		manager_menu();
                            		break;
                   	case 3:
     		                   system("cls");
     		            main_menu();
                            		break;
            		default :
            			system("cls");
		    			              cout<<setw(70);
		    			            cout<<endl;
	                            cout<<"ERROR! INVALID INPUT!";
	                    sleep(1.5);
	                    exit(0);
            		    			break;
	 }
	}
}
void delete_member(int j, int &countmember){
		for(j=j-1;j<countmember;j++){
			char r[size];
			strcpy(r,member[j].username);
			strcpy(member[j].username,member[j+1].username);
			strcpy(member[j+1].username,r);
			   strcpy(r,member[j].firstname);
			   strcpy(member[j].firstname,member[j+1].firstname);
			   strcpy(member[j+1].firstname,r);
			       strcpy(r,member[j].lastname);
			       strcpy(member[j].lastname,member[j+1].lastname);
		       	   strcpy(member[j+1].lastname,r);
			member[j].phone_number=member[j+1].phone_number;
		       member[j].day=member[j+1].day;
			   member[j].month=member[j+1].month;
			   member[j].year=member[j+1].year;
			member[j].expyear=member[j].year+1;
			   member[j].day=member[j+1].day;
			   member[j].month=member[j+1].month;
			   member[j].expyear=member[j+1].expyear;
			   for(int i=0;i<member[j].g;i++){
			   	book[member[j].bbl[i]].situation=false;
			   }
    --countmember;
		} 
		  cout<<"Done!"<<endl;
		  cout<<endl; 
	member_list();
		  cout<<" 1. Back to manager menu"<<endl;
		  cout<<" 2. Back to main menu"<<endl;
		  cout<<"Choose an option above :";
	  int t;
	  cin>>t;
	system("cls");
		 switch(t){
			case 1:
				manager_menu();
			    	break;
			case 2:
				main_menu();
			    	break;
			default :
		    			cout<<setw(70);
		    			cout<<endl;
	                    cout<<"ERROR! INVALID INPUT!";
	            sleep(1.5);
	            exit(0);
		    		break;
		}
	}
void manage_date(int &year,int &month,int &day){
	    cout<<"Change the date by your choice"<<endl;
	    cout<<"Enter year:";
	cin>>year;
	    cout<<"Enter month:";
	cin>>month;
    	cout<<"Enter day:";
	cin>>day;
}
void main_menu(){
	
	system("color 3");
	cout<<"...Welcome to our library!..."<<endl;
	cout<<endl;
        cout<<"1. Member registration"<<endl;
        cout<<"2. Member login"<<endl;
        cout<<"3. Manager login"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Choose an option above :";
    int t;
    cin>>t;
    system("cls");
     switch(t){
		case 1:
			member_registration();
			       break;
		case 2:
			member_login();
			       break;
		case 3:
			manager_login();
		case 4:
			exit(0);
			       break;
		default :
		     cout<<setw(70);
			 cout<<endl;
        	 cout<<"ERROR! INVALID INPUT!";
	        sleep(1.5);
	        exit(0);
		    	   break;
		}
	}
int main(){
	main_menu();		
}

