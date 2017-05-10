//
//  main.cpp
//  Mastermind
//
//  Created by haijian on 2017/05/10.
//  Copyright © 2017 haijian. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <termios.h>
#include <curses.h>
#include <stdlib.h>
#include "TitleScreen.hpp"
#include "GameScreen.hpp"


int main(void) {
  // Initiate Menu
  char menu = 50;

  // Initiate Class
  TitleScreen titleScreen;
  GameScreen gameScreen;

  // Random Seed Initiate
  srand((unsigned)time(NULL));

  // Main Title + Game Loop
  while (menu == 50) {

    // Title Screen
    titleScreen.MainTitleFunction();
    titleScreen.MainTutorialFunction();

    // Start Main Game
    menu = 49;

    // Main Game Loop
    while (menu == 49) {
      // Initiate
      system("clear");
      gameScreen.PrintTitle();
      gameScreen.SetPassword();

      // Main Check Loop
      while (gameScreen.GetScore(0) < 4 && gameScreen.GetTimes() < 15) {
        gameScreen.PrintTimes();
        gameScreen.InputPassword();
        gameScreen.ResetScore();
        gameScreen.CheckPassword();
        gameScreen.TimesPlus();
      }

      // Game Over
      gameScreen.GameOver();
      menu = gameScreen.GetKey();

      // Reset Password & User Input
      gameScreen.ResetGame();
    }
  }

  return 0;
}
