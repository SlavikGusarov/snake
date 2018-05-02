#include "Tile.h"
#include <vector>
class PlayerTile;
class Tile;

// Singletone class
class GameController
{
public:
	void start();
	static GameController* getInstance();
	~GameController();
protected:
	GameController();


private:

	void load();
	void print();
	void move();

	std::vector <std::vector<Tile*>> m_tiles;
	PlayerTile*m_player;
	int m_x, m_y, m_scores;

	static GameController* _instance;
};
