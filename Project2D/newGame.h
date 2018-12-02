#pragma once
#include <imgui.h>
#include "Hero.h"

class newGameClass
{
private:
	int count = 0;
public:
	newGameClass();

	void draw(aie::Renderer2D* renderer, int timer, aie::Font* font);

	void drawText(aie::Renderer2D* renderer, aie::Font* font);
	void refresh();
	enum current{talk,assignpoints,end};
	current startstate = talk;
	int talknum=1;
	const char* speak(int);
	aie::Texture* startTexture = new aie::Texture("./textures/newgame.png");
	aie::Texture* spriteTexture = new aie::Texture("./textures/newgamesprite.png");
	Hero StartGame(int&,Hero*&);
};