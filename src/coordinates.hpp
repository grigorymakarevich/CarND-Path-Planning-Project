#ifndef __COORDINATES_HPP__
#define __COORDINATES_HPP__

#include <math.h>
#include <vector>

using std::vector;

// For converting back and forth between radians and degrees.
constexpr double pi() { return M_PI; }

double deg2rad(double x);
double rad2deg(double x);

double metersPerSecondFromMilesPerHour(double car_speed);

double distance(double x1, double y1, double x2, double y2);

int ClosestWaypoint(
        double x, double y,
        const vector<double> &maps_x, const vector<double> &maps_y);

int NextWaypoint(
        double x, double y, double theta,
        const vector<double> &maps_x, const vector<double> &maps_y);

// Transform from Cartesian x,y coordinates to Frenet s,d coordinates
vector<double> getFrenet(
        double x, double y, double theta,
        const vector<double> &maps_x,
        const vector<double> &maps_y,
        const vector<double> &maps_s);

// Transform from Frenet s,d coordinates to Cartesian x,y
vector<double> getXY(
        double s, double d,
        const vector<double> &maps_s,
        const vector<double> &maps_x, const vector<double> &maps_y);

#endif  //  __COORDINATES_HPP__
