#include "TowerofDameonApp.h"
#include <time.h>
#include <iostream>
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include <imgui.h>
#include "Application.h"



TowerofDameonApp::TowerofDameonApp()
{
}

bool TowerofDameonApp::startup()
{
	m_2dRenderer = new aie::Renderer2D();
	m_tower = new Game;
	
	m_font = new aie::Font("./font/myfont.ttf", 32);
	m_tower->initializeladder();
	m_tower->gamestate = Game::newGame;
	m_tower->initializeshop();
	m_tower->player = new Hero;
	m_tower->player->initalizeHero();
	m_cameraX = 0;
	m_cameraY = 0;
	m_timer = 0;

	return true;
}


void TowerofDameonApp::shutdown()
{
	delete m_2dRenderer;
}

void TowerofDameonApp::update(float deltaTime)
{
	
	m_timer += deltaTime;
	
	// input example
	aie::Input* input = aie::Input::getInstance();
		switch (m_tower->gamestate)
		{
			case Game::newGame:
			{
				int i = 0;
				m_tower->Start.StartGame(i,m_tower->player);
				if (i == 2)
				{
					m_tower->gamestate = Game::inBattle;
				}
				break;
			}
			case Game::inShop:
			{
				m_tower->shop(m_tower->player);
				break;
			}
			case Game::inBattle:
			{
				m_tower->battleladder(m_tower->player);
				break;
			}
			case(Game::inContinue):
			{
				m_tower->Continue();
				break;
			}
			case(Game::endGame):
			{
				if (m_tower->gameEnd())
				{
					m_tower->player = new Hero;
					m_tower->player->initalizeHero();
					m_tower->initializeshop();
					m_tower->gamestate = Game::newGame;
					m_tower->initializenewladder(m_tower->player);
					m_tower->Start.refresh();
				}
				break;
			}
		}

	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		quit();
}

void TowerofDameonApp::draw()
{
	m_2dRenderer->begin();
	// wipe the screen to the background colour
	clearScreen();
	
	// set the camera position before we begin rendering
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);
	//m_keeprenderer->setCameraPos(m_cameraX, m_cameraY);

	// begin drawing sprites
	

	m_tower->draw(m_2dRenderer,m_tower->gamestate,m_timer*8, m_font);

	

	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());
	m_2dRenderer->drawText(m_font, fps, 0, 720 - 32);
	m_2dRenderer->drawText(m_font, "Press ESC to quit!", 0, 720 - 64);
	m_2dRenderer->end();

}




