#include "player.h"

Player::Player()
{

}

void Player::play(){
    std::cout << "Звучит музыка" << std::endl;
}

void Player::pause(){
    std::cout << "pause" << std::endl;
}

void Player::next(){
    std::cout << "next" << std::endl;
}

void Player::prev(){
    std::cout << "prev" << std::endl;
}
