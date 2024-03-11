#include <iostream>

class MusicFile
{
public:
	// This is our template method which provides the abstract implmentation for playing various types of music files
	void play()
	{
		openFile();
		extractData();
		sendToAudioCard();
	}

	void openFile()
	{}

	// Will be implemented by subclasses
	virtual void extractData() = 0;

	void sendToAudioCard()
	{}
};

class MP3MusicFile : public MusicFile
{
public:
	void extractData()
	{}
};

class FLACMusicFile : public MusicFile
{
public:
	void extractData()
	{}
};