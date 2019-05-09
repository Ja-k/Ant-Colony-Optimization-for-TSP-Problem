/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   City.h
 * Author: JAVAD
 *
 * Created on March 4, 2019, 1:44 PM
 */

#ifndef CITY_H
#define CITY_H

class City {
public:
    //City();
   // City(const City& orig);
    //virtual ~City();
    City(int id1, double latitude1 , double longitude1);
    int getId() const;
    double getLatitude() const;
    double getLongitude() const;
private:
    int id;
    double latitude;
    double longitude;

};
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   City.cpp
 * Author: JAVAD
 * 
 * Created on March 4, 2019, 1:44 PM
 */

//#include "City.h"

//City::City() {}

//City::City(const City& orig) {}

//City::~City() {}
City::City(int id1, double latitude1, double longitude1){
    id = id1;
    latitude = latitude1;
    longitude = longitude1;
}

int City::getId() const {
    return id;
}
double City::getLatitude() const {
    return latitude;
}
double City::getLongitude() const {
    return longitude;
}



#endif /* CITY_H */

