#include <iostream>
using namespace std;

main()
{
float sizeOfBagInPounds;
float costPerBag;
float areaInSquarefeet;
float costOfFertilizerPerPound;
float squarefeetPerPound;
float costOfAreaPerSquarefeet;

cout << "Enter Bag Size in Pounds: ";
cin >> sizeOfBagInPounds;
cout << "Enter cost of the bag: ";
cin >> costPerBag;
cout << "Enter area covered by each bagin square feet: ";
cin >> areaInSquarefeet;

costOfFertilizerPerPound = costPerBag / sizeOfBagInPounds;
squarefeetPerPound = sizeOfBagInPounds / areaInSquarefeet;
costOfAreaPerSquarefeet = squarefeetPerPound * costOfFertilizerPerPound;

cout << endl;
cout <<"********************************************************************" << endl;
cout << "Cost of the fertilizer per pound: " << costOfFertilizerPerPound << endl;
cout << "Cost of fertilizing the area per square feet: " << costOfAreaPerSquarefeet;
}