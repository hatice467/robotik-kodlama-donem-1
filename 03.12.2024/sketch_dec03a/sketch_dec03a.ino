// C++ code
//
void setup()// BİR SEFER ÇALIŞIR
{
  for(int sayac=2;sayac<=6;sayac++){
    pinMode(sayac, OUTPUT);// ÇIKIŞ YAPILDI 
  }
}

void loop()
{
  // ARAÇ KIRMIZI IŞIĞI YANDI BAŞLADI
  
  for(int sayac=2;sayac<=6;sayac++)
  {
  digitalWrite(sayac,1);
  delay(100); 
  digitalWrite(sayac,0);
   delay(100);
  } 
}
