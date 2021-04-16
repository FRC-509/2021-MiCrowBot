#include "subsystems/Drivetrain.h"

void Drivetrain::Drive(double x, double y, double z){
    m_frontLeft .Set(x);
    m_frontRight.Set(-x);
    m_backLeft  .Set(x);
    m_backRight .Set(-x);
}

void Drivetrain::Stop(){
    m_frontLeft .Set(0);
    m_frontRight.Set(0);
    m_backLeft  .Set(0);
    m_backRight .Set(0);
}