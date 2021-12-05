# Handsafe
This device works with Arduino and PIR sensor when someone puts their hand near a machine, the servo dispenses an adequate amount of hand sanitizer.
## Inspiration
During this time when the whole world is fighting this pandemic, we need to keep ourselves safe and secure from this deadly virus, since it's the season of winter, the probability of viral diseases is more, and using hand sanitizer bottle that used by many peoples makes it contaminated. So here is our solution.

## What it does
This device works with Arduino and PIR sensor when someone puts their hand near a machine, the servo dispenses an adequate amount of hand sanitizer.

## How We built it
We built it using **Tinker CAD** online simulator, where we used **Arduino Uno R3** as the brain of our project which communicates with the **PIR (Passive Infra-Red) Motion Sensor** and checks whether there was movement in front of the sensor or not. If it detects some motion, then the Arduino rotates the **5V Micro Servo** motor by 90 degrees such that it pushes the lever of the sanitizer dispenser. It does so for 3 seconds and then returns back to its original state. We're using a **Liquid Crystal Display** for display information like whether it detected a hand or not, or the duration for which the sanitizer is being dispensed.

## Challenges we ran into
We didn't have all the materials available to us so we decided to use a simulator. This being a challenge as we all were new to the Tinker CAD interface. We chose Tinker CAD over other simulators as it provided an interface where many people can contribute at the same time. Designing the whole circuit online without using a multimeter to test our connections seemed a bit strange but we pushed past those hurdles and made something we all are proud of.

## Accomplishments that we're proud of
We learnt how to use an online simulator, and how a PIR sensor works. Two of our teammates who are also new to the hardware world learnt many things about the Arduino boards and its language.
