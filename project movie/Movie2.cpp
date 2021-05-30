#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void MOVIES(int ch);
void DATE();
void Cinemas();
void Time();
void seats();
int a,b,i,d;
char q;
   struct Seat
	{char row;
		int no;
	}s[10][10];


struct receipt
{ char movie[30];
  char day[20];
  char time[40];
  char cinemas[30];
  Seat selected_seats[4][4];
  int price;
}bill;

class File
{public:
int code[4],select[100];



	void display()
	{cout<<"code: ";
		for(int i=0;i<4;i++)
	    {cout<<code[i]<<" ";
		}
	cout<<endl<<"seats :";
	for(int j=0;j<100;j++)
     	{cout<<select[j]<<" ";
		}
		cout<<endl;
	}
}F;

void assign()
{	for(int i=0;i<10;i++)
		{for(int j=0;j<10;j++)
		{s[i][j].row=char(65+i);
			s[i][j].no=j+1;

		}

	      }

}
int main()
{
assign();





cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@ DRAAG MOVIE BOOKING @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n";
	cout<<"\n";


	int ch;
	for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
	cout<<"\n                                1.Movies";
	cout<<"\n                                2.Date";
	cout<<"\n                                3.Cinemas\n";
		for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
    cout<<"\n";
    cout<<"Enter what you would like to choose (1,2,3) here:";
	cin>>ch;

	switch(ch)
	{case 1 :{ MOVIES(ch);
	           DATE();
	           Cinemas();
	           Time();
	          } break;
	 case 2 : { DATE();
		        MOVIES(ch);
		        Cinemas();
		        Time();
			} break;
     case 3 : { Cinemas();
		        MOVIES(ch);
		        DATE();
		        Time();
			} break;

		default : cout<<"Wrong selection\n";
	}

		for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
    cout<<"\n";
    cout<<"                                   TICKET\n";
    	for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
    cout<<"\n";
	cout<<"MOVIE NAME:"<<bill.movie<<endl;
	cout<<"DAY:"<<bill.day<<endl;
	cout<<"TIME:"<<bill.time<<endl;
	cout<<"VENUE:"<<bill.cinemas<<endl;
	cout<<"PRICE:"<<bill.price<<"/-"<<endl;
		for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
		ofstream fout;
		    {
	          if(a==1&&b==1&&d==1&&q=='a')
     { fout.open("1111.txt",ios::out); }
               else if(a==1&&b==1&&d==1&&q=='b')
     { fout.open("1112.txt",ios::out); }
               else if(a==1&&b==2&&d==1&&q=='a')
     { fout.open("1121.txt",ios::out); }
               else if(a==1&&b==2&&d==1&&q=='b')
     { fout.open("1122.txt",ios::out); }
               else if(a==1&&b==1&&d==2&&q=='a')
     { fout.open("1211.txt",ios::out); }
                else if(a==1&&b==2&&d==2&&q=='b')
     { fout.open("1212.txt",ios::out); }
               else if(a==1&&b==2&&d==2&&q=='a')
     { fout.open("1221.txt",ios::out); }
                else if(a==1&&b==2&&d==2&&q=='b')
     { fout.open("1222.txt",ios::out); }

               else if(a==2&&b==1&&d==1&&q=='a')
     { fout.open("2111.txt",ios::out); }
               else if(a==2&&b==1&&d==1&&q=='b')
     { fout.open("2112.txt",ios::out); }
               else if(a==2&&b==2&&d==1&&q=='a')
     { fout.open("2121.txt",ios::out); }
               else if(a==2&&b==2&&d==1&&q=='b')
     { fout.open("2122.txt",ios::out); }
               else if(a==2&&b==1&&d==2&&q=='a')
     { fout.open("2211.txt",ios::out); }
               else if(a==2&&b==2&&d==2&&q=='b')
     { fout.open("2212.txt",ios::out); }
               else if(a==2&&b==2&&d==2&&q=='a')
     { fout.open("2221.txt",ios::out); }
                else if(a==2&&b==2&&d==2&&q=='b')
     { fout.open("2222.txt",ios::out); }

               else if(a==3&&b==1&&d==1&&q=='a')
     { fout.open("3111.txt",ios::out); }
               else if(a==3&&b==1&&d==1&&q=='b')
     { fout.open("3112.txt",ios::out); }
               else if(a==3&&b==2&&d==1&&q=='a')
     { fout.open("3121.txt",ios::out); }
               else if(a==3&&b==2&&d==1&&q=='b')
     { fout.open("3122.txt",ios::out); }
               else if(a==3&&b==1&&d==2&&q=='a')
     { fout.open("3211.txt",ios::out); }
               else if(a==3&&b==2&&d==2&&q=='b')
     { fout.open("3212.txt",ios::out); }
               else if(a==3&&b==2&&d==2&&q=='a')
     { fout.open("3221.txt",ios::out); }
               else if(a==3&&b==2&&d==2&&q=='b')
     { fout.open("3222.txt",ios::out); }

}





	fout.write((char*)&F,sizeof(F));



	fout.close();

return 0;
}

void MOVIES(int ch)
{

	cout<<" \n                          The Movies available are :"<<endl;
	cout<<"                                1.Airlift"<<endl;
	cout<<"                                2.Revanent"<<endl;
	cout<<"                                3.Iruthi Sutru"<<endl;
		for(int i=0;i<80;i++)
	{
		cout<<"-";
    }
    cout<<"\n";
	cout<<"Enter your choice:";
	cin>>a;

	switch(a)
	{
		case 1 : cout<<"The Movie you have selected is:"<<"\n                                Airlift!\n";
			for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
		strcpy(bill.movie,"Airlift");
		break;
		case 2 : cout<<"The Movie you have selected is:"<<"\n                                Revanent!\n";
			for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
        strcpy(bill.movie,"Revanent");break;
		case 3 : cout<<"The Movie you have selected is:"<<"\n                                Iruthi Sutru!\n";
			for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
        strcpy(bill.movie,"Iruthi sutru");break;

		default:cout<<"wrong choice!!!";
	}


}

void DATE()
{
	cout<<"\n\n                                Avalaible Dates:"<<"\n";
 cout<<"                                     1.Today\n                                     2.Tomorrow"<<endl;
 		for(int i=0;i<80;i++)
	{
		cout<<"-";
    }
   cout<<"\n";
 cout<<"Choose the dates:";
 cin>>d;

 switch(d)
 { case 1 : cout<<"You have selected today!\n";
	 	for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
		strcpy(bill.day,"Today");
		break;
		case 2 : cout<<"You have selected tomorrow!\n";
			for(int i=0;i<80;i++)
	{
		cout<<"*";
    }
       cout<<"\n";
		strcpy(bill.day,"Tomorrow");
		break;
default:cout<<"Wrong choice\n";
}

}

void Cinemas()
{
	cout<<"\n\nAvalaible Cinemas:"<<"\n";
    cout<<"1.LUXE\n2.Escape"<<endl;
    for(int i=0;i<80;i++)
	{
		cout<<"-";
    }
    cout<<"Choose the cinemas:";
    cin>>b;

     switch(b)
     { case 1 :{ cout<<"You have selected Luxe!\n";
         strcpy(bill.cinemas,"Luxe");}
                for(int i=0;i<80;i++)
        {
            cout<<"*";
        }
         break;


            case 2 : {cout<<"You have selected Escape!\n";
                strcpy(bill.cinemas,"Escape");}
                        for(int i=0;i<80;i++)
        {
            cout<<"*";
        }
                break;

        default:cout<<"Wrong choice";
    }
}
void Time()
{cout<<"\n"<<endl;

	if (a==1&&b==1&&d==1)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
        cout<<"a. 10:20 AM \nb. 2:20 PM";
        cout<<"\nChoose the timing:";
        cin>>q;

		  if (q=='a')
            {cout<<"You have selected 10:20 AM show";
              strcpy(bill.time,"10:20");

				   {	ifstream fin;
                      	fin.open("1111.txt",ios::in);
                    	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
        if (q=='b')
            {cout<<"You have selected 2:20 PM show";
		     strcpy(bill.time,"2:20");

 					   {	ifstream fin;
                      	fin.open("1112.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
        }


    else if (a==2&&b==1&&d==1)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 1:20  \nb. 3:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
           {cout<<"You have selected 1:20 show";
            strcpy(bill.time,"1:20");

	 				   {	ifstream fin;
                      	fin.open("2111.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }

    if (q=='b')
           {
            cout<<"You have selected 3:20 show";
            strcpy(bill.time,"3:20");

				   {	ifstream fin;
                      	fin.open("2112.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
        }


    else if (a==3&&b==1&&d==1)
    {cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 4:20  \nb. 5:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
            {cout<<"You have selected 4:20 show";
            strcpy(bill.time,"4:20");
    				   {	ifstream fin;
                      	fin.open("3111.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }


    if (q=='b')
           {cout<<"You have selected 5:20 show";
            strcpy(bill.time,"5:20");

     				   {	ifstream fin;
                      	fin.open("3112.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
   }







	if (a==1&&b==2&&d==1)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
        cout<<"a. 10:20 AM \nb. 2:20 PM";
        cout<<"\nChoose the timing:";
        cin>>q;

		  if (q=='a')
            {cout<<"You have selected 10:20 AM show";
              strcpy(bill.time,"10:20");

				   {	ifstream fin;
                      	fin.open("1121.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
    if (q=='b')
            {cout<<"You have selected 2:20 PM show";
		     strcpy(bill.time,"2:20");

 					   {	ifstream fin;
                      	fin.open("1122.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();
                   }

        	 }
        }


    else if (a==2&&b==2&&d==1)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 1:20  \nb. 3:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
           {cout<<"You have selected 1:20 show";
            strcpy(bill.time,"1:20");

	 				   {	ifstream fin;
                      	fin.open("2121.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	    	fin.close();

                   }

        	 }

    if (q=='b')
           {
            cout<<"You have selected 3:20 show";
            strcpy(bill.time,"3:20");

				   {	ifstream fin;
                      	fin.open("2122.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
        }






    else if (a==3&&b==2&&d==1)
    {cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 4:20  \nb. 5:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
            {cout<<"You have selected 4:20 show";
            strcpy(bill.time,"4:20");
    				   {	ifstream fin;
                      	fin.open("3121.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	    	fin.close();

                   }

        	 }


    if (q=='b')
           {cout<<"You have selected 5:20 show";
            strcpy(bill.time,"5:20");

     				   {	ifstream fin;
                      	fin.open("3122.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
   }

	if (a==1&&b==1&&d==2)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
        cout<<"a. 10:20 AM \nb. 2:20 PM";
        cout<<"\nChoose the timing:";
        cin>>q;

		  if (q=='a')
            {cout<<"You have selected 10:20 AM show";
              strcpy(bill.time,"10:20");

				   {	ifstream fin;
                      	fin.open("1211.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();
                   }

        	 }
    if (q=='b')
            {cout<<"You have selected 2:20 PM show";
		     strcpy(bill.time,"2:20");

 					   {	ifstream fin;
                      	fin.open("1212.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	    	fin.close();

                   }

        	 }
        }


    else if (a==2&&b==1&&d==2)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 1:20  \nb. 3:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
           {cout<<"You have selected 1:20 show";
            strcpy(bill.time,"1:20");

	 				   {	ifstream fin;
                      	fin.open("2211.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	    	fin.close();

                   }

        	 }

    if (q=='b')
           {
            cout<<"You have selected 3:20 show";
            strcpy(bill.time,"3:20");

				   {	ifstream fin;
                      	fin.open("2212.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	    	fin.close();

                   }

        	 }
        }






    else if (a==3&&b==1&&d==2)
    {cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 4:20  \nb. 5:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
            {cout<<"You have selected 4:20 show";
            strcpy(bill.time,"4:20");
    				   {	ifstream fin;
                      	fin.open("3211.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }


    if (q=='b')
           {cout<<"You have selected 5:20 show";
            strcpy(bill.time,"5:20");

     				   {	ifstream fin;
                      	fin.open("3212.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
   }







	if (a==1&&b==2&&d==2)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
        cout<<"a. 10:20 AM \nb. 2:20 PM";
        cout<<"\nChoose the timing:";
        cin>>q;

		  if (q=='a')
            {cout<<"You have selected 10:20 AM show";
              strcpy(bill.time,"10:20");

				   {	ifstream fin;
                      	fin.open("1221.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                       	fin.close();

                   }

        	 }
    if (q=='b')
            {cout<<"You have selected 2:20 PM show";
		     strcpy(bill.time,"2:20");

 					   {	ifstream fin;
                      	fin.open("1222.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                       		fin.close();


                   }

        	 }
        }


    else if (a==2&&b==2&&d==2)
    {
		cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 1:20  \nb. 3:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
           {cout<<"You have selected 1:20 show";
            strcpy(bill.time,"1:20");

	 				   {	ifstream fin;
                      	fin.open("2221.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }

    if (q=='b')
           {
            cout<<"You have selected 3:20 show";
            strcpy(bill.time,"3:20");

				   {	ifstream fin;
                      	fin.open("2222.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
        }






    else if (a==3&&b==2&&d==2)
    {cout<<"The Available Timings For The Show Are"<<endl;
    cout<<"a. 4:20  \nb. 5:20";
    cout<<"\nChoose the timing:";
    cin>>q;
    if (q=='a')
            {cout<<"You have selected 4:20 show";
            strcpy(bill.time,"4:20");
    				   {	ifstream fin;
                      	fin.open("3221.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	  	fin.close();

                   }

        	 }


    if (q=='b')
           {cout<<"You have selected 5:20 show";
            strcpy(bill.time,"5:20");

     				   {	ifstream fin;
                      	fin.open("3222.txt",ios::in);

                       	while(fin.read((char*)&F,sizeof(F)));
                  	   	fin.close();

                   }

        	 }
   }
cout<<"\n\n";
seats();
}

	void seats()
	{
	char a;
	int b,x;
	for(int i=0;i<35;i++)
	{
		cout<<"-";
    }
		cout<<"SCREEN";
		for(int i=0;i<39;i++)
	{
		cout<<"-";
    }cout<<endl<<"                 ";

		for(int j=0;j<100;j++)
     	{if(F.select[j]==1111)
     	{s[j/10][j%10].row='x';}
		}


		for(int i=0;i<10;i++)
       {		for(int j=0;j<10;j++)
	       {
	            cout<<" | "<<s[i][j].row<<s[i][j].no;


               }cout<<" | "<<endl<<"                 ";
       }

	cout<<"\n\nEnter the no of seats:";
	cin>>x;
    bill.price=(120*x);
	cout<<"\n";
	for(int i=0;i<x;i++)
	 {  {cout<<"Select seat number "<<(i+1)<<":";
	    cin>>a>>b;
        }
    for(int i=0;i<10;i++)
       {
           for(int j=0;j<10;j++)
		   if(s[i][j].row==a&&s[i][j].no==b)
		   {s[i][j].row='x';
		   int y;
		   y=(i*10)+j;
		    F.select[y]=1111;

	   }
	   }
	  }
	  /* DISPLAYING SELECTED SEATS
        for(int i=0;i<10;i++)
       {
           for(int j=0;j<10;j++)
           {
               cout<<" | "<<s[i][j].row<<s[i][j].no<<" ";
           }
		  cout<<endl;
      }*/

	}

