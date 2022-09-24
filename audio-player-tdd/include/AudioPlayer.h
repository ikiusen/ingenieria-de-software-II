#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include <iostream>
#include <fstream>
using namespace std;

class AudioPlayer
{
private:
    bool isOpen;
    bool isPlaying;
    float volume;

public:
    AudioPlayer();
    ~AudioPlayer();
    void open(string filepath);
    bool getOpenStatus();
    void play();
    bool getPlaybackStatus();
    void stop();
    void setVolume(float value);
    float getVolume();
};
#endif