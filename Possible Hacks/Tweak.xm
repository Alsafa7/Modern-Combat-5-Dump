%hook VKScreen

/*
Hopefully should authorize your game and allow you to play even if you didn't purchase the game. Can't test as I bought the game.

@interface VKScreen
{
    ...
    BOOL isAuthorizeComplete;       // 184 = 0xb8
    ...
}
*/
-(void)init
{
    %orig;
    BOOL isAuthorizedHack = MSHookIVar<BOOL>(self, "isAuthorizeComplete");
    isAuthorizedHack = true;
}

%end
