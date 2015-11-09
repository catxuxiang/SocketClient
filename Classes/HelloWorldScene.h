#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

#include <netlink/socket.h>
#include <netlink/socket_group.h>

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

private:
	void OnRead(NL::Socket* socket, NL::SocketGroup* group, void* reference);
	void OnDisconnect(NL::Socket* socket, NL::SocketGroup* group, void* reference);

	bool _disconnect;
};

#endif // __HELLOWORLD_SCENE_H__
