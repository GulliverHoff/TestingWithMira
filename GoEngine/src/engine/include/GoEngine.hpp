#include <unordered_set>
#include <vector>
#include <cstdint>
#include <cstddef>

namespace GoEng {

    struct Point;
    struct PointHasher;
    struct Chain;
    struct BoardState;

    enum Color {
        None = -1,
        Black = 0,
        White = 1
    };


    struct Point {
        uint32_t x, y;
        Point(int x, int y);
        bool operator==(const Point& other) const;
    };

    struct PointHasher {
        size_t operator()(const Point& point) const;
    };

    using PointSet = std::unordered_set<Point, PointHasher>;

    struct Chain {
        Color color;
        uint32_t liberties;
        PointSet stones;
    };

    struct BoardState {
    public:
        BoardState(uint32_t width, uint32_t height);
        std::vector<Color> operator[](size_t row);
    private:
        std::vector<std::vector<Color>> data;
        size_t width;
        size_t height;
    };
        
}

