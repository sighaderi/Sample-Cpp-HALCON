#include <iostream>
#include <HalconCpp.h>

using namespace HalconCpp;
using namespace std;

int main() {
    // Initialize the Halcon library
    HOperatorSet::OpenWindow(0, 0, 640, 480, "visible", "", "");

    try {
        // Read the input image
        HImage image("input_image.png");

        // Threshold the image
        HImage thresholded;
        Threshold(image, &thresholded, 128, 255);

        // Save the result
        thresholded.WriteImage("output_image.png");
    }
    catch (HException& e) {
        cerr << "An exception occurred: " << e.ErrorMessage() << endl;
        return -1;
    }

    // Close the Halcon library
    HOperatorSet::CloseWindow();

    return 0;
}
