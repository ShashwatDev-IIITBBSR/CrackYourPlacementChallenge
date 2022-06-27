class Solution {
public:
    void floodfill(vector<vector<int>>& image, int initial_color,int row,int col, int newColor)
    {
        int num_rows=image.size(),num_col=image[0].size();
        if(row<0 or row>=num_rows or col<0 or col>=num_col){return;}
        if(image[row][col]!=initial_color){return;}
        image[row][col]=newColor;
        floodfill(image,initial_color,row+1,col,newColor);
        floodfill(image,initial_color,row,col+1,newColor);
        floodfill(image,initial_color,row,col-1,newColor);
        floodfill(image,initial_color,row-1,col,newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if(newColor==image[sr][sc]){return image;}
        floodfill(image,image[sr][sc],sr,sc,newColor);
        return image;
    }
};