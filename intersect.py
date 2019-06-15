from pos_vec import Position


def intersect(pos1, pos2, pos3, pos4):
    x1 = pos1.x
    y1 = pos1.y
    x2 = pos2.x
    y2 = pos2.y
    x3 = pos3.x
    y3 = pos3.y
    x4 = pos4.x
    y4 = pos4.y
    sx1 = x2 - x1
    sx2 = x4 - x3
    sy1 = y2 - y1
    sy2 = y4 - y3
    try:
        s = (-sy1 * (x1 - x3) + sx1 * (y1 - y3)) / (-sx2 * sy1 + sx1 * sy2)
        t = (sx2 * (y1 - y3) + sy2 * (x1 - x3)) / (-sx2 * sy1 + sx1 * sy2)
    except ZeroDivisionError:
        return None
    if 0 <= s <= 1 and 0 <= t <= 1:
        return Position(x1 + (t * sx1), y1 + (t * sy1))
    return None
