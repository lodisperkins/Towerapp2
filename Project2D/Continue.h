#pragma once
#include "Hero.h"

class Continue
{
private:
	int numofcontinues=3;
public:
	Continue();

	enum choicestate {play, end, shop, battle, start,broke};
	choicestate choice=start;

	void draw(aie::Renderer2D*, int timer, aie::Font*, Hero* player);
	void drawtext(aie::Renderer2D * renderer, aie::Font*, Hero* player);

	bool subtractGold(Hero* hero);
	
	aie::Texture*       continueStage = new aie::Texture("./textures/continue.png");
	aie::Texture*       hero = new aie::Texture("./textures/HeroSprites/Hero1Front.png");
};