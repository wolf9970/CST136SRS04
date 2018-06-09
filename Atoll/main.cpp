
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <map>
#include <forward_list>
#include <functional>
#include <numeric>
#include "location.h"
#include "haversine.h"

int main()
{
  std::array<GPS::Location, 12> islandArray
  {
    GPS::Location{ "Faichuk Islands",  GPS::Latitude{ GPS::Latitude::Cardinal::N, 7, 21, 8 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 151, 36, 30 } },
    GPS::Location{ "Hawaii",           GPS::Latitude{ GPS::Latitude::Cardinal::N, 21, 18, 41 }, GPS::Longitude{ GPS::Longitude::Cardinal::W, 157, 47, 47 } },
    GPS::Location{ "Mariana Islands",  GPS::Latitude{ GPS::Latitude::Cardinal::N, 17, 0, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 146, 0, 0 } },
    GPS::Location{ "Johnston Atoll",   GPS::Latitude{ GPS::Latitude::Cardinal::N, 16, 44, 13 }, GPS::Longitude{ GPS::Longitude::Cardinal::W, 169, 31, 26 } },
    GPS::Location{ "Kosrae",           GPS::Latitude{ GPS::Latitude::Cardinal::N, 5, 19, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 162, 59, 0 } },
    GPS::Location{ "Falalop",          GPS::Latitude{ GPS::Latitude::Cardinal::N, 10, 1, 14 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 139, 47, 23 } },
    GPS::Location{ "Guam",             GPS::Latitude{ GPS::Latitude::Cardinal::N, 13, 30, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 144, 48, 0 } },
    GPS::Location{ "Pohnpei",          GPS::Latitude{ GPS::Latitude::Cardinal::N, 6, 51, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 158, 13, 0 } },
    GPS::Location{ "Marshall Islands", GPS::Latitude{ GPS::Latitude::Cardinal::N, 7, 7, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 171, 4, 0 } },
    GPS::Location{ "Yap",              GPS::Latitude{ GPS::Latitude::Cardinal::N, 9, 32, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 138, 7, 0 } },
    GPS::Location{ "Wake Island",      GPS::Latitude{ GPS::Latitude::Cardinal::N, 19, 17, 43 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 166, 37, 52 } },
    GPS::Location{ "New Zealand",      GPS::Latitude{ GPS::Latitude::Cardinal::S, 41, 17, 0 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 174, 27, 0 } }
  };


  std::vector<std::reference_wrapper<GPS::Location>> islandVector {islandArray.begin(), islandArray.end()};
  std::vector<double> v;
 
  std::sort(islandVector.begin(), islandVector.end(), GPS::Location::sortLatitude);
  for(auto i{0}; i != islandVector.size() - 1; i++)
    {
      v.push_back(haversine(islandVector[i], islandVector[i + 1]));
    }
  
  double vLatDist = std::accumulate(v.begin(), v.end(), 0);
 
  std::sort(islandVector.begin(), islandVector.end(), GPS::Location::sortLongitude);
    for(auto i{0}; i != islandVector.size() - 1; i++)
    {
      v.push_back(haversine(islandVector[i], islandVector[i + 1]));
    }
  double vLongDist = std::accumulate(v.begin(), v.end(), 0);


  std::forward_list<GPS::Location> islandList {islandArray.begin(), islandArray.end()};
  islandList.sort(GPS::Location::sortLatitude);
  islandList.sort(GPS::Location::sortLongitude);

  

  
  return 0;
}
