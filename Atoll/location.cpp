#include "location.h"

GPS::Location::Location(const std::string name, const Latitude latitude, Longitude longitude) : name_{name}, latitude_{latitude}, longitude_{longitude}
{

}

std::string GPS::Location::getName() const
{
  return name_;
}

double GPS::Location::getLatitude() const
{
  if(latitude_.cardinal_ == GPS::Latitude::Cardinal::S)
    return (latitude_.getExactDegree() * -1) * M_PI / 180;
  return latitude_.getExactDegree() * M_PI / 180;
}

double GPS::Location::getLongitude() const
{
  if(longitude_.cardinal_ == GPS::Longitude::Cardinal::W)
    return (longitude_.getExactDegree() * -1) * M_PI / 180;
  return longitude_.getExactDegree() * M_PI / 180;
}

bool GPS::Location::sortLatitude(const Location& l1, const Location& l2)
{
  return l1.getLatitude() < l2.getLatitude();
}

bool GPS::Location::sortLongitude(const Location& l1, const Location& l2)
{
  return l1.getLongitude() < l2.getLongitude();
}
