# CST136SRS04
Island Hopping

Purpose:

- Learn to use the C++ standard library algorithms
- Learn to use the C++ standard library containers

The navigation of the Pacific is one of the greatest explorations humans have ever achieved. Some say it was as bold as our exploration of space. 

The ancient explorers used the stars, birds, and even the ocean swells to determine where they could find land. 

Today we use GPS and detailed maps find our way. 

Your task is to navigate a route to Hawaii, making stops at every location along the way.

Below is a navigation chart you are to use. Each entry contains an island and its coordinates. 

| Island Name      | Lat Deg | Lat Min | Lat Sec | N/S | Lng Deg | Lng Min | Lng Sec | E/W | 
| ---------------- | ------- | ------- | ------- | --- | ------- | ------- | ------- | --- |
| Faichuk Islands  |       7 |      21 |       8 |   N |     151 |      36 |      30 |   E |
| Hawaii           |      21 |      18 |      41 |   N |     157 |      47 |      47 |   W |
| Mariana Islands  |      17 |       0 |       0 |   N |     146 |       0 |       0 |   E |
| Johnston Atoll   |      16 |      44 |      13 |   N |     169 |      31 |      26 |   W |
| Kosrae           |       5 |      19 |       0 |   N |     162 |      59 |       0 |   E |
| Falalop          |      10 |       1 |      14 |   N |     139 |      47 |      23 |   E |
| Guam             |      13 |      30 |       0 |   N |     144 |      48 |       0 |   E |
| Pohnpei          |       6 |      51 |       0 |   N |     158 |      13 |       0 |   E |
| Marshall Islands |       7 |       7 |       0 |   N |     171 |       4 |       0 |   E |
| Yap              |       9 |      32 |       0 |   N |     138 |       7 |       0 |   E |
| Wake Island      |      19 |      17 |      43 |   N |     166 |      37 |      52 |   E |
| New Zealand      |      41 |      17 |       0 |   S |     174 |      27 |       0 |   E |

Use the following structure:

struct

Calculate the distance travelled as you hop from island to island. 

Each hop will take a [Great Circle](https://en.wikipedia.org/wiki/Great-circle_distance) and can be approximated using the [Haversine Formula](https://en.wikipedia.org/wiki/Haversine_formula) to calculate the Kilometers between the islands. Assume the Earth's radius is: 6378km. 

You must take 2 routes. The first is to travel from South to North, in order. The second is to travel from West to East in order. 

Report the distance travelled between each pair of locations in their order from South to North, or West to East. 

Use 3 different data structures for the data. std::forward_list, std::vector, and std::map. 

This is a total of 6 combinations of calculations but you can only enter the data once into your program as a std::array. 

Report the distances in alphabetical order of the destination Island Name and sum the total distance travelled. 

## For those students wishing an extra challenge:

This is only available to students who accurately complete all aspects of this assignment on time. 

Measure the time each calculation takes to determine which data structure and algorithm does the calculation the fastest. 

The student with fastest release version with an accurate calculations that fully meets the specification. The winner will recieve an SRS forgiveness (and a Smartie). 

You are allowed to do any calculations at compile time you wish but you may not hand calculate anything. 
