#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    int fifty=3;
    string ans2;
    string choice;
    string ans;
    cout<<"                        ********************************"<<endl;
    cout<<"                        **WHO WANTS TO BE A MILLIONARE**"<<endl;
    cout<<"                        ********************************"<<endl;
    string QuestionNumber[] = {"Question","Number","1","2","3","4","5","6","7","8","9","10","11","12"};
    string QuestionValue[] = {"Question","Value","$500","$1000","$2000","$5000","$10,000","$20,000","$50,000","$75,000","$150,000","$250,000","$500,000","$1,000,000"};
    while(choice!="c")
    {
        cout<<"a) Read the instructions."<<endl;
        cout<<"b) Proceed to play game."<<endl;
        cout<<"c) Exit."<<endl;
        cin>>choice;
        if(choice=="a")
        {
            cout<<"Rules : "<<endl;
            cout<<"1) You have to answer 12 questions and you are provided with four choices for      each of them."<<endl;
            cout<<"2) You will earn a certain amount of money for each question until you finally     reach $1,000,000."<<endl;
            cout<<"3) You can type 'quit' as the answer to walk away with the money you have          already earned."<<endl;
            cout<<"4) You will earn a certain amount of money each time you answer a question         correctly.The amount earnt for each question is :"<<endl<<endl;
            for(int N=0; N<14; N++)
            {
                cout<<setw(8)<<QuestionNumber[N]<<setw(12)<<QuestionValue[N]<<endl;
            }
            cout<<"5) You can type '1' as the answer and select the 50/50 lifeline. This lifeline     provides you with 2 options and you have 3 of these lifelines."<<endl;
            cout<<"6) You can now proceed to play the game."<<endl<<endl;;

        }
        if(choice=="b")
        {
            cout<<"WELCOME TO WHO WANTS TO BE A MILLIONARE!"<<endl<<endl;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

            cout<<"Question 1 for $500 :"<<endl;
            cout<<"Who is the current Prime Minister of Canada ?"<<endl;
            cout<<"a) Steven Harper"<<endl<<"b) Justin Trudeau"<<endl<<"c) Hiliary Clinton"<<endl<<"d) Tom Mulcair"<<endl;
            cin>>ans;

            if(ans=="quit")
            {
                cout<<"You have quit the game and you have earned $0."<<endl;
                exit (EXIT_FAILURE);
            }

            else if(ans=="b" || ans=="1")
            {
                if(ans=="1")
                {
                    if(fifty!=0)
                    {
                    fifty=fifty-1;
                    cout<<"You chose the lifeline : 50/50"<<endl;
                    cout<<"Your options are :"<<endl<<"a) Steven Harper"<<endl<<"b) Justin Trudeau"<<endl;
                    cin>>ans2;
                    if(ans2=="b")
                    {
                        cout<<"Correct answer! You have earned $500 and "<<fifty<<" lifelines left."<<endl<<endl;
                    }
                    else if(ans2!="b")
                    {
                        cout<<"Wrong Answer! The correct answer was b) Justin Trudeau.. You didn't win anything."<<endl;
                        exit (EXIT_FAILURE);
                    }
                    }
                    else if(fifty==0)
                    {
                        cout<<"You have already used all your lifelines."<<endl;
                        exit (EXIT_FAILURE);
                    }
                }

                else if(ans=="b")
                {
                    cout<<"Correct Answer! You have earned $500 and "<<fifty<<" lifelines left."<<endl<<endl;
                }


//---------------------------------------------------------------------------------------------------------------------------------------------------------------

                cout<<"Question 2 for $1,000 :"<<endl;
                cout<<"Who led the Canadian troops at Vimy Ridge ?"<<endl;
                cout<<"a) Edwin Alderson"<<endl<<"b) Ludwig von Falkenhausen"<<endl<<"c) Julian Byng"<<endl<<"d) John Snow"<<endl;
                cin>>ans;

                if(ans=="quit")
                {
                    cout<<"You have quit the game and you have earned $500."<<endl;
                    exit (EXIT_FAILURE);
                }
                else if(ans=="c" || ans=="1")
                {
                    if(ans=="1")
                    {
                        if(fifty!=0)
                        {
                        fifty=fifty-1;
                        cout<<"You chose the lifeline : 50/50"<<endl;
                        cout<<"Your options are :"<<endl<<"a) Edwin Alderson"<<endl<<"b) Julian Byng"<<endl;
                        cin>>ans2;
                        if(ans2=="b")
                        {
                            cout<<"Correct answer! You have earned $1,000 and "<<fifty<<" lifelines left."<<endl<<endl;
                        }
                        else if(ans2!="b")
                        {
                            cout<<"Wrong Answer! The correct answer was b) Julian Byng.. You didn't win anything."<<endl;
                            exit (EXIT_FAILURE);
                        }
                        }
                        else if(fifty==0)
                        {
                            cout<<"You have already used all your lifelines."<<endl;
                            exit (EXIT_FAILURE);
                        }
                    }

                else if(ans=="c")
                {
                    cout<<"Correct Answer! You have earned $1,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                }

 //--------------------------------------------------------------------------------------------------------------------------------------------------------------

                    cout<<"Question 3 for $2,000 :"<<endl;
                    cout<<"Nephelococcugiais the practise of doing what ?"<<endl;
                    cout<<"a) Finding shapes in clouds"<<endl<<"b) Sleeping with your eyes closed"<<endl<<"c) Breaking glass with sound"<<endl<<"d) Swimming in freezing water"<<endl;
                    cin>>ans;
                    if(ans=="quit")
                    {
                        cout<<"You have quit the game and earned $1000."<<endl;
                        exit (EXIT_FAILURE);
                    }
                    else if(ans=="a" || ans=="1")
                    {
                        if(ans=="1")
                        {
                        if(fifty!=0)
                            {
                                fifty=fifty-1;
                                cout<<"You chose the lifeline : 50/50"<<endl;
                                cout<<"Your options are :"<<endl<<"a) Finding shapes in clowds"<<endl<<"b) Swimming in freezing water"<<endl;
                                cin>>ans2;
                                if(ans2=="a")
                                {
                                    cout<<"Correct answer! You have earned $2,000 and "<<fifty<<" lifelines left."<<endl<<endl;
                                }
                                else if(ans2!="b")
                                {
                                    cout<<"Wrong Answer! The correct answer was a) Finding shapes in clouds.. You didn't win anything."<<endl;
                                    exit (EXIT_FAILURE);
                                }
                            }
                                else if(fifty==0)
                                {
                                    cout<<"You have already used all your lifelines."<<endl;
                                    exit(EXIT_FAILURE);
                                }
                        }

                    else if(ans=="a")
                    {
                        cout<<"Correct Answer! You have earned $2,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                    }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

                        cout<<"Question 4 for $5,000 :"<<endl;
                        cout<<"Which of these novels is NOT written by Charles Dickens ?"<<endl;
                        cout<<"a) Barnaby Rudge"<<endl<<"b) The Chimes"<<endl<<"c) Little Dorrit"<<endl<<"d) The Fancy"<<endl;
                        cin>>ans;
                        if(ans=="quit")
                        {
                            cout<<"You have quit the game and earned $2,000."<<endl;
                            exit (EXIT_FAILURE);
                        }
                         else if(ans=="d" || ans=="1")
                            {
                                if(ans=="1")
                                {
                                if(fifty!=0)
                                    {
                                        fifty=fifty-1;
                                        cout<<"You chose the lifeline : 50/50"<<endl;
                                        cout<<"Your options are :"<<endl<<"a) The Chimes"<<endl<<"b) The Fancy"<<endl;
                                        cin>>ans2;
                                        if(ans2=="b")
                                        {
                                            cout<<"Correct answer! You have earned $5,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                        }
                                        else if(ans2!="b")
                                        {
                                            cout<<"Wrong Answer! The correct answer was b) The Fancy.. You didn't win anything."<<endl;
                                            exit (EXIT_FAILURE);
                                        }
                                    }
                                        else if(fifty==0)
                                        {
                                            cout<<"You have already used all your lifelines."<<endl;
                                            exit (EXIT_FAILURE);
                                        }
                                }
                        else if(ans=="d")
                        {
                            cout<<"Correct Answer! You have earned $5,000 and have "<<fifty<<" lifelines left."<<endl;
                        }


//---------------------------------------------------------------------------------------------------------------------------------------------------------------

                            cout<<"Question 5 for $10,000 :"<<endl;
                            cout<<"In Ben Stiller's film 'Zoolander', what is the title character's line of work?"<<endl;
                            cout<<"a) Plastic Surgeon"<<endl<<"b) Male Model"<<endl<<"c) Landscape Gardener"<<endl<<"d) Animal Rescue"<<endl;
                            cin>>ans;
                            if(ans=="quit")
                            {
                                cout<<"You have quit the game and earned $5,000"<<endl;
                                exit (EXIT_FAILURE);
                            }
                            else if(ans=="b" || ans=="1")
                            {
                                if(ans=="1")
                                {
                                if(fifty!=0)
                                    {
                                        fifty=fifty-1;
                                        cout<<"You chose the lifeline : 50/50"<<endl;
                                        cout<<"Your options are :"<<endl<<"a) Animal Rescuer"<<endl<<"b) Male Model"<<endl;
                                        cin>>ans2;
                                        if(ans2=="b")
                                        {
                                            cout<<"Correct answer! You have earned $10,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                        }
                                        else if(ans2!="b")
                                        {
                                            cout<<"Wrong Answer! The correct answer was b) Male Model.. You didn't win anything."<<endl;
                                            exit (EXIT_FAILURE);
                                        }
                                    }
                                        else if(fifty==0)
                                        {
                                            cout<<"You have already used all your lifelines."<<endl;
                                            exit (EXIT_FAILURE);
                                        }
                                }
                            else if(ans=="b")
                            {
                                cout<<"Correct Answer! You have earned $10,000 and have "<<fifty<<" lifelines left."<<endl;
                            }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

                                cout<<"Question 6 for $20,000 :"<<endl;
                                cout<<"Tic-tac-toe is an American term for which of these games ?"<<endl;
                                cout<<"a) Snakes and Ladders"<<endl<<"b) Poker"<<endl<<"c) Noughts and Crosses"<<endl<<"d) Whilst"<<endl;
                                cin>>ans;
                                if(ans=="quit")
                                {
                                    cout<<"You have quit the game and earned $20,000."<<endl;
                                    exit (EXIT_FAILURE);
                                }
                                else if(ans=="c" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Noughts and Crosses"<<endl<<"b) Snakes and Ladders"<<endl;
                                                cin>>ans2;
                                                if(ans2=="a")
                                                {
                                                    cout<<"Correct answer! You have earned $20,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="a")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was b) Snakes ans Ladders.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                            else if(ans=="c")
                            {
                                cout<<"Correct Answer! You have earned $20,000 and have "<<fifty<<" lifelines left."<<endl;
                            }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

                                    cout<<"Question 7 for $50,000 :"<<endl;
                                    cout<<"Complete the title of the 2003 Disney release, 'Pirates of the _____'?"<<endl;
                                    cout<<"a) Black Sea"<<endl<<"b) Atlantic"<<endl<<"c) English Channel"<<endl<<"d) Carribean"<<endl;
                                    cin>>ans;
                                    if(ans=="quit")
                                    {
                                        cout<<"You have quit the game and earned $20,000."<<endl;
                                        exit (EXIT_FAILURE);
                                    }
                                    else if(ans=="d" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Black Sea"<<endl<<"b) Carribean"<<endl;
                                                cin>>ans2;
                                                if(ans2=="b")
                                                {
                                                    cout<<"Correct answer! You have earned $50,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="b")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was d) Carribean.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                    else if(ans=="c")
                                    {
                                        cout<<"Correct Answer! You have earned $50,000 and have "<<fifty<<" lifelines left."<<endl;
                                    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
                                        cout<<"Question 8 for $75,000 :"<<endl;
                                        cout<<"Which country shares a land border with the UK ?"<<endl;
                                        cout<<"a) Portugal"<<endl<<"b) Libya"<<endl<<"c) Vietman"<<endl<<"d) Ireland"<<endl;
                                        cin>>ans;
                                        if(ans=="quit")
                                        {
                                            cout<<"You have quit the game and earned $50,000."<<endl;
                                            exit (EXIT_FAILURE);
                                        }
                                    else if(ans=="d" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Portugal"<<endl<<"b) Ireland"<<endl;
                                                cin>>ans2;
                                                if(ans2=="b")
                                                {
                                                    cout<<"Correct answer! You have earned $50,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="b")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was d) Carribean.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                    else if(ans=="c")
                                    {
                                        cout<<"Correct Answer! You have earned $75,000 and have "<<fifty<<" lifelines left."<<endl;
                                    }
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
                                            cout<<"Question 9 for $100,000 :"<<endl;
                                            cout<<"Which of these describes something which causes stress or anxiety?"<<endl;
                                            cout<<"a) Knee-racking"<<endl<<"b) Nerve-racking"<<endl<<"c) Nudule-racking"<<endl<<"d) Nose-racking"<<endl;
                                            cin>>ans;
                                            if(ans=="quit")
                                            {
                                                cout<<"You have quit the game and earned $75,000."<<endl;
                                                exit (EXIT_FAILURE);
                                            }
                                    else if(ans=="b" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Knee-racking"<<endl<<"b) Nerve-racking"<<endl;
                                                cin>>ans2;
                                                if(ans2=="b")
                                                {
                                                    cout<<"Correct answer! You have earned $100,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="b")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was b) Nerve-racking.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                    else if(ans=="b")
                                    {
                                        cout<<"Correct Answer! You have earned $100,000 and have "<<fifty<<" lifelines left."<<endl;
                                    }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
                                            cout<<"Question 10 for $250,000 :"<<endl;
                                            cout<<"What type of protective headgear do motorcyclists wear?"<<endl;
                                            cout<<"a) Biking Helmet"<<endl<<"b) Motor Helmet"<<endl<<"c) Crash Helmet"<<endl<<"d) Mash Helmet"<<endl;
                                            cin>>ans;
                                            if(ans=="quit")
                                            {
                                                cout<<"You have quit the game and earned $100,000."<<endl;
                                                exit (EXIT_FAILURE);
                                            }
                                    else if(ans=="c" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Biking Helmet"<<endl<<"b) Crash Helmet"<<endl;
                                                cin>>ans2;
                                                if(ans2=="b")
                                                {
                                                    cout<<"Correct answer! You have earned $250,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="b")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was b) Biking Helmet.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                    else if(ans=="b")
                                    {
                                        cout<<"Correct Answer! You have earned $250,000 and have "<<fifty<<" lifelines left."<<endl;
                                    }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                cout<<"Question 11 for $500,000 :"<<endl;
                                                cout<<"Which of the following men does NOT have a chemical named after them ?"<<endl;
                                                cout<<"a) Albert Einstein"<<endl<<"b) Isaac Newton"<<endl<<"c) Niels Bohr"<<endl<<"d) Enrico Fermi"<<endl;
                                                cin>>ans;
                                                if(ans=="quit")
                                                {
                                                    cout<<"You have quit the game and earned $250,000."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                    else if(ans=="b" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Isaac Newton"<<endl<<"b) Enrico Fermi"<<endl;
                                                cin>>ans2;
                                                if(ans2=="a")
                                                {
                                                    cout<<"Correct answer! You have earned $500,000 and have "<<fifty<<" lifelines left."<<endl<<endl;
                                                }
                                                else if(ans2!="a")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was b) Isaac Newton.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                    else if(ans=="b")
                                    {
                                        cout<<"Correct Answer! You have earned $500,000 and have "<<fifty<<" lifelines left."<<endl;
                                    }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                    cout<<endl<<"FINAL QUESTION FOR $1,000,000 :"<<endl<<endl<<endl;
                                                    cout<<"Which insect shorted out an early supercomputer and inspires the term 'Computer Bug'?"<<endl<<endl;
                                                    cout<<"a) Moth"<<endl<<"b) Roach"<<endl<<"c) Fly"<<endl<<"d) Japanese Beetle"<<endl;
                                                    cin>>ans;
                                                    if(ans=="quit")
                                                    {
                                                        cout<<"You have quit the game and earned $500,000."<<endl;
                                                        exit (EXIT_FAILURE);
                                                    }
                                    else if(ans=="a" || ans=="1")
                                    {
                                        if(ans=="1")
                                        {
                                        if(fifty!=0)
                                            {
                                                fifty=fifty-1;
                                                cout<<"You chose the lifeline : 50/50"<<endl;
                                                cout<<"Your options are :"<<endl<<"a) Moth"<<endl<<"b) Fly"<<endl;
                                                cin>>ans2;
                                                if(ans2=="a")
                                                {
                                                        cout<<endl<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
                                                        cout<<"         $$ CORRECT ANSWER!! YOU HAVE WON THE GAME AND $1,000,000! $$"<<endl;
                                                        cout<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl;
                                                }
                                                else if(ans2!="a")
                                                {
                                                    cout<<"Wrong Answer! The correct answer was a) a) Moth.. You didn't win anything."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                            }
                                                else if(fifty==0)
                                                {
                                                    cout<<"You have already used all your lifelines."<<endl;
                                                    exit (EXIT_FAILURE);
                                                }
                                        }
                                                    else if(ans=="a")
                                                    {
                                                        cout<<endl<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
                                                        cout<<"         $$ CORRECT ANSWER!! YOU HAVE WON THE GAME AND $1,000,000! $$"<<endl;
                                                        cout<<"         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl;
                                                    }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                        }
            else
            {
                cout<<"Wrong Answer! The correct answer was a) Moth. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                                    }
            else
            {
                cout<<"Wrong Answer! The correct answer was b) Isaac Newton. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                                }
            else
            {
                cout<<"Wrong Answer! The correct answer was C) Crash Helmet. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was b) Nerve-racking. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                        }
            else
            {
                cout<<"Wrong Answer! The correct answer was d) Ireland. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                    }
             else
            {
                cout<<"Wrong Answer! The correct answer was d) Carribean. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                                }
            else
            {
                cout<<"Wrong Answer! The correct answer was c) Noughts and Crosses. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was b) Male Model. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was d) The Fancy. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was a) Finding shapes in clouds. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was c) Julian Byng You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
                            }
            else
            {
                cout<<"Wrong Answer! The correct answer was b) Justin Trudeau.. You didn't win anything."<<endl;
                exit (EXIT_FAILURE);
            }
        }
    }

    return 0;
}

