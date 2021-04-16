#include <rev/CANSparkMax.h>

class Drivetrain {
    public:
        void Drive(double x, double y, double z);
        void Stop();
    private:
        rev::CANSparkMax m_frontLeft { 1, rev::CANSparkMax::MotorType::kBrushless };
        rev::CANSparkMax m_frontRight { 2, rev::CANSparkMax::MotorType::kBrushless };
        rev::CANSparkMax m_backLeft { 3, rev::CANSparkMax::MotorType::kBrushless };
        rev::CANSparkMax m_backRight { 4, rev::CANSparkMax::MotorType::kBrushless };
};