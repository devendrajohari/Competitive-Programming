/*
Given the coordinates of two rectilinear rectangles in a 2D plane, return the total area covered by the two rectangles.

The first rectangle is defined by its bottom-left corner (ax1, ay1) and its top-right corner (ax2, ay2).

The second rectangle is defined by its bottom-left corner (bx1, by1) and its top-right corner (bx2, by2).

 

Example 1:

Rectangle Area
Input: ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2
Output: 45
*/

  int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = abs(ax2-ax1)*abs(ay2-ay1);
        int area2 = abs(bx2-bx1)*abs(by2-by1);
        
        int l = max((min(ax2, bx2) - max(ax1,bx1)),0);
        int b = max( min(ay2, by2) - (max(by1, ay1)),0);
        return area1+area2-(l*b);
    }