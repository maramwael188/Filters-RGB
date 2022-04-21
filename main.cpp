#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"
using namespace std;

unsigned char image [SIZE][SIZE][RGB];

void loadImage() {
    char imageFileName[100];
    cout << "Enter the source image file name: ";
    // take the image file name the user wants to apply filters on
    cin >> imageFileName;
    strcat(imageFileName, ".bmp");
    readRGBBMP(imageFileName, image);
}
void saveImage() {
    char imageFileName[100];
    cout << "Enter the target image file name: ";
    // take the image file name the user wants to save
    cin >> imageFileName;
    strcat(imageFileName, ".bmp");
    writeRGBBMP(imageFileName, image);
}

void mergeImage(){
    unsigned char mergedImage[SIZE][SIZE][RGB];
    unsigned char image2[SIZE][SIZE][RGB];
    char mergedImageFileName[100];
    // load another image to merge with the first image
    cout << "Enter the image file name you want to merge with: ";
    cin >> mergedImageFileName;
    strcat(mergedImageFileName, ".bmp");
    readRGBBMP(mergedImageFileName, image2);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < RGB; k++) {
                // get the average of pixels of the two images
                mergedImage[i][j][k] = (image[i][j][k] + image2[i][j][k]) / 2;
                image[i][j][k] = mergedImage[i][j][k];
            }
        }
    }
}


int main() {
    // loop to make the program run until the user wants to exit
    while (true) {
        cout << "Choose what you like to do: " << endl;
         cout << "1-Black and white image." << endl;
        cout << "2-Invert image." << endl;
        cout << "3-Merge Images." << endl;
        cout << "4-Flip Image." << endl;
        cout << "5-Rotate Image." << endl;
        cout << "6-Darken and Lighten Image." << endl;
        cout << "7-Detect Image Edges." << endl;
        cout << "8-Enlarge Image." << endl;
        cout << "9-Shrink Image." << endl;
        cout << "a-Mirror Image." << endl;
        cout << "b-Shuffle Image." << endl;
        cout << "c-Blur Image." << endl;
        cout << "0-Exit." << endl;
        cout << "enter number or char: ";
        char option;
        cin >> option;
        if (option == '0') {
            break;
        }
        loadImage();
        switch (option) {
            case '1':

                break;
            case '2':

                break;
            case '3':
                mergeImage();
                break;
            case '4':

                break;
            case '5':

                break;
            case '6':

                break;
            case '7':

                break;
            case '8':

                break;
            case '9':

                break;
            case 'a':

                break;
                case 'b':

                  break;
            case 'c':

                break;
        }
        saveImage();
    }
}
