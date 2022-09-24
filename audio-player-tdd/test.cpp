#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <AudioPlayer.h>

TEST_CASE("AudioPlayer", "OpenFile")
{
    //Arrange
    AudioPlayer *ap = new AudioPlayer();
    string filepath = "./resources/orchestral.ogg";

    //Act
    ap->open(filepath);

    //Assert
    REQUIRE(ap->getOpenStatus() == true);

    delete ap;
}

TEST_CASE("AudioPlayer II", "Play")
{
    //Arrange
    AudioPlayer *ap = new AudioPlayer();
    string filepath = "./resources/orchestral.ogg";
    ap->open(filepath);

    //Act
    ap->play();

    //Assert
    REQUIRE(ap->getPlaybackStatus() == true);
    delete ap;
}

TEST_CASE("AudioPlayer III", "Stop")
{
    // Arrange
    string filePath = "./resources/orchestral.ogg";
    AudioPlayer *player = new AudioPlayer();
    player->open(filePath);
    player->play();

    // Act
    player->stop();

    // Assert
    REQUIRE(player->getPlaybackStatus() == false);
    delete player;
}

TEST_CASE("AudioPlayer IV", "SetVolume")
{
    // Arrange
    AudioPlayer *player = new AudioPlayer();

    // Act
    player->setVolume(4.5);

    // Assert
    REQUIRE(player->getVolume() == 4.5);

    delete player;
}