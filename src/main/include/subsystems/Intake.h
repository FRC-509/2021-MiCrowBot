#include <rev/CANSparkMax.h>
#include <ctre/Phoenix.h>

class Intake {
    public:
        void lift(bool islifted);
        
        void rotate(bool isrotated);
    private: 
        TalonSRX rotator = {6};
        rev::CANSparkMax lifter {5, rev::CANSparkMax::MotorType::kBrushless};
};