int light = 0; 

void setup() {
    
    Serial.begin(9600); 
    pinMode(13, OUTPUT); 
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT); 
}

void loop() {
    
    light = analogRead(A0); 
    
    Serial.println(light); 
 
    if(light > 600) { 
        Serial.println("It is quite light!");
        digitalWrite(13,LOW); 
        digitalWrite(12,LOW);
        digitalWrite(11,HIGH);
    }
    else if(light > 350 && light < 600) { 
        Serial.println("It is average light!");
       digitalWrite(13, LOW); 
       digitalWrite(12,HIGH);  
       digitalWrite(11,LOW);
    }
    else { 
        Serial.println("It is pretty dark!");
        digitalWrite(13,HIGH); 
        digitalWrite(12,LOW); 
      digitalWrite(11,LOW);
    }
    delay(1000); 
}
