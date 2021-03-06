#include "haversine.h"

double haversine(const GPS::Location& l1, const GPS::Location& l2)
{
  auto lat1{l1.getLatitude()};
  auto lat2{l2.getLatitude()};
  auto long1{l1.getLongitude()};
  auto long2{l2.getLongitude()};

  auto distance{2 * 6378 * asin(sqrt(pow(sin((lat2 - lat1) / 2), 2) + cos(lat1) * cos(lat2) * pow(sin((long2 - long1) / 2), 2)))};
  return distance;
}
