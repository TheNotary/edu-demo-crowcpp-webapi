#include <iostream>

#include "crow.h"


int main()
{
    std::cout << "hi" << std::endl;
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    app.port(3000).run();
    return 0;
}
