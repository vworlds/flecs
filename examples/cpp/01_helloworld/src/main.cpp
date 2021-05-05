#include <helloworld.h>
#include <iostream>

struct Position {
    double x, y;
    Position& set(double xa, double ya) {
        x = xa;
        y = ya;
        return *this;
    }
};

struct Velocity {
    double x, y;
};

struct Mass {
    double value;
};

int main(int argc, char *argv[]) {
    // Create the world, pass arguments for overriding the number of threads,fps
    // or for starting the admin dashboard (see flecs.h for details).
    flecs::world world(argc, argv);

    // Create a new empty entity. Entity names are optional.
    auto e = world.entity("E1");

    // Set the Position component on the entity.
    e.set<Position>({10, 20});

    // Get the Position component.
    const Position *p = e.get<Position>();

    std::cout << "Position of " << e.name() << " is {" 
              << p->x << ", " << p->y << "}" 
              << std::endl;  

    return 0;
}
