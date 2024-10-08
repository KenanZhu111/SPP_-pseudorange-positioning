#ifndef _DEGRRAD_H_
#define _DEGRRAD_H_

#include"public.h"

/* -------------------------------------------------------------------------- */
/// @brief 角度转弧度
/// @param deg 
/// @return 返回弧度
/* -------------------------------------------------------------------------- */
double deg2rad(double deg)
{
    double rad = (PI / 180) * deg;
    return rad;
}

/* -------------------------------------------------------------------------- */
/// @brief 弧度转角度                       
/// @param rad 
/// @return 返回角度
/* -------------------------------------------------------------------------- */
double rad2deg(double rad)
{
    double deg = (180 / PI) * rad;
    return deg;
}

#endif