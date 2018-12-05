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
	//Creates a shop for the player to interact with.
	Shop item_Shop;
	//Creates a hero for the player to control.
	Hero *player;
	Enemy currentEnemy;
	iterator<Enemy> currentEnemyPtr;
	//Creates a variable of type newgame that is used to call fucntions only needed when starting a new game
	newGameClass Start;
	//Creates a variable of type continue that is used to call fucntions only needed when in the continue state
	Continue between;

	//Creates a new linked list and assigns the enemies their attack and stats.
	void initializeladder();
	//Creates a new linked list and assigns the enemies their attack and stats. Also adds the players previous character to the list of enemies.
	void initializenewladder(Hero*);
	//Asks the player if they want to play again, if not returns false.
	bool gameEnd();
	//Used to draw text and sprites to the screen.
	void draw(aie::Renderer2D * renderer, int state,int timer,aie::Font*);
	Character* ptr;
	//Creates a variable used to access the listofattacks array based on  the player choice of an attack they would like to use.
	int pchoice;
	//Creates a variable used to access the listofattacks array based on a randomly generated number.
	int echoice;
	//Creates a variable used in a switch todetermine the current gamestate the game is in.
	enum current { newGame,inShop, inBattle, inContinue,playerturn,enemyturn,viewstats,viewattacks, defending,victory,endGame};
	current gamestate;
	current ladderstate = playerturn;
	
	

	//the combat:
	void battleladder(Hero*&);
	void Continue();
	//linked list:
	unorderedList<Enemy> enemyLadder;
	
};