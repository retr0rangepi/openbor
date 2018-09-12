

#ifndef AXIS_HEADER

#define AXIS_HEADER 1

// Caskey, Damon V.
// 2014-01-20
//
// Axis - Horizontal and lateral only (float).
typedef struct
{
    float x;    // Horizontal axis.
    float z;    // Lateral axis.
} s_axis_plane_lateral_float;

// Caskey, Damon V.
// 2014-01-20
//
// Axis - Horizontal and lateral only (int).
typedef struct
{
    int x;    // Horizontal axis.
    int z;    // Lateral axis.
} s_axis_plane_lateral_int;

// Caskey, Damon V.
// 2014-01-20
//
// Axis - Horizontal and vertical only (int).
typedef struct
{
    int x;      // Horizontal axis.
    int y;      // Altitude/Vertical axis.
} s_axis_plane_vertical_int;

// Caskey, Damon V.
// 2018-04-18
//
// Axis - 3D float.
typedef struct
{
    float x;
    float y;
    float z;
} s_axis_principal_float;

// Caskey, Damon V.
// 2018-04-18
//
// Axis - 3D int.
typedef struct
{
    int x;
    int y;
    int z;
} s_axis_principal_int;

#endif // AXIS_HEADER
