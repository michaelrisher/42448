/* 
 * File:   Employee.cpp
 * Author: michael.risher
 *
 * Created on June 2, 2014, 4:17 PM
 */

#include "Employee.h"

using namespace std;

Employee::Employee( int id){
    setFname( "" );
    setLname( "" );
    setId( id );
    setAge( 0 );
    setSex( 0 );
    setPayrate( 0.0 );
    setHours( 0.0 );
}

void Employee::setPayrate( float f ){
    payrate = f;
}

void Employee::setHours( float hours ){
    hours = hours;
}

float Employee::getPayrate(){
    return payrate;
}

float Employee::getHours(){
    return hours;
}

float Employee::getPay(){
    return payrate * hours;
}
