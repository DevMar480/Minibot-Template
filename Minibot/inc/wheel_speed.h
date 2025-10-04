#ifndef WHEEL_SPEED_H
#define WHEEL_SPEED_H

#define SIN_45 0.707106781
#define COS_45 0.707106781
#define RAD 1
#define DIS 1

typedef struct wheel_speeds_s {
    float wheel_one;
    float wheel_two;
    float wheel_three;
    float wheel_four;
} wheel_speeds_t;

wheel_speeds_t calc_wheel_speeds(float vx, float vy, float vomega);

#endif // WHEEL_SPEED_H