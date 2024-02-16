#include "MATH.h"
f32 map(f32 number, f32 start_1, f32 finish_1, f32 start_2, f32 finish_2)
{
    f32 result;
    result = -((((finish_1 - number) * (finish_2 - start_2)) / (finish_1 - start_1)) - finish_2);
    return result;
}
