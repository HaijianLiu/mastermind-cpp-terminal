//
//  GameScreen.cpp
//  Mastermind
//
//  Created by haijian on 2017/05/10.
//  Copyright © 2017 haijian. All rights reserved.
//

#include "GameScreen.hpp"

GameScreen::GameScreen(){
  score[0] = 0;
  score[1] = 0;
  password[0] = 11;
  password[1] = 11;
  password[2] = 11;
  password[3] = 11;
  times = 1;
}

GameScreen::~GameScreen(){
}
