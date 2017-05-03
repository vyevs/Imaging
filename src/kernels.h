#ifndef KERNELS_H_INCLUDED
#define KERNELS_H_INCLUDED

#define IDENTITY_KERNEL_ROWS 3
#define IDENTITY_KERNEL_COLS 3
#define IDENTITY_KERNEL_COEFF 1.0f
extern int identity_kernel[IDENTITY_KERNEL_ROWS][IDENTITY_KERNEL_COLS];

#define BOX_BLUR_KERNEL_ROWS 3
#define BOX_BLUR_KERNEL_COLS 3
#define BOX_BLUR_KERNEL_COEFF (1.0f/9)
extern int box_blur_kernel[BOX_BLUR_KERNEL_ROWS][BOX_BLUR_KERNEL_COLS];

#define EDGE_1_KERNEL_ROWS 3
#define EDGE_1_KERNEL_COLS 3
#define EDGE_1_KERNEL_COEFF 1.0f
extern int edge_1_kernel[EDGE_1_KERNEL_ROWS][EDGE_1_KERNEL_COLS];


#define EDGE_2_KERNEL_ROWS 3
#define EDGE_2_KERNEL_COLS 3
#define EDGE_2_KERNEL_COEFF 1.0f
extern int edge_2_kernel[EDGE_2_KERNEL_ROWS][EDGE_2_KERNEL_COLS];

#define EDGE_3_KERNEL_ROWS 3
#define EDGE_3_KERNEL_COLS 3
#define EDGE_3_KERNEL_COEFF 1.0f
extern int edge_3_kernel[EDGE_3_KERNEL_ROWS][EDGE_3_KERNEL_COLS];

#define SHARPEN_KERNEL_ROWS 3
#define SHARPEN_KERNEL_COLS 3
#define SHARPEN_KERNEL_COEFF 1.0f
extern int sharpen_kernel[SHARPEN_KERNEL_ROWS][SHARPEN_KERNEL_COLS];

#define GAUSSIAN_3_3_KERNEL_ROWS 3
#define GAUSSIAN_3_3_KERNEL_COLS 3
#define GAUSSIAN_3_3_KERNEL_COEFF (1.0f/16)
extern int gaussian_3_3_kernel[GAUSSIAN_3_3_KERNEL_ROWS][GAUSSIAN_3_3_KERNEL_COLS];

#define GAUSSIAN_5_5_KERNEL_ROWS 5
#define GAUSSIAN_5_5_KERNEL_COLS 5
#define GAUSSIAN_5_5_KERNEL_COEFF (1.0f/256)
extern int gaussian_5_5_kernel[GAUSSIAN_5_5_KERNEL_ROWS][GAUSSIAN_5_5_KERNEL_COLS];

#define GRADIENT_X_KERNEL_ROWS 3
#define GRADIENT_X_KERNEL_COLS 3
#define GRADIENT_X_KERNEL_COEFF (1.0f/2)
extern int gradient_x_kernel[GRADIENT_X_KERNEL_ROWS][GRADIENT_X_KERNEL_ROWS];

#define GRADIENT_Y_KERNEL_ROWS 3
#define GRADIENT_Y_KERNEL_COLS 3
#define GRADIENT_Y_KERNEL_COEFF (1.0f/2)
extern int gradient_y_kernel[GRADIENT_Y_KERNEL_ROWS][GRADIENT_X_KERNEL_ROWS];

#define FINITE_EAST_KERNEL_ROWS 3
#define FINITE_EAST_KERNEL_COLS 3
#define FINITE_EAST_KERNEL_COEFF 1.0
extern int finite_east_kernel[FINITE_EAST_KERNEL_ROWS][FINITE_EAST_KERNEL_ROWS];

#define FINITE_WEST_KERNEL_ROWS 3
#define FINITE_WEST_KERNEL_COLS 3
#define FINITE_WEST_KERNEL_COEFF 1.0
extern int finite_west_kernel[FINITE_WEST_KERNEL_ROWS][FINITE_WEST_KERNEL_ROWS];


#define FINITE_NORTH_KERNEL_ROWS 3
#define FINITE_NORTH_KERNEL_COLS 3
#define FINITE_NORTH_KERNEL_COEFF 1.0
extern int finite_north_kernel[FINITE_NORTH_KERNEL_ROWS][FINITE_NORTH_KERNEL_ROWS];

#define FINITE_SOUTH_KERNEL_ROWS 3
#define FINITE_SOUTH_KERNEL_COLS 3
#define FINITE_SOUTH_KERNEL_COEFF 1.0
extern int finite_south_kernel[FINITE_SOUTH_KERNEL_ROWS][FINITE_SOUTH_KERNEL_ROWS];

#define LAPLACE_KERNEL_ROWS 3
#define LAPLACE_KERNEL_COLS 3
#define LAPLACE_KERNEL_COEFF (1.0f/8)
extern int laplace_kernel[LAPLACE_KERNEL_ROWS][LAPLACE_KERNEL_COLS];

#endif
