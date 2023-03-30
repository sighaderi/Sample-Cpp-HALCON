In this example, we first initialize the Halcon library by opening a window using HOperatorSet::OpenWindow(). We then use a try-catch block to catch any exceptions that may occur.
Inside the try block, we read an input image file using the HImage constructor, threshold the image using the Threshold() procedure, and save the result using the WriteImage() method.
Finally, we close the Halcon library using HOperatorSet::CloseWindow().
Note that in order to compile and link this code, you'll need to include the Halcon libraries in your build environment and link against them. You'll also need to include the Halcon header files in your source code.
