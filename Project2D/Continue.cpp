#include "Continue.h"

bool Continue::subtractGold(Hero * player)
{
	if (player->viewgold() >= 500)
	{
		player->viewgold() - 500;
		return true;
	}
	else
	{
		return false;
	}
}

Continue::Continue()
{
}

void Continue::draw(aie::Renderer2D *renderer, int timer, aie::Font *font, Hero * player)
{
	renderer->drawSprite(continueStage, 600, 450, 500, 583);
	renderer->drawSprite(hero, 600, 250, 57, 92);

	drawtext(renderer, font, player);
}

void Continue::drawtext(aie::Renderer2D * renderer, aie::Font *font, Hero * player)
{
	switch (choice)
	{
	case start:
	{
		renderer->drawText(font, "Continue?", 300, 100, 100);
		break;
		
	}

	case(play):
	{
			renderer->drawText(font, "Ready to go again?", 300, 100, 100);
			break;
	}

	case broke:
	{
		renderer->drawText(font, "You do not have enough gold to continue", 300, 100, 100);
		renderer->drawText(font, "Press escape to exit game.", 300, 50, 100);
		break;
	}
	case(end):
	{
		renderer->drawText(font, "Press escape to exit game.", 300, 100, 100);
		break;
	}
	}
}


