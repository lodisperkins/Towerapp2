#include <time.h>
#include "Game.h"
#include<iostream>
void Game::initializeshop()
{

	std::vector<DefenseItem> armor_Stock;
	std::vector<AttackItem> attack_stock;

	Armor bestArmor("Drink Of The Gods", -20.0, 200.0, .10);
	Armor exhealing_Elixer("Fairy Elixer", -10.0, 100.0, .10);
	Armor healing_Elixer("Ahlian Water", 0.0, 30.0, .03);

	Armor exhealing_Potion("Super Health Potion", -5.0, 60.0, 0);
	Armor healing_Potion("Health Potion", 0.0, 30.0, 0);

	Armor exstrength_Elixer("Titan Elixer", 10.0, -30.0, .10);
	Armor strength_Elixer("Goliath Elixer", 5.0, 0.0, 0.05);

	Armor exstrength_potion("Mighty Potion", 0.0, -50.0, 0.6);
	Armor strength_Potion("Strength Potion", 0.0, 0.0, 0.03);

	Armor exdefense_Potion("Super Defense Potion", 12.0, 0.0, -0.2);
	Armor defense_potion("Defense Potion", 5.0, 0.0, 0.0);


	DefenseItem bestArmor_Item("Drink Of The Gods \n Price: 1200g\n  Level: 5", 1200, bestArmor);
	DefenseItem exhealing_Elixer_Item("Fairy Elixer \n Price: 200g\n  Level: 3", 200, exhealing_Elixer);
	DefenseItem healing_Elixer_Item("Ahlian Water \n Price: 150g\n  Level: 3", 150, healing_Elixer);

	DefenseItem exhealing_Potion_Item("Super Health Potion \n Price: 110g\n  Level: 2", 110, exhealing_Potion);
	DefenseItem  healing_Potion_Item("Health Potion \n Price: 50g\n  Level: 1", 50, healing_Potion);

	DefenseItem exstrength_Elixer_Item("Titan Elixer \n Price: 200g\n  Level: 2", 200, exstrength_Elixer);
	DefenseItem strength_Elixer_Item("Goliath Elixer \n Price: 150g\n  Level: 1", 150, strength_Elixer);

	DefenseItem exstrength_Potion_Item("Mighty Potion \n Price: 110g\n  Level: 2", 110, exstrength_potion);
	DefenseItem strength_Potion_Item("Strength Potion \n Price: 50g\n  Level: 1", 50, strength_Potion);

	DefenseItem exdefense_Potion_Item("Super Defense Potion \n Price: 110g\n  Level: 2", 110, exdefense_Potion);
	DefenseItem defense_Potion_Item("Defense Potion \n Price: 50g\n  Level: 1", 50, defense_potion);


	armor_Stock.push_back(defense_Potion_Item);
	armor_Stock.push_back(exdefense_Potion_Item);
	armor_Stock.push_back(strength_Potion_Item);
	armor_Stock.push_back(exstrength_Potion_Item);
	armor_Stock.push_back(strength_Elixer_Item);
	armor_Stock.push_back(exstrength_Elixer_Item);
	armor_Stock.push_back(healing_Potion_Item);
	armor_Stock.push_back(exhealing_Potion_Item);
	armor_Stock.push_back(healing_Elixer_Item);
	armor_Stock.push_back(exhealing_Elixer_Item);
	armor_Stock.push_back(bestArmor_Item);
	srand(time(NULL));


	Attack ultimate3("Nova Strike! -100hp", 100.0, 2);
	Attack ultimate2("Earth Shattering Strike! -50x", 50 * rand() % 2, 3);
	Attack ultimate1("Revenger Assault! -25x", 25 * rand() % 5, 2);

	Attack intermediate3("Sonic Rush! -35hp", 35.0, 7);
	Attack intermediate2("Lightning Kick! -25hp", 25.0, 10);
	Attack intermediate1("Axle Combination! -30hp", 30.0, 5);

	Attack basic3("Force Palm! -5hp", 5.0, 30);
	Attack basic2("Focus Punch! -12hp", 12.0, 12);
	Attack basic1("Close Combat! -10hp", 10.0, 15);



	AttackItem basicitem1("Name: Close Combat \n Price: 50g\n  Level: 1", 50, basic1);
	AttackItem basicitem2("Focus Punch \n Price: 50g \n  Level: 1", 50, basic2);
	AttackItem basicitem3("Force Palm \n Price: 50g\n  Level: 1", 50, basic3);

	AttackItem intermediateitem1("Axle Combination \n Price: 150g\n  Level: 2", 150, intermediate1);
	AttackItem intermediateitem2("Lightning Kick \n Price: 150g\n  Level: 2", 150, intermediate2);
	AttackItem intermediateitem3("Sonic Rush \n Price: 150g\n  Level: 2", 150, intermediate3);

	AttackItem ultimateitem1("Revenger Assault \n Price: 200g\n  Level: 3", 200, ultimate1);
	AttackItem ultimateitem2("Earth Shattering Strike \n Price: 200g\n  Level: 3", 200, ultimate2);
	AttackItem ultimateitem3("Nova Strike \n Price: 200g\n  Level: 3", 200, ultimate3);


	attack_stock.push_back(basicitem1);
	attack_stock.push_back(basicitem2);
	attack_stock.push_back(basicitem3);
	attack_stock.push_back(intermediateitem1);
	attack_stock.push_back(intermediateitem2);
	attack_stock.push_back(intermediateitem3);
	attack_stock.push_back(ultimateitem1);
	attack_stock.push_back(ultimateitem2);
	attack_stock.push_back(ultimateitem3);

	item_Shop = { armor_Stock, attack_stock };

}

void Game::initializeladder()
{
	//Just a quickly made list of enemy attacks:
	//can mix n match.

	///////////////////////////////////
	//The Juggler's Attacks
	Attack throwball("Throwball -15hp", 15.f, 25);


	Attack cynicalSlap("Cynical Slap -35hp", 35.f, 30);


	Attack balloonBomb("Balloon Bomb -18hp", 18.f, 20);

	///////////////////////////////////
	//Kusunoki Masashige's Attacks
	Attack samuraiSlash("Samurai Slash -45hp", 45.f, 15);


	Attack shuriken("Shuriken -24hp", 24.f, 20);


	Attack shogunRage("Shogun Rage -60hp", 60.f, 5);
	
	///////////////////////////////////
	//Jann's Attacks
	Attack whirlwind("WhirlWind! -22hp", 22.f, 12);
	

	Attack shapeShift("Shape Shift! -33hp", 33.f, 10);
	

	Attack demonicScream("Demonic Shout! -12hp", 12.f, 30);
	
	///////////////////////////////////
	//Deogen's Attacks
	Attack unholyBlast("Unholy Blast! -55hp", 55.f, 10);
	

	Attack silentDash("Silent Dash! -18hp", 18.f, 20);
	

	Attack spookyClaw("Spooky Claw! -20hp", 20.f, 15);
	
	///////////////////////////////////
	//George Sands' Attacks
	Attack houndBite("Hound Bite! -12hp", 12.f, 40);

	Attack werewolfSlash("Werewolf Slash! -20hp", 20.f, 15);


	Attack fullMoonWrath("Full Moon Wrath! -46hp", 46.f, 25);
	fullMoonWrath.mDamage = 46;
	///////////////////////////////////
	//Dameon The Necromancer's Attacks
	Attack shadowBurst("Shadow Burst! -22hp", 22.f, 40);
	shadowBurst.mDamage = 22;

	Attack undeadCasting("Undead Casting! -66hp", 66.f, 20);
	

	Attack necromancingStorm("Necromancing Storm! -46hp", 46.f, 15);
	necromancingStorm.mDamage = 46;

	//possible critical move or a boss type move:
	Attack apocalypticPlague("Apocalyptic Plague! -70hp", 20.f, 15);
	
	///////////////////////////////////

	Attack jugglerAttacks[3] = { throwball , cynicalSlap, balloonBomb };
	Attack kusunokiAttacks[3] = { samuraiSlash , shuriken, shogunRage };
	Attack jannAttacks[3] = { whirlwind , shapeShift, demonicScream };
	Attack deogenAttacks[3] = { unholyBlast , silentDash, spookyClaw };
	Attack georgeAttacks[3] = { houndBite, werewolfSlash, fullMoonWrath };
	Attack dameonAttacks[4] = { shadowBurst, undeadCasting, necromancingStorm, apocalypticPlague };

	aie::Texture*       enemy1Texture = new aie::Texture("./textures/EnemySprites/Enemy1.png");
	aie::Texture*       enemy2Texture = new aie::Texture("./textures/EnemySprites/Enemy2.png");
	aie::Texture*       enemy3Texture = new aie::Texture("./textures/EnemySprites/Enemy3.png");
	aie::Texture*       enemy4Texture = new aie::Texture("./textures/EnemySprites/Enemy4.png");
	aie::Texture*       enemy5Texture = new aie::Texture("./textures/EnemySprites/Enemy5.png");
	aie::Texture*       bossTexture = new aie::Texture("./textures/EnemySprites/Boss.png");

	//H	//D  //S   //A
	Enemy* enemy1 = new Enemy("The Juggler", jugglerAttacks, enemy1Texture, 100.0, 5.0, .2, 20, 90);
	Enemy* enemy2 = new Enemy("Kusunoki Masashige", kusunokiAttacks, enemy2Texture, 150.0, 20.0, .15, 15, 93);
	Enemy* enemy3 = new Enemy("Jann", jannAttacks, enemy3Texture, 300.0, 35.0, .1, 10, 90);
	Enemy* enemy4 = new Enemy("Deogen", deogenAttacks, enemy4Texture, 350.0, 15.0, .1, 5, 85);
	Enemy* enemy5 = new Enemy("George Sands", georgeAttacks, enemy5Texture, 400.0, 40.0, .16, 30, 95);
	Enemy* boss = new Enemy("Dameon The Necromancer", dameonAttacks, bossTexture, 400.0, 24.0, .3, 35, 80);


	enemyLadder.initialize();

	enemyLadder.insertlast(*enemy1);
	enemyLadder.insertlast(*enemy2);
	enemyLadder.insertlast(*enemy3);
	enemyLadder.insertlast(*enemy4);
	enemyLadder.insertlast(*enemy5);
	enemyLadder.insertlast(*boss);
	currentEnemyPtr = enemyLadder.begin();
	currentEnemy = *currentEnemyPtr;
}

void Game::initializenewladder(Hero *player)
{
	//Just a quickly made list of enemy attacks:
	//can mix n match.

	///////////////////////////////////
	//The Juggler's Attacks
	Attack throwball("Throwball -15hp", 15.f, 25);


	Attack cynicalSlap("Cynical Slap -35hp", 35.f, 30);


	Attack balloonBomb("Balloon Bomb -18hp", 18.f, 20);

	///////////////////////////////////
	//Kusunoki Masashige's Attacks
	Attack samuraiSlash("Samurai Slash -45hp", 45.f, 15);


	Attack shuriken("Shuriken -24hp", 24.f, 20);


	Attack shogunRage("Shogun Rage -60hp", 60.f, 5);

	///////////////////////////////////
	//Jann's Attacks
	Attack whirlwind("WhirlWind! -22hp", 22.f, 12);


	Attack shapeShift("Shape Shift! -33hp", 33.f, 10);


	Attack demonicScream("Demonic Shout! -12hp", 12.f, 30);

	///////////////////////////////////
	//Deogen's Attacks
	Attack unholyBlast("Unholy Blast! -55hp", 55.f, 10);


	Attack silentDash("Silent Dash! -18hp", 18.f, 20);


	Attack spookyClaw("Spooky Claw! -20hp", 20.f, 15);

	///////////////////////////////////
	//George Sands' Attacks
	Attack houndBite("Hound Bite! -12hp", 12.f, 40);

	Attack werewolfSlash("Werewolf Slash! -20hp", 20.f, 15);


	Attack fullMoonWrath("Full Moon Wrath! -46hp", 46.f, 25);
	fullMoonWrath.mDamage = 46;
	///////////////////////////////////
	//Dameon The Necromancer's Attacks
	Attack shadowBurst("Shadow Burst! -22hp", 22.f, 40);
	shadowBurst.mDamage = 22;

	Attack undeadCasting("Undead Casting! -66hp", 66.f, 20);


	Attack necromancingStorm("Necromancing Storm! -46hp", 46.f, 15);
	necromancingStorm.mDamage = 46;

	//possible critical move or a boss type move:
	Attack apocalypticPlague("Apocalyptic Plague! -70hp", 20.f, 15);
	///////////////////////////////////

	Attack jugglerAttacks[3] = { throwball , cynicalSlap, balloonBomb };
	Attack kusunokiAttacks[3] = { samuraiSlash , shuriken, shogunRage };
	Attack jannAttacks[3] = { whirlwind , shapeShift, demonicScream };
	Attack deogenAttacks[3] = { unholyBlast , silentDash, spookyClaw };
	Attack georgeAttacks[3] = { houndBite, werewolfSlash, fullMoonWrath };
	Attack dameonAttacks[4] = { shadowBurst, undeadCasting, necromancingStorm, apocalypticPlague };
	Attack newenemyattacks[3] = { player->getAttacks(0),player->getAttacks(1),player->getAttacks(3) };

	aie::Texture*       enemy1Texture = new aie::Texture("./textures/EnemySprites/Enemy1.png");
	aie::Texture*       enemy2Texture = new aie::Texture("./textures/EnemySprites/Enemy2.png");
	aie::Texture*       enemy3Texture = new aie::Texture("./textures/EnemySprites/Enemy3.png");
	aie::Texture*       enemy4Texture = new aie::Texture("./textures/EnemySprites/Enemy4.png");
	aie::Texture*       enemy5Texture = new aie::Texture("./textures/EnemySprites/Enemy5.png");
	aie::Texture*       bossTexture = new aie::Texture("./textures/EnemySprites/Boss.png");

	//H	//D  //S   //A
	Enemy* enemy1 = new Enemy("The Juggler", jugglerAttacks, enemy1Texture, 100.0, 5.0, .2, 20, 90);
	Enemy* enemy2 = new Enemy("Kusunoki Masashige", kusunokiAttacks, enemy2Texture, 150.0, 20.0, .15, 15, 93);
	Enemy* enemy3 = new Enemy("Jann", jannAttacks, enemy3Texture, 300.0, 35.0, .1, 10, 90);
	Enemy* enemy4 = new Enemy("Deogen", deogenAttacks, enemy4Texture, 350.0, 15.0, .1, 5, 85);
	Enemy* enemy5 = new Enemy("George Sands", georgeAttacks, enemy5Texture, 400.0, 40.0, .16, 30, 95);
	Enemy* boss = new Enemy("Dameon The Necromancer", dameonAttacks, bossTexture, 400.0, 24.0, .3, 35, 80);
	Enemy* explayer = new Enemy("Corrupted Hero", newenemyattacks, player->charTexture,1000, 48.0, .6, 10, 90);

	enemyLadder.initialize();

	enemyLadder.insertlast(*enemy1);
	enemyLadder.insertlast(*enemy2);
	enemyLadder.insertlast(*enemy3);
	enemyLadder.insertlast(*enemy4);
	enemyLadder.insertlast(*enemy5);
	enemyLadder.insertlast(*boss);
	enemyLadder.insertlast(*explayer);
	currentEnemyPtr = enemyLadder.begin();
	currentEnemy = *currentEnemyPtr;
}

bool Game::gameEnd()
{
	between.choice = Continue::end;
	if (ImGui::Button("Play Again?", ImVec2(200, 100)))
	{
		delete player;
		item_Shop.destroy();
		enemyLadder.destroy();
		
		return true;
	}
	else
	{
		return false;
	}
}




void Game::draw(aie::Renderer2D * renderer, int state, int timer, aie::Font*font)
{
	switch (state)
	{
	case inShop:
	{
		item_Shop.draw(renderer, timer, font);
		break;
	}
	case inBattle:
	{

		player->draw(renderer, timer, font, pchoice);
		currentEnemyPtr.current->info.draw(renderer, timer, font,echoice);
		break;
	}
	case inContinue:
	{
		between.draw(renderer,timer,font,player);
		break;
	}
	case newGame:
	{
		Start.draw(renderer, timer, font);
		break;
	}
	case endGame:
	{
		between.draw(renderer,timer,font,player);
		break;
	}
		break;
	}
	
}

void Game::battleladder(Hero*&player)
{
	switch (ladderstate)
	{
		
		case playerturn:
			{
				if (currentEnemyPtr.current->info.getHealth() < 0)
					{
						if (enemyLadder.isEmpty())
						{
							gamestate = endGame;
							break;
						}
						else
						{
							iterator<Enemy>* temp = new iterator<Enemy>;
							*temp = currentEnemyPtr.current->link;
							enemyLadder.deleteNode(currentEnemyPtr.current->info);
							currentEnemyPtr = *temp;
							delete temp;
							ladderstate = victory;
						}
						if (enemyLadder.isEmpty())
						{
							gamestate = endGame;
							break;
						}
					}
				else
				{
					if (ImGui::Button("Attack", ImVec2(100, 100)))
					{
						ladderstate = viewattacks;
						break;
					}
					if (ImGui::Button("Defend", ImVec2(100, 100)))
					{
						ladderstate = defending;
						break;
					}
					if (ImGui::Button("View Stats", ImVec2(100, 100)))
					{
						item_Shop.shopstate = Shop::viewUpgrades;
						break;
					}
			    }
			    break;
		    }
		case enemyturn:
		{
			srand(time(NULL));
			echoice = rand() % 3;
			if (player->getHealth() < 0)
			{
				gamestate = inContinue;
				break;
			}
			else
			{
				if (echoice > 2)
				{
					if (player->getHealth() > 0)
					{
						currentEnemyPtr.current->info.defend();
						ladderstate = playerturn;
					}
					else
					{
						gamestate = inContinue;
					}
				}
				else
				{
					if (player->getHealth() > 0)
					{
						ptr = &*player;
						currentEnemyPtr.current->info.fight(*ptr, echoice);
						currentEnemyPtr.current->info.enemystate = Enemy::attacking;
						ladderstate = playerturn;
					}
					else
					{
						gamestate = inContinue;
						break;
					}

				}
			}

			break;
		}
		case viewattacks:
		{
			if (ImGui::Button(player->getAttackName(0), ImVec2(200, 100)))
			{
				pchoice = 0;
				if (currentEnemyPtr.current->info.getHealth() > 0)
				{
					player->playerstate = Hero::Attacking;
					player->fight(currentEnemyPtr.current->info, 0);
				
					ladderstate = enemyturn;
					break;
				
				}
				else 
				{
					iterator<Enemy>* temp = new iterator<Enemy>;
					*temp = currentEnemyPtr.current->link;
					enemyLadder.deleteNode(currentEnemyPtr.current->info);
					currentEnemyPtr = *temp;
					delete temp;
					ladderstate = victory;
					break;
				}
				break;
			}
			if (ImGui::Button(player->getAttackName(1), ImVec2(200, 100)))
			{
				pchoice = 1;
				if (currentEnemyPtr.current->info.getHealth() > 0)
				{
					player->playerstate = Hero::Attacking;
					player->fight(currentEnemyPtr.current->info, 1);

					ladderstate = enemyturn;
					break;
				}
				else
				{
					iterator<Enemy>* temp = new iterator<Enemy>;
					*temp = currentEnemyPtr.current->link;
					enemyLadder.deleteNode(currentEnemyPtr.current->info);
					currentEnemyPtr = *temp;
					delete temp;
					ladderstate = victory;
					break;
				}
			}
			if (ImGui::Button(player->getAttackName(2), ImVec2(200, 100)))
			{
				pchoice = 2;
				if (currentEnemyPtr.current->info.getHealth() > 0)
				{
					player->playerstate = Hero::Attacking;
					player->fight(currentEnemyPtr.current->info, 2);

					ladderstate = enemyturn;
					break;
				}
				else
				{

					iterator<Enemy>* temp = new iterator<Enemy>;
					*temp = currentEnemyPtr.current->link;
					enemyLadder.deleteNode(currentEnemyPtr.current->info);
					currentEnemyPtr = *temp;
					delete temp;
					ladderstate = victory;
					break;
				}
			}
			break;
		}
		case defending:
		{
			player->playerstate = Hero::Defending;
			ladderstate = enemyturn;
			break;
		}
		case victory:
		{
			player->reward();
			if (enemyLadder.isEmpty())
			{
				gamestate = endGame;
				break;
			}
			else
			{
				player->playerstate = Hero::victory;
				if (ImGui::Button("Go to Shop", ImVec2(200, 100)))
				{
					gamestate = inShop;
					break;
				}
				if (ImGui::Button("Go to \n next battle", ImVec2(200, 100)))
				{
					gamestate = inBattle;
					ladderstate = playerturn;
					break;
				}
			}
			break;
		}

	}
}

void Game::Continue()
{
	switch (between.choice)
	{
	case Continue::start:
	{
		if (ImGui::Button("Hell Yeah!!", ImVec2(100, 100)))
		{
			if (between.subtractGold(player))
			{
				between.choice = Continue::play;
				break;
			}
			else
			{
				between.choice = Continue::broke;
				break;
			}
		}
		if (ImGui::Button("Nah", ImVec2(100, 100)))
		{
			between.choice = Continue::end;
			break;
		}
		break;
	}
	case Continue::play:
	{
		if (ImGui::Button("I need to \n buy some stuff..", ImVec2(100, 100)))
		{
			gamestate = inShop;
			break;
		}
		if (ImGui::Button("I want \n to fight!", ImVec2(100, 100)))
		{
			gamestate = inBattle;
			player->revive();
			break;
		}
		break;
	}
	}

}



Game::Game()
{
}

void Game::shop(Hero* &player)
{
	int i;
	switch (item_Shop.shopstate)
	{
	case Shop::welcome:
	{
		if (ImGui::Button("Attack Items", ImVec2(100, 100)))
		{
			item_Shop.shopstate = Shop::viewAttackItems;
			break;
		}
		if (ImGui::Button("Defense Items", ImVec2(100, 100)))
		{
			item_Shop.shopstate = Shop::viewDefenseItems;
			break;
		}
		if (ImGui::Button("Upgrade Stats", ImVec2(100, 100)))
		{
			item_Shop.shopstate = Shop::viewUpgrades;
			break;
		}
		if (ImGui::Button("Leave Shop", ImVec2(200, 100)))
		{
			gamestate = inBattle;
			break;
		}
		break;
	}
	case Shop::wait:
	{
		switch (item_Shop.itemlists)

		{
		case Shop::shoplist:
		{
			if (ImGui::Button("Attack Items", ImVec2(100, 100)))
			{
				item_Shop.shopstate = Shop::viewAttackItems;
				break;
			}
			if (ImGui::Button("Defense Items", ImVec2(100, 100)))
			{
				item_Shop.shopstate = Shop::viewDefenseItems;
				break;
			}
			if (ImGui::Button("Upgrade Stats", ImVec2(100, 100)))
			{
				item_Shop.shopstate = Shop::viewUpgrades;
				break;
			}
			if (ImGui::Button("Equip Attacks", ImVec2(100, 100)))
			{
				item_Shop.itemlists = Shop::attacklist;
				break;
			}
			if (ImGui::Button("Equip Potions", ImVec2(100, 100)))
			{
				item_Shop.itemlists = Shop::armorlist;
				break;
			}
			if (ImGui::Button("Leave Shop", ImVec2(200, 100)))
			{
				gamestate = inBattle;
				break;
			}
			break;
		}
		case Shop::attacklist:
		{
			if (player->attackBag.empty())
			{
				break;
			}
			else
			{
				for (i = 0; i < player->attackBag.size(); i++)
				{
					if (ImGui::Button(player->attackBag.at(i).name, ImVec2(100, 100)))
					{
						pchoice = i;
						item_Shop.itemlists = Shop::replaceattack;
						break;
					}
				}
				if (ImGui::Button("Back", ImVec2(200, 100)))
				{
					item_Shop.shopstate = Shop::wait;
					break;
				}
			}

			break;
		}
		case Shop::replaceattack:
		{
			if (ImGui::Button(player->getAttacks(0).name, ImVec2(100, 100)))
			{

				player->equipAttack(pchoice, 0);
				item_Shop.itemlists = Shop::shoplist;
				break;
			}
			if (ImGui::Button(player->getAttacks(1).name, ImVec2(100, 100)))
			{

				player->equipAttack(pchoice, 1);
				item_Shop.itemlists = Shop::shoplist;
				break;
			}
			if (ImGui::Button(player->getAttacks(2).name, ImVec2(100, 100)))
			{

				player->equipAttack(pchoice, 2);
				item_Shop.itemlists = Shop::shoplist;
				break;
			}
			if (ImGui::Button("Back", ImVec2(200, 100)))
			{
				item_Shop.shopstate = Shop::wait;
				break;
			}
		}
		case Shop::armorlist:
		{
			if (player->armorBag.empty())
			{
				break;
			}
			else
			{
				for (i = 0; i < player->armorBag.size(); i++)
				{
					if (ImGui::Button(player->armorBag.at(i).name, ImVec2(100, 100)))
					{
						player->unequipArmor();
						player->equipArmor(i);
						item_Shop.itemlists = Shop::shoplist;
						break;
					}
				}
				if (ImGui::Button("Back", ImVec2(200, 100)))
				{
					item_Shop.shopstate = Shop::wait;
					break;
				}
			}
			if (ImGui::Button("Back", ImVec2(200, 100)))
			{
				item_Shop.shopstate = Shop::wait;
				break;
			}
			break;
		}
		}
		break;
	}
	case Shop::viewAttackItems:
	{
		for (int i = 0; i < item_Shop.getstocksize(1); i++)
		{
			if (ImGui::Button(item_Shop.viewAttacks(i), ImVec2(200, 100)))
			{
				if (item_Shop.viewAttacks(i) == "Sold Out")
				{
					break;
				}
				else if (item_Shop.affordattack(i, player->viewgold()))
				{
					player->buy_Attack(item_Shop, i);
					item_Shop.shopstate = Shop::sell;
					break;
				}
				else
				{
					item_Shop.shopstate = Shop::broke;
					break;
				}
			}
			
		}
		if (ImGui::Button("Back", ImVec2(200, 100)))
		{
			item_Shop.shopstate = Shop::wait;
			break;
		}

		break;

	}
	case Shop::viewDefenseItems:
	{
		for (int i = 0; i < item_Shop.getstocksize(1); i++)
		{
			if (ImGui::Button(item_Shop.viewArmor(i), ImVec2(200, 100)))
			{
				if (item_Shop.viewArmor(i) == "Sold Out")
				{
					break;
				}
				else if (item_Shop.afforddefense(i, player->viewgold()))
				{
					player->buy_Armor(item_Shop, i);
					item_Shop.shopstate = Shop::sell;
					break;
				}
				else
				{
					item_Shop.shopstate = Shop::broke;
					break;
				}
			}
		}
		if (ImGui::Button("Back", ImVec2(200, 100)))
		{
			item_Shop.shopstate = Shop::wait;
			break;
		}
		break;
	}
	case Shop::viewUpgrades:
	{
		if (ImGui::Button("Upgrade Health  \n Cost: 500g", ImVec2(200, 100)))
		{
			player->upgrade(1);
			item_Shop.shopstate = Shop::sell;
			break;
		}
		if (ImGui::Button("Upgrade Defense  \n Cost: 500g", ImVec2(200, 100)))
		{
			player->upgrade(2);
			item_Shop.shopstate = Shop::sell;
			break;
		}
		if (ImGui::Button("Upgrade Strength  \n Cost: 500g", ImVec2(200, 100)))
		{
			player->upgrade(3);
			item_Shop.shopstate = Shop::sell;
			break;
		}
		if (ImGui::Button("Upgrade Accuracy  \n Cost: 500g", ImVec2(200, 100)))
		{
			player->upgrade(4);
			item_Shop.shopstate = Shop::sell;
			break;
		}
		if (ImGui::Button("Back", ImVec2(200, 100)))
		{
			item_Shop.shopstate = Shop::wait;
			break;
		}
		break;
	}
	case Shop::sell:
	{
		if (ImGui::Button("Buy More", ImVec2(200, 100)))
		{
			item_Shop.shopstate = Shop::wait;
			break;
		}
		if (ImGui::Button("Leave Shop", ImVec2(200, 100)))
		{
			gamestate = inBattle;
			break;
		}
		break;
	}
	case Shop::bought:
	{
		item_Shop.shopstate = Shop::wait;
		break;
	}
	break;

	case Shop::broke:
	{
		if (ImGui::Button("Back", ImVec2(200, 100)))
		{
			item_Shop.shopstate = Shop::wait;
			break;
		}
	}
	}
}
