#include <GoEngine.hpp>
#include <functional>

bool GoEng::Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}

struct GoEng::PointHasher {
    size_t operator()(const Point& point) const {
        return std::hash<uint32_t>()(point.x) ^ (std::hash<uint32_t>()(point.y) << 1);
    }
};