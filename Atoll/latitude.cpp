#include "latitude.h"

GPS::Latitude::Latitude(const Cardinal cardinal,
			const degree_type degree,
			const minute_type minute,
			const second_type second) : Angle<-89, 90>(degree, minute, second), cardinal_{cardinal}
                                                    
{
}
