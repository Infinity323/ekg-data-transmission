#ifndef Histogram_h
#define Histogram_h

#include <queue>
#include <string>
#include <vector>
#include <unordered_map>
#include <thread>
using namespace std;

class Histogram
{
private:
    vector<int> hist;
    int nbins;
    double start, end;

    mutex mtx;

public:
    Histogram(int, double, double);
    ~Histogram();
    void update(double);    // updates the histogram
    vector<int> get_hist(); // prints the histogram
    int size();
    vector<double> get_range();
};

#endif
