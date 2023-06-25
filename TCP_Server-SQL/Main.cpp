#include "User.h"


int main()
{
    
    std::vector<Person> User;//array to store login and password
    std::vector<Person::Chat> Messenger;//array to store messages
    string Log;

    PostgreSQL_conn();

    if (MakeSockert() != -1)
    {
        GetLogAndPass(User);
        StartMenu(User, Log, Messenger);
    };

    return 0;
};