# ifndef MOVE_H
# define MOVE_H
# include <string>
# define WIN 0
# define LOSE 1
# define INCOMPATIBLE 2

class Move{
protected: 
    std::string name;

public:
    std::string getName();
    virtual int ifWinner(Move* Competitor)=0;
};

# endif
