# Computer Vision Class

Goal: This repository is part of my review for the CSCI381 Computer Vision final exam. I, intend to extend the projects available once the class is done and add image processing methods from the CSCI367 class.


## Topics

- Overview of Computer Vision 
    - Definitions:

        + Low level cv: image -> image
        + Mid level cv: image -> pattern
        + High level cv: pattern -> object interpretation

- Grey-scale image histogram & Thresholding Operation
    Grey scale image common range 0 - 256, 8 bits.
        
    What is a histogram?
    A bar graph that counts the frequency of distinct objects in our input set(grey-scale image).
    In our case the frequency of pixels 0-256

    What can a histogram tell us?

    If we have a double peak histogram we can use the min value between the peaks as a threshold to separate the foreground from the background. 

    See project 1


- Automatic Threshold Selection Methods(Deepest concativity and bi-Gaussian)

    Identifying the ideal threshold value can be cumbersome. To address this problem we can use the bi-Gaussian method to identified the deepest concativity betweem two peaks in "Bimodal" histogram. 


    What the bi-Gaussian method does is it tries to fit two gaussian distributions along our histogram to overlap the peaks. We do this left to right saving the properties of the better matching gaussians on our histogram. 


    How can we modify a Gaussian Distribution?

        - Change its variance
        - Change is mean


- Greyscale image noise suppression operators
    
-  Binary image noise supression operators
    -   Object extraction(Via mathematical morphology)

- Distance Transform
    - 4 Connectness, city-block, 8-connectness, Eucledian Distance
    
- Medial Axis (Skeleton) via Local Maxima of Distance Transform 

- Medial Axis via thinning algorithm

- Binary Shapes Analysis(Connected Component Properties)

- Binary Shapes Analysis (Connected Components and Properties)

- Edge detention operators(Robert, Sobel, Gradient, Zero-crossing)

- Line detection via Hugh Transform

- Boundary Pattern Analysis (Chain Coding, and Data Compression)

- Document image page decomposition (via Projection Profiles, pixel based)

- Document image page decomposition (via Projection Profiles, pixel based)

