# XIOT-Embedded-Task

## Hardware Setup
>* Connect a led to Pin2  
>* Connect push button to Pin1  
>* Connect the Controller to the PC using USB (Serial Monitor)  
>* Connect the temp Sensor to Pin4  
  
## Assumption
>* This is a generic function to toggle the led, I am not sure from the description whether we should toggle the led or just the button will just light the led on, I have assumed that this is function used to toggle the led using the push button  
>* As I understood what is required is not a function for a specific controller, just a function to describe what should be done in general
>* I have assumed that there is an implemented drivers for the controller we are using and we are just using the implemented functions to do what is required  
>* I have uploaded some Tiva C drivers that I have implemented these drivers are just example for the drivers that can be implemented having the functions used in the main function
>* The drivers doesn't have all functions used, the drivers have just some functions as an example for implementing functions  
>* This function is not for specific target it just a generic function expressing the concepts needed  
>* I have assumed that this function is called in main outside the while loop used  
  
## Issues
>* The interrupt with the higher priority may interrupt the interrupt with lower priority so we can solve this by using common buffer in order not to make any conflict while writing on the serial monitor
