#pragma once
#include "Shop.h"
#include "Hero.h"
#include "Enemy.h"
#include "Character.h"
#include"item.h"
#include "iterator.h"
#include "list.h"
#include "nodetype.h"
#include"unorderedlist.h"
#include "Renderer2D.h"
#include"newGame.h"
#include "Continue.h"
class Game 
{


public:
	Game();
	void shop(Hero*&);
	void initializeshop();
	Shop item_Shop;
	Hero *player;
	Enemy currentEnemy;
	iterator<Enemy> currentEnemyPtr;
	newGameClass Start;
	Continue between;
	void initializeladder();
	void initializenewladder(Hero*);
	bool gameEnd();
	void draw(aie::Renderer2D * renderer, int state,int timer,aie::Font*);
	Character* ptr;
	int pchoice;
	int echoice;
	enum current { newGame,inShop, inBattle, inContinue,playerturn,enemyturn,viewstats,viewattacks, defending,victory,endGame};
	current gamestate;
	current ladderstate = playerturn;
	
	

	//the combat:
	void battleladder(Hero*&);
	void Continue();
	//linked list:
	unorderedList<Enemy> enemyLadder;
	
};