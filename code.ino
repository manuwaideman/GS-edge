# include  <LiquidCrystal.h>
 

int balanca;
int peso;
int led = 13;

LiquidCrystal  lcd  (7, 8, 9, 10, 11, 12); 

void setup()
{
  lcd.begin(16, 2);        
  lcd.setCursor(0, 0);      
  lcd.setCursor (0,1);
  lcd.print ("Alimento");
  Serial.begin(9600);
  delay (2000);
  lcd.clear();
}
 
void loop()
{  
  pinMode(led, OUTPUT);
  
  lcd.setCursor(0, 1);             
  lcd.print ("peso: ");
  lcd.print(peso);  
  lcd.print ("g"); 
  
  balanca=analogRead(0);
  peso=map(balanca, 0, 914, 0, 30000);
  
  
    
  if (peso > 750) digitalWrite(led, HIGH);
  if (peso < 50) digitalWrite(led, LOW);;
}
