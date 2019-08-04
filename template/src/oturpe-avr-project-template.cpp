// Add description here
//
// Author: N.N.
// Email: n.n@example.com
// Date: 1900-01-01

#include "AvrUtils.h"

#include "config.h"

#include <util/delay.h>

#include "IndicatorController.h"

int main() {
    IndicatorController indicator(B, 0, 5);

    while (true) {
         indicator.run();
        _delay_ms(LOOP_DELAY);
    }
}
