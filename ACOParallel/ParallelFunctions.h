/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.h
 * Author: JAVAD
 *
 * Created on March 10, 2019, 12:07 PM
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
//------------------------------------------------------------------------------
//FUNCTIONS
std::vector<City> generateCities( std::string fileDirectory );
double cal_distance( City c1,City c2 );
std::vector<std::vector<double>> generateDistanceMatrix( const std::vector<City>& cities );
void printDistanceVector( std::vector<std::vector<double>>& A );
void updateTauMatrix( std::vector<std::vector<double>>& t,double Tau );
void updateTauMatrix2( std::vector<std::vector<double>>& t,double RO );
std::vector<City> findPath(std::vector<std::vector<double>>& Tau_Matrix, std::vector<std::vector<double>>& A, std::vector<City>& cities);
void updateEdges(std::vector<std::vector<double>>& Tau_Matrix, std::vector<City>& visited, double& deltaTau);
void finding_paths(int first , int last , std::vector<std::vector<City>>& Tours,std::vector<std::vector<double>>& Tau_Matrix, std::vector<std::vector<double>>& A, std::vector<City>& cities );
std::vector<int> tiling_jobs(int& nw , int ants );
std::pair<double , std::vector<City>> find_best (std::vector<std::pair<double , std::vector<City>>>& TourLength);
void Update_Phermones(std::vector<std::vector<City>>& Tours ,std::vector<std::pair<double , std::vector<City>>>& TourLength,std::vector<std::vector<double>>& A,std::vector<std::vector<double>>& Tau_Matrix ,double Q);



#ifdef __cplusplus
}
#endif

#endif /* FUNCTIONS_H */

