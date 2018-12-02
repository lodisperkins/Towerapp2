#include "newGame.h"

newGameClass::newGameClass()
{
}

void newGameClass::draw(aie::Renderer2D* renderer, int timer, aie::Font* font)
{
	renderer->drawSprite(startTexture, 600, 400, 736, 336);
	renderer->drawSprite(spriteTexture, 600, 295, 97, 129);
	drawText(renderer, font);
}

void newGameClass::drawText(aie::Renderer2D* renderer, aie::Font* font)
{
	renderer->drawText(font, speak(talknum), 220, 200, 0);

	if (count == 0)
	{
		renderer->drawText(font, "2 Items left to take.", 220, 100, 0);
	}

	if (count == 1)
	{
		renderer->drawText(font, "1 item left to take.", 220, 100, 0);
	}
}

void newGameClass::refresh()
{
	count = 0;
	startstate = talk;
	talknum = 1;
}

const char * newGameClass::speak(int num)
{
	const char*say;
	switch (num)
	{
	case 1:
	{
		return say = "Algernon: Looks like we've finally made it to the tower captain!";
	}
	case 2:
	{
		return say = "Algernon: Aargh! I guess I may have taken more damage than I thought huh?";
	}
	case 3:
	{
		return say = "Algernon: I don't think I'll be able to make it up the tower with you captain. Not in this condition.";
	}
	case 4:
	{
		return say = "Algernon: Here, take something of mine to aid you on your journey. Just leave something for me okay?";
	}
	case 5:
	{
		return say = "Algernon: There you go. Ill keep the rest to defend myself. Good luck captain!";
	}
	}
}

Hero newGameClass::StartGame(int& state,Hero*&Player)
{
	switch (startstate)
	{

		case talk:
		{
			if (ImGui::Button("Continue", ImVec2(200, 100)))
			{
				talknum++;
				break;
			}
			if (talknum == 4)
			{
				startstate = assignpoints;
				break;
			}
			break;
		}
		case assignpoints:
		{
			if (count != 2)
			{
				if (ImGui::Button("Take Nothing", ImVec2(200, 100)))
				{
					Player->AssignStartingPoints(0);
					count++;
				}

				if (ImGui::Button("Take Health Potion", ImVec2(200, 100)))
				{
					Player->AssignStartingPoints(1);
					count++;
				}

				if (ImGui::Button("Take Armor Piece", ImVec2(200, 100)))
				{
					Player->AssignStartingPoints(2);
					count++;
				}

				if (ImGui::Button("Take Accuracy Elixer", ImVec2(200, 100)))
				{
					Player->AssignStartingPoints(3);
					count++;
				}

				if (ImGui::Button("Take Strength Elixer", ImVec2(200, 100)))
				{
					Player->AssignStartingPoints(4);
					count++;
				}
				break;
			}
			else if(count == 2)
			{
				state = 2;
			}
		}
	}
	
	return *Player;
}
