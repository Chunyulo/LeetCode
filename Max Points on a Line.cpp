/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point> &points) {
        map<double,int> cnt;
        map<double,int>::iterator it;
        int i,j,dup,ret=0,maxt;
        double t;
        
        if(points.size()<3) return points.size();
		for(j=0;j<points.size();j++){
			cnt.clear();
			dup = 0,maxt=0;
			for(i=0;i<points.size();i++){
				if(i==j) continue;
				if(points[i].x == points[j].x && points[i].y == points[j].y) dup++;
				else if(points[i].x == points[j].x) maxt++;
				else{
					t = (1.0*(points[i].y-points[j].y))/(1.0*(points[i].x-points[j].x));
					it = cnt.find(t);
					if(it == cnt.end()){
						cnt.insert(make_pair(t,1));
					}else{
						it->second++;
					}
				}
			}
			for(it=cnt.begin();it!=cnt.end();it++)
				if(it->second > maxt) maxt = it->second;
			if(ret<maxt+dup+1) ret=maxt+dup+1;
		}
        return ret;
    }
};