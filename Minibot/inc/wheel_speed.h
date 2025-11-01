#ifndef WHEEL_SPEED_H
#define WHEEL_SPEED_H

#define SIN_45 0.707106781
#define COS_45 0.707106781
#define RAD 0.35
#define DIS 0.26
#define CONVERT 60 / (2 * 3.14159255359) // Converts radians per second to rotations per minute

typedef struct wheel_speeds_s {
    float wheel_one;
    float wheel_two;
    float wheel_three;
    float wheel_four;
} wheel_speeds_t;

void calc_wheel_speeds(wheel_speeds_t* speeds, float vx, float vy, float vomega);

#endif // WHEEL_SPEED_H