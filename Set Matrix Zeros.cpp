class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        if(matrix.size() > 0){
        	std::vector<int> row(matrix.size(),0);
        	if(matrix[0].size() > 0){
        		std::vector<int> col(matrix[0].size(),0);
        		for(int i = 0; i < row.size(); i++){
        			for(int j = 0; j< col.size();j++){
        				if(matrix[i][j] == 0){
        					row[i] = 1;
        					col[j] = 1;
        				}
        			}
        		}

        		for(int i = 0; i < row.size(); i++){
        			for(int j = 0; j< col.size();j++){
        				if(row[i] == 1 || col[j] == 1){
        					matrix[i][j] = 0;
        				}
        			}
        		}     			
        	}

        }
    }
};