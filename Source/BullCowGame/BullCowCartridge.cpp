// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine (TEXT("Welcome to bull cows!"));
    PrintLine (TEXT("Guess the 4 letter word..."));//Magic number remove!
    PrintLine (TEXT("To play press enter!"));
    PrintLine (TEXT("You have 5 lives"));
    HiddenWord = TEXT("cake");//Set up HiddenWord
    
    Health = 5;
    
    if(Health = 0)
    {
        PrintLine(TEXT("YOU LOSE..."));
    }
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if(Input==HiddenWord)
    {
        PrintLine(TEXT("Great Job!"));
    }else{
        PrintLine(TEXT("Bad Luck, try again!"));
        --Health;
    }
    PrintLine(TEXT("You have"));
}