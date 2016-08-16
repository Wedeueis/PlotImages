OpenCV Function to plot a list of images
=========================================
This simple program intends to facilitate the process of plotting a set of images when creating an application in  OpenCV using C++. It requires the OpenCV library  and was made to execute in an Linux enviroment. 
In *imagens* folder you will find a set of example images to test the program.

### Usage
To compile the files just go to the folder in the terminal and do a `make` command. To execute than type `./plotImage <numberOfImages>`, where numberOfImages is the actual number that you want to plot going from 1 to 12 images. 

###Including in a C++ program
If you want to include the function in your program, just copy and paste the *plotter.cpp* and *plotter.hpp* files in your working directory, include the header file and use the function *showManyImages(title, images, size)*, where title is a string that names the window, images is a standard vector object containing the images that you want to plot and size is an integer that tells the maximum size of a an image in the plot.
