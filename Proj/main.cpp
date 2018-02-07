/* 
 * File:   main.cpp
 * Author: Jasmin Velasquez
 * Created on January 22,2018, 04:47 PM
 *Purpose: To recreate the game MasterMind .
 */

//System Libraries
#include <iostream>
#include <iomanip>//Format Library
#include <cstdlib>
#include <ctime>//Time library for random seed
#include <string>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                      2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Generate Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char    in; //Variable for the users picked categories
    char guess1,guess2,guess3,guess4;//The users guesses for the correct sequence
    char code1,code2,code3,code4;// The 4 possible codes
    char gmestat;//game status 
    float color;//Correct colors
    int trnleft;//turn left
    string UsName;//Allows user to input name 
    float avg;// The percentage of your success rate .
    int slot;
   //Game name
     cout<<"GAME: MASTER MIND [MOD] "<<endl;
    
    //Prompt used to pick one of the following categories
     do{
    cout<<"___________________________________________________________________________________________"<<endl;
    cout<<"\n Pick one of the following categories: "<<endl;
    cout<<" a. The purpose of the game "<<endl;
    cout<<" b. The directions of the game "<<endl;
    cout<<" c. Begin to play the  game "<<endl;
    cout<<"_____________________________________________________________________________________________"<<endl;
    cin>>in;//Users Input Choice
         
    //Lets the user know the purpose of the game
    if(in=='a' || in=='A')
    {
    cout<<"\n The purpose of this MODIFIED game is to have one player guess the secret code chosen by the other player."<<endl;
    cout<<"The code is a sequence of 4 colors chosen from 6 available colors. The code - breaker will pick"<<endl;
    cout<<"4 colors and the position they believe the code- maker arranged them in. The goal is to figure out"<<endl;
    cout<<"which colors are correct as well as arranged. The code - breaker will have 10"<<endl;
    cout<<"opportunities to guess the correct sequence and the 4 correct colors. If they surpass 10 opportunities"<<endl;
    cout<<"then it is GAME OVER ! "<<endl;    
    } 
     //Lets the user know the directions of the game
   if (in=='b' || in=='B'){
        cout<<" DIRECTIONS : "<<endl;\
    cout<<"\nThe following letters represent each color: R=Red, Y=Yellow, O=Orange ,B=Blue ,G=Green , and P=Purple"<<endl;
    cout<<" ENTER the letter of the 4 colors you think the code - maker chose. If you have "<<endl;
    cout<<"successfully picked the correct colors and arrangement of them, the computer will let you know the amount"<<endl;
    cout<<"of correct colors. WARNING: colors can be used multiple times! "<<endl;
    cout<<" GOOD LUCK ! "<<endl;
    } 
    }while(in!='c' && in!='C');
//Beginning of game if user picks choice c
    if(in=='c'|| in=='C'){
       
     //Loop for game /Code maker /Switch statement   
        //Randomizing code1
      srand(time(0));
        switch ((rand() % 6) + 1 )
       {
           case 1: code1='R';
           break;
           case 2: code1='Y';
           break;
           case 3: code1='G';
           break;
           case 4: code1='P';
           break;
           case 5: code1='O';
           break;
           case 6: code1='B';
           break;
          default: cout<<"error";
       }
    
         //Randomizing code 2 
       switch ((rand() % 6) + 1 )
       {
          case 1: code2='R';
           break;
           case 2: code2='Y';
           break;
           case 3: code2='G';
           break;
           case 4: code2='P';
           break;
           case 5: code2='O';
           break;
           case 6: code2='B';
           break;
          default: cout<<"error";
       }
       //Randomizing code3
       switch ((rand() % 6) + 1 )
       {
           case 1: code3='R';
           break;
           case 2: code3='Y';
           break;
           case 3: code3='G';
           break;
           case 4: code3='P';
           break;
           case 5: code3='O';
           break;
           case 6: code3='B';
           break;
          default: cout<<"error";
       }
       //Randomizing code4
       switch ((rand() % 6) + 1 )
       {
           case 1: code4='R';
           break;
           case 2: code4='Y';
           break;
           case 3: code4='G';
           break;
           case 4: code4='P';
           break;
           case 5: code4='O';
           break;
           case 6: code4='B';
           break;
          default: cout<<"error";
       }
      
       
    //Code Breaker        
       cin.ignore();
       cout<<"\n Enter your first name: ";
      getline(cin, UsName);
     
     cout<<"\nEnter the following characters in Capital letters : ";
     cout<<"R=Red, Y=Yellow, O=Orange ,B=Blue ,G=Green , and P=Purple"<<endl;
     cout<<" "<<code1<<" "<<code2<<" "<<code3<<" "<<code4;
     trnleft=10;//Amount of turns the code breaker has.
    bool gmestat=true;//This will continue the game or break out of it.
                      //sets conditions.
   
    //This is were the user will input there there guesses
    while(gmestat==true){
        slot=0;
        color=0;
       
        cout<<"\nYou have "<<trnleft<<" turn left"<<endl;
        cout<<"Input your guess : ";
        cin>>guess1>>guess2>>guess3>>guess4;//code breakers guesses go in here
        
        trnleft--;
    
     //Color and Position 
   //IF for the first input
        if(guess1==code1){  
           
         color++;
        }
        else if(guess1==code1 ||guess1==code2||guess1==code3 || guess1==code4)
         {
          slot++;
         }
        //If for the second input
       if(guess2==code2){  
          
         color++;
       }
        else if (guess2==code2 ||guess2==code3||guess2==code4 || guess2==code1){
           slot++;
       }
        
       //if for the third input
        if(guess3==code3){  
            
            color++;
            
         }
        else  if(guess3==code3||guess3==code2||guess3==code1 || guess3==code4)
            {
            
                slot++;
            }
       
        //if for the fourth input
        if(guess4==code4){  
            
         color++;
         }
        else if(guess4==code4||guess4==code2||guess4==code3 || guess4==code1)
         {
         
             slot++;
         }
        
         cout <<"\n"<<UsName<<" you got "<<fixed<<setprecision(0)<< color <<" in the correct position "<< endl;
         cout<<"\n YOU GOT "<<slot<<" COLORS CORRECT"<<endl;
         
       //Average of correct colors and positions guessed
          avg=static_cast<float>(color/4) * 100;
        cout<<"\n You got "<<fixed<<setprecision(2)<<avg<<" % correct "<<endl;
       //If the user runs out of turns this is what will be output
        if(trnleft==0){
            cout<<"\n"<<UsName<<" you have run out of turns";
            cout<<"\n The sequence is "<<code1<<" "<<code2<<" "<<code3<<" "<<code4;
            
            gmestat=false;//breaks out of the while loop
        
       
        }else if(color==4){//This is if the user gets all 4 colors and positions correctly
         
            cout<<"\nImpressive! "<<"\n"<<UsName<<" you WIN ! "<<endl;
           
            //This breaks out of the while loop
             gmestat=false;
        }
        
   
    }
    
  //Exit Stage Right!
    return 0;

   
}
}

