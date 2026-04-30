#pragma once

namespace space_age {

    class space_age {
            public:
                double time = 0;
                double earthyear = 31557600;
    
                double seconds() const {
                    return time;
                }
        
                space_age(double secs) {
                    time = secs; 
                }
    
                double on_mercury() const {
                    return on_earth()/.2408467;
                }
    
                double on_venus() const {
                    return on_earth()/.61519726;
                }
            
                double on_earth() const {
                    return time/earthyear;;
                }
            
                double on_mars() const {
                    return on_earth()/1.8808158;
                }
            
                double on_jupiter() const {
                    return on_earth()/11.862615;
                }
            
                double on_saturn() const {
                    return on_earth()/29.447498;
                }
            
                double on_neptune() const {
                    return on_earth()/164.79132;
                }
            
                double on_uranus() const {
                    return on_earth()/84.016846;
                }
            
        };

}  // namespace space_age
