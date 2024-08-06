#include <iostream>

int main()
{
    // Image dimensions
    int image_height{256}; 
    int image_width{256}; 

    // Generate ppm file 
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    
    for (int j{0}; j < image_height; ++j) {
        for (int i{0}; i < image_width; ++i) {
            double red{static_cast<double>(i) / (image_width - 1)};
            double green{static_cast<double>(j) / (image_height - 1)};
            double blue = 0.0; 

            int int_red{static_cast<int>(255.999 * red)};
            int int_green{static_cast<int>(255.999 * green)};
            int int_blue{static_cast<int>(255.999 * blue)};

            std::cout << int_red << ' ' << int_green << ' ' << int_blue << '\n';        
        }
    }
    
    return 0;
}