#include <AudioPlayer.h>

AudioPlayer::AudioPlayer()
{
    isOpen = false;
    isPlaying = false;
    setVolume(10);
}

AudioPlayer::~AudioPlayer() {}

void AudioPlayer::open(string filepath)
{
    ifstream file(filepath.c_str());
    if (file.good())
    {
        isOpen = true;
    }
}

bool AudioPlayer::getOpenStatus()
{
    return isOpen;
}

void AudioPlayer::play()
{
    if (isOpen)
        isPlaying = true;
}

bool AudioPlayer::getPlaybackStatus()
{
    return isPlaying;
}

void AudioPlayer::stop()
{
    if (isPlaying)
        isPlaying = false;
}

void AudioPlayer::setVolume(float value)
{
    volume = value;
}

float AudioPlayer::getVolume()
{
    return volume;
}