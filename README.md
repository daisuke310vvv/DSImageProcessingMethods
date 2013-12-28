DSImageProcessingMethods
========================

about  
========================  
This includes methods for Image Processing with using OpenCV.

How to Start  
========================
* make lib file  
`cd lib/`  
`make`   
  
* make DSIPMethods.c  
`cd ..`  
`make`   
  
  
* set the DYLD_LIBRARY_PATH into your shell setting file.  
`export DYLD_LIBRARY_PATH=/path/DSImageProcessingMethods/lib:$DYLD_LIBRARY_PATH`  
  
* reload your shell  
`source ./your_shell(like ./zshrc or ./bashrc)`  
  
then, you can use it.  

How to Use  
========================
`./DSIPMethods method-name input-image output-image-name`  

Methods  
========================
* getGrayScaleImage  
  return gray scale image file(.jpg) in your current directory.  
