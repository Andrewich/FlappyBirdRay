#ifndef GAME_H_
#define GAME_H_

namespace fb {

class Game {
public:
    Game();
    ~Game();

    void init(const int screenWidth, const int screenHeight, const char* title);    
    void run();
    void deinit();
};

} // fb

#endif // GAME_H_