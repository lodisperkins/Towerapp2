#pragma once
#include "item.h"
#include <vector>
#include "defenseitem.h"
#include "attackitem.h"
#include <imgui.h>
#include "Renderer2D.h"
#include "Font.h"
#include"Texture.h"
class Shop
{
private:
	//A store has two lists:one to hold defense items called armor stock and one to hold attack items called attackstock
	std::vector<DefenseItem> armorstock;
	std::vector<AttackItem> attackstock;
public:
	Shop();
	Shop(std::vector<DefenseItem>armor, std::vector<AttackItem>attack);
	//Returns an item at the index of the choice argument then deletes it from the list
	AttackItem sellattack(int choice);
	DefenseItem selldefense(int choice);
	
	//Used to get the name of the item at the given index.
	const char* viewAttacks(int num);
	const char*viewArmor(int num);

	//Used to get the size of the desired item stock.
	int getstocksize(int choice);

	//Used to determine whether the player can afford an item.
	bool affordattack(int item, int gold);
	bool afforddefense(int item, int gold);

	//Used to draws text and sprites on the screen
	void draw(aie::Renderer2D*,int timer,aie::Font*);
	void drawtext(aie::Renderer2D * renderer, aie::Font*);
	void drawsprite(aie::Renderer2D*, int timer, aie::Font*);

	//Used to delete the armorstock,and attackstock.
	void destroy();

	//Used to switch states to manage and update the user interface.
	enum storestate {welcome,sell,viewItems,viewDefenseItems,viewAttackItems,viewUpgrades,bought,wait,broke};
	storestate shopstate=welcome;	
	enum sellstate {idle,sold,greet};
	sellstate spritestate;
	enum menustate{ attacklist, armorlist,shoplist,replaceattack, replacearmor };
	menustate itemlists= shoplist;

	//The shops textures for animation
	aie::Texture*       idletexture = new aie::Texture("./textures/idle.png");
	aie::Texture*       welcometexture = new aie::Texture("./textures/welcome.png");
	aie::Texture*       selltexture = new aie::Texture("./textures/sell.png");
	aie::Texture*       shop= new aie::Texture("./textures/shop.png");
	aie::Texture*       hero = new aie::Texture("./textures/HeroSprites/Hero1Back.png");
	aie::Texture*       shopkeep;
	
};