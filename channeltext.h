#ifndef CHANNEL_TEXT_H
#define CHANNEL_TEXT_H

#include "channel.h"
#include <vector>

class ChannelVoice : public Channel
{
private:
	Message* LastMessage;
	bool out;
public:
	ChannelVoice(string nc, string tp);
	~ChannelVoice();

	void sendMessage(string ms);
	void listMessages();
	void initChannel(string nc);

	void setout(bool o);
	bool getout();
};

#endif