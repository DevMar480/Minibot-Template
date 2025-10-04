#include"wheel_speed.h"

/*
 * @brief This function calculates the individual wheel speeds
 * based on desired direction and rotation.
 * It then returns them in a custom struct.
 */
wheel_speeds_t calc_wheel_speeds(float vx, float vy, float vomega) {
    wheel_speeds_t speeds = {0};
    speeds.wheel_one = ((-vx * SIN_45) + (vy * COS_45) + (DIS * vomega));
    speeds.wheel_two = ((-vx * COS_45) + (-vy * SIN_45) + (DIS * vomega));
    speeds.wheel_three = ((vx * SIN_45) + (-vy * COS_45) + (DIS * vomega));
    speeds.wheel_four = ((vx * COS_45) + (vy * SIN_45) + (DIS * vomega));
    return speeds;
}