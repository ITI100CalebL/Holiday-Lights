#include <msp430.h> 

void delay(){
    volatile unsigned long i = 15000;

    while(i != 0){
        i = i - 1;
    }
}

void setOn(int port, int bit){
    if (port == 1 && bit == 5){
        P1OUT |= BIT5;   // P1OUT = P1OUT & ~0b00000001

    }else if(port == 1 && bit == 6){
        P1OUT |= BIT6;   // P1OUT = P1OUT & ~0b00000001

    }else if(port == 1 && bit == 7){
        P1OUT |= BIT7;   // P1OUT = P1OUT & ~0b00000001
    }else if(port == 1 && bit == 4){
        P1OUT |= BIT4;   // P1OUT = P1OUT & ~0b00000001
    }
}

void setOff(int port, int bit){
    if (port == 1 && bit == 5){
        P1OUT &= ~BIT5;

        }else if(port == 1 && bit == 6){
            P1OUT &= ~BIT6;

        }else if(port == 1 && bit == 7){
            P1OUT &= ~BIT7;
        }else if(port == 1 && bit == 4){
            P1OUT &= ~BIT4;
        }
}

void pattern1(){
    setOn(1,5);
        delay();
    setOff(1,5);
    setOn(1,6);
        delay();
    setOff(1,6);
    setOn(1,7);
        delay();
    setOff(1,7);
    setOn(1,4);
         delay();
    setOff(1,4);
 //loop ----------------------------------------------------------------------------------
    setOn(1,5);
           delay();
       setOff(1,5);
       setOn(1,6);
           delay();
       setOff(1,6);
       setOn(1,7);
           delay();
       setOff(1,7);
       setOn(1,4);
            delay();
       setOff(1,4);
//loop---------------------------------
       setOn(1,5);
              delay();
          setOff(1,5);
          setOn(1,6);
              delay();
          setOff(1,6);
          setOn(1,7);
              delay();
          setOff(1,7);
          setOn(1,4);
               delay();
          setOff(1,4);
//loop-----------------------------
          setOn(1,5);
                 delay();
             setOff(1,5);
             setOn(1,6);
                 delay();
             setOff(1,6);
             setOn(1,7);
                 delay();
             setOff(1,7);
             setOn(1,4);
                  delay();
             setOff(1,4);
             delay();
}

void pattern2(){
//blink 1 ------------------------------------------------------------
                   setOn(1,5);
                   setOn(1,6);
                   setOn(1,7);
                   setOn(1,4);

                    delay();

                   setOff(1,5);
                   setOff(1,6);
                   setOff(1,7);
                   setOff(1,4);

                    delay();
//blink 2 --------------------------------------------------------------------------------
                    setOn(1,5);
                    setOn(1,6);
                                      setOn(1,7);
                                      setOn(1,4);

                                       delay();

                                      setOff(1,5);
                                      setOff(1,6);
                                      setOff(1,7);
                                      setOff(1,4);

                                       delay();
//blink 3 ---------------------------------------------------------------------------------
                                       setOn(1,5);
                                                         setOn(1,6);
                                                         setOn(1,7);
                                                         setOn(1,4);

                                                          delay();

                                                         setOff(1,5);
                                                         setOff(1,6);
                                                         setOff(1,7);
                                                         setOff(1,4);

                                                          delay();
//blink 4-------------------------------------------------------------------------------------------------
                                                          setOn(1,5);
                                                                            setOn(1,6);
                                                                            setOn(1,7);
                                                                            setOn(1,4);

                                                                             delay();

                                                                            setOff(1,5);
                                                                            setOff(1,6);
                                                                            setOff(1,7);
                                                                            setOff(1,4);
delay();

}

void pattern3(){
    setOn(1,5);
    setOn(1,7);
    delay();
    setOff(1,5);
    setOff(1,7);
    setOn(1,6);
    setOn(1,4);
    delay();
    setOff(1,6);
    setOff(1,4);
    setOn(1,5);
    setOn(1,7);
    delay();
    setOff(1,5);
    setOff(1,7);
    setOn(1,6);
    setOn(1,4);
    delay();
    setOff(1,6);
    setOff(1,4);
    setOn(1,5);
       setOn(1,7);
       delay();
       setOff(1,5);
       setOff(1,7);
       setOn(1,6);
       setOn(1,4);
       delay();
       setOff(1,6);
       setOff(1,4);
       setOn(1,5);
          setOn(1,7);
          delay();
          setOff(1,5);
          setOff(1,7);
          setOn(1,6);
          setOn(1,4);
          delay();
          setOff(1,6);
          setOff(1,4);
    delay();
}

void pattern4(){
   setOn(1,5);
   delay();
   setOn(1,6);
   delay();
   setOn(1,7);
   delay();
   setOn(1,4);
   delay();
   setOff(1,5);
   setOff(1,6);
   setOff(1,7);
   setOff(1,4);
delay();
setOn(1,5);
  delay();
  setOn(1,6);
  delay();
  setOn(1,7);
  delay();
  setOn(1,4);
  delay();
  setOff(1,5);
  setOff(1,6);
  setOff(1,7);
  setOff(1,4);
delay();
setOn(1,5);
  delay();
  setOn(1,6);
  delay();
  setOn(1,7);
  delay();
  setOn(1,4);
  delay();
  setOff(1,5);
  setOff(1,6);
  setOff(1,7);
  setOff(1,4);
delay();
setOn(1,5);
  delay();
  setOn(1,6);
  delay();
  setOn(1,7);
  delay();
  setOn(1,4);
  delay();
  setOff(1,5);
  setOff(1,6);
  setOff(1,7);
  setOff(1,4);
delay();
}


/**
 * main.c
 */
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;       // Disable hihe-impedance mode

	    P1DIR |= BIT5;  // set P1.0 as output
	    P1DIR |= BIT6;
	    P1DIR |= BIT7;
	    P1DIR |= BIT4;

	    for(;;){

//Pattern 1-------------------------------------------------
	      pattern1();

	      delay();

//Pattern 2-------------------------------------------------------------------------------------
            pattern2();

            delay();

//Pattern 3----------------------------------------------------------------------------------
            pattern3();

            delay();

//Pattern 4-------------------------------------------------------------------------------
            pattern4();

            delay();
	    }
	return 0;
}
