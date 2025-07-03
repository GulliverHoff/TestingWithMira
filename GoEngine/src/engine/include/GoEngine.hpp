#include <unordered_set>

namespace GoEng{

    struct Point;
    struct Chain;
    struct BoardState;


    enum Color {
        Black = 0,
        White = 1
    };

    struct Point {
        unsigned int row;
        unsigned int col;
    };

    using PointSet = std::unordered_set<Point>;

    struct Chain {
        Color color;
        PointSet stones;
    };

}


