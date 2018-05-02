#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "GameController.h"
#include "SpotTile.h"
#include "PlayerTile.h"

#define KEY_A 97
#define KEY_W 119
#define KEY_S 115
#define KEY_D 100
#define ESC 27

GameController* GameController::_instance = 0;

GameController* GameController::getInstance()
{
	if (_instance == 0)
	{
		_instance = new GameController();
	}
	return _instance;
}

void GameController::load()
{
	for (int i = 0; i < 10; ++i)
	{
		std::vector <Tile*> tiles;
		for (int j = 0; j < 10; ++j)
		{
			tiles.push_back(new SpotTile);

		}
		m_tiles.push_back(tiles);
	}
	m_x = 1;
	m_y = 1;

	delete m_tiles[m_y][m_x];
	m_player = new PlayerTile;
	m_tiles[m_y][m_x] = m_player;
}

void GameController::move()
{
	// delete pointer
	delete m_player;
	// m_teles has trash-pointer, so we need to clean it
	m_tiles[m_y][m_x] = new SpotTile;
	// create new pointer
	m_player = new PlayerTile;
	int key = _getch();
	switch (key)
	{
	case KEY_W: {
		if (m_y > 0 && !m_tiles[m_y - 1][m_x]->isWall())
		{
			--m_y;
			m_scores += m_tiles[m_y][m_x]->collect();
		}} break;
	case KEY_S: {
		if (m_y < 9 && !m_tiles[m_y + 1][m_x]->isWall())
		{
			++m_y;
			m_scores += m_tiles[m_y][m_x]->collect();
		}} break;
	case KEY_A: {
		if (m_x > 0 && !m_tiles[m_y][m_x - 1]->isWall())
		{
			--m_x;
			m_scores += m_tiles[m_y][m_x]->collect();
		}} break;
	case KEY_D: {
		if (m_x < 9 && !m_tiles[m_y][m_x + 1]->isWall())
		{
			++m_x;
			m_scores += m_tiles[m_y][m_x]->collect();
		}} break;
	case ESC: {
		exit(0);
	}
	default:
		break;
	}
	delete m_tiles[m_y][m_x];
	m_tiles[m_y][m_x] = m_player;
}

void GameController::print()
{
	system("cls");
	std::cout << "------------" << '\n';
	// range base 
	for (std::vector<Tile*> tiles : m_tiles)
	{
		std::cout << '|';
		for (Tile* tile : tiles)
		{
			tile->print();
		}
		std::cout << '|' << "\n";
	}
	std::cout << "------------";
}


void GameController::start()
{
	load();
	while (true)
	{
		print();
		move();
	}
}

GameController::~GameController()
{
	for (std::vector<Tile*> tiles : m_tiles)
	{
		for (Tile* tile : tiles)
		{
			delete tile;
		}
		std::cout << "\n";
	}
	delete m_player;
}

// For Singleton class we need constracter
GameController::GameController(){}