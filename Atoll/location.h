#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include "latitude.h"
#include "longitude.h"

namespace GPS
{
  class Location
  {
  private:
    std::string name_;
    Latitude latitude_;
    Longitude longitude_;

  public:
    Location(const std::string name,
	     const Latitude latitude,
	     const Longitude longitude);

    std::string getName() const;
    
    double getLatitude() const;
    double getLongitude() const;

    static bool sortLatitude(const Location& l1, const Location& l2);
    static bool sortLongitude(const Location& l1, const Location& l2);
  };

  
}
		
#endif
