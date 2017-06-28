int LDR_RED = 5;     //analog pin to which LDR is connected, here we set it to 0 so it means A0

int LDR_GREEN = 4;     //analog pin to which LDR is connected, here we set it to 0 so it means A0

int LDR_RED_Value = 0;      //thats a variable to store LDR values

int LDR_GREEN_Value = 0;      //thats a variable to store LDR values

int light_sensitivity = 50;    //This is the approx value of light surrounding your LDR

int LED_RED = 2;

int LED_GREEN = 3;



void setup()

  {

    Serial.begin(9600);          //start the serial monitor with 9600 buad

    pinMode(LED_RED, OUTPUT);

    pinMode(LED_GREEN, OUTPUT);

  }

 

void loop()

  {

    LDR_RED_Value = analogRead(LDR_RED);      //reads the ldrs value through LDR 

    LDR_GREEN_Value = analogRead(LDR_GREEN);      //reads the ldrs value through LDR 

    Serial.print("Red Value ");

    Serial.println(LDR_RED_Value);       //prints the LDR values to serial monitor

    Serial.print("Green Value ");

    Serial.println(LDR_GREEN_Value);       //prints the LDR values to serial monitor

    delay(200);        //This is the speed by which LDR sends value to arduino

 

    if (LDR_RED_Value > light_sensitivity) 

      {

        digitalWrite(LED_RED, HIGH);

      }

    else

      {

        digitalWrite(LED_RED, LOW);

      }

    if (LDR_GREEN_Value > light_sensitivity) 

      {

        digitalWrite(LED_GREEN, HIGH);

      }

    else

      {

        digitalWrite(LED_GREEN, LOW);

      }



  }
