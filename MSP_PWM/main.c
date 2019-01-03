#include <msp430g2553.h>

int main(void) {
WDTCTL = WDTPW + WDTHOLD;

    P1DIR |= BIT6; //Set pin 1.2 to the output direction
    P1REN |= BIT3; //Enable resistor for pin 1.3.
    P1OUT |= BIT3;
    P1SEL |= BIT6;
    TA0CCR0 = 1000; //The timer counts up to this.
    TA0CCTL1 = OUTMOD_7;
    TA0CCR1 = 0; //The PWM period, which is 0 uS.
    TA0CTL = TASSEL_2 + MC_1;

while(1)
{
    if ((P1IN & BIT3) != BIT3) { //Listen for button presses.
        __delay_cycles(200000);
        TA0CCR1 = TA0CCR1 + 100; //Increment the PWM period
    if (TA0CCR1 > 1000) { TA0CCR1 = 0; }
    }
}
return 0;
}
