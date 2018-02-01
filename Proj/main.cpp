/* 
 * File:   main.cpp
 * Author: Jasmin Velasquez
 * Created on January 22,2018, 04:47 PM
 *Purpose: To recreate the game MasterMind .
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>//Format Library
#include <cstdlib> //Random number function
#include <ctime>//Time library for random seed
#include <string>
#include <fstream>

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
    char turn;//User will enter Y to continue game and N to exit
    char guess1,guess2,guess3,guess4;//The users guesses for the correct sequence
    char code1,code2,code3,code4;// The 4 possible codes
    int turns;
    int color;//Correct colors
    int trnleft;//turn left
    char gmestat;//game status 
    
    
    //Game name
     cout<<"GAME: MASTER MIND "<<endl;
    
    //Prompt used to pick one of the following categories
    
    cout<<" Pick one of the following categories: "<<endl;
    cout<<" a. The purpose of the game "<<endl;
    cout<<" b. The directions of the game "<<endl;
    cout<<" c. Begin to play the  game "<<endl;
    cin>>in;//Users Input Choice
     
    
    //Lets the user know the purpose of the game
    if(in=='a' || in=='A')
    {
    cout<<"\n The purpose of this game is to have one player guess the secret code chosen by the other player."<<endl;
    cout<<"The code is a sequence of 4 colors chosen from 6 available colors. The code - breaker will pick"<<endl;
    cout<<"4 colors and the position they believe the code- maker arranged them in. The goal is to figure out"<<endl;
    cout<<"which colors are correct and which positioned colors are correct. The code - breaker will have 10"<<endl;
    cout<<"opportunities to guess the correct sequence and the 4 correct colors. If they surpass 10 opportunities"<<endl;
    cout<<"then it is GAME OVER ! "<<endl;    
    } 
     //Lets the user know the directions of the game
   if (in=='b' || in=='B'){
        cout<<" DIRECTIONS : "<<endl;\
    cout<<"\nThe following numbers represent each color: R=Red, Y=Yellow, O=Orange ,B=Blue ,G=Green , and P=Purple"<<endl;
    cout<<" ENTER 4 numbers from 1 - 6 in the order of the 4 colors you think the code - maker chose. If you have "<<endl;
    cout<<"successfully picked the correct color(s) or correct position(s), the computer will let you know the amount"<<endl;
    cout<<"of correct colors or positions chosen. "<<endl;
    cout<<" GOOD LUCK ! "<<endl;
     
    } 
    
//Beginning of game if user picks choice c
    if(in=='c'|| in=='C'){
     //Loop for game
      
        //Code maker    
       //Switch statement 
       //Code1
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
    
         //code 2 
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
    cout<<"R=Red, Y=Yellow, O=Orange ,B=Blue ,G=Green , and P=Purple"<<endl;
    
     cout<<code1<<" "<<code2<<" "<<code3<<" "<<code4;
     cout<<"Testiing for "<<endl;
     
    
    trnleft=10;
    gmestat='Y';
    
    while(gmestat=='y' || gmestat=='Y'){
        color=0;
        cout<<"\nYou have "<<trnleft<<" turn left"<<endl;
        cout<<"Input your guess : ";
        cin>>guess1>>guess2>>guess3>>guess4;
        
        trnleft--;
      
     if(guess1==code1 ){  
        
         color++;
         
     }
       if(guess2==code2){  
        
         color++;
         
     }
        if(guess3==code3){  
        
         color++;
         
     }
        if(guess4==code4){  
        
         color++;
         
     }
    
        cout <<"\nYou got "<< color << " right!"<< endl;
        
        if(trnleft==0){
            cout<<" You have run out of turns";
            cout<<" The sequence is "<<code1<<" "<<code2<<" "<<code3<<" "<<code4;
            gmestat='N';
        }
        if(color==4){
         
            cout<<"You win "<<endl;
           gmestat='N'; 
        }
        
    }
    
    
    //Exit Stage Right!
    
    return 0;
}
}

