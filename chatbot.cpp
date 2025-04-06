#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function

using namespace std;

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    //time_t represent calender time and time(0) returns the system time in second since 1/1/1970
    tm *time = localtime(&now); // convert into local time

    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir/Mam"<<endl;
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon sir/Mam"<<endl;
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening sir/Mam"<<endl;
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now); 
    // ctime converts a time value to a character string that represents the date and time 
    cout<<"The date and time is "<<endl<< dt <<endl;
}

int main()
{
    system("cls"); // clear the screen

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M A VIRTUAL ASSISTANT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= MY NAME IS CHATBOT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; // to take command from the user

    
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;

        gets(password);// take password

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "Sumit")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            datetime();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you sir/mam...."<<endl<<endl;

                cout<<"Your query ===> ";
                gets(ch); // take input
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello sir/mam....."<<endl;
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir/mam, have a nice day!!!!"<<endl;
                    break;
                   
                }
                
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant created by sumit  !!!"<<endl;
                   
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir/mam, tell me how can i help you.."<<endl;
                    
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }
                   else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
              
                    
                

                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google....."<<endl;
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opeining YouTube....."<<endl;
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    system("start https://www.instagram.com");
                }

                else if(strcmp(ch, "play song") == 0){
                    cout<<"playing a song";
                    system("start https://www.youtube.com/watch?v=cWMxCE2HTag");
                }

                else{
                    cout<<"Sorry could not understand your query please try again !!!"<<endl;
                }


            }while(1); // alway condition is true
        }
        else
                {
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS sumit =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    
                }
    
    

    return 0;
}