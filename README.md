# DatabaseChat
Server and Client TCP single-threaded chat with PostgreSQL database connection

The MakeSockert() function on the server and client creates a Socket and organizes communication. All functions responsible for network communication are located in MakeSockert.cpp

All functions responsible for working with the PostgreSQL database are in PostgreSQL.cpp


Instructions: 
1) Start the Server. 
2)Start the Client and register user. 
3)Server accepts this data. 
4)Register another user through the Server. 
5)Authorize on the server and start chat, key "1", the server will wait for the message from the Client 
6)Authorize another user on the Server and press "1". 
7)To finish the chat, send a message end.
