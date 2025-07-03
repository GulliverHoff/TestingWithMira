#include <unordered_set>
#include <vector>
#include <cstdint>

namespace GoEng{

    struct Point;
    struct Chain;
    struct BoardState;

    enum Color {
        None = -1,
        Black = 0,
        White = 1
    };

    struct Point {
        uint32_t row;
        uint32_t col;

        bool operator==(const Point& other) const {
            return row == other.row && col == other.col;
        }
    };

    using PointSet = std::unordered_set<Point>;

    struct Chain {
        
    };

    struct BoardState {
    public:
        BoardState(uint32_t width, uint32_t height);
    private:
        std::vector<std::vector<Color>> data;
        uint32_t width;
        uint32_t height;
    };
        

}