#ifndef GAME_CMD_NEXTMAP_H
#define GAME_CMD_NEXTMAP_H

///////////////////////////////////////////////////////////////////////////////

class NextMap : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    NextMap();
    ~NextMap();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_NEXTMAP_H