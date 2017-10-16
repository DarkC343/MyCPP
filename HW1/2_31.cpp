/*
 * In the name of God
 * 
 * Student name: AmirMohammad Biuki
 * 
 * Exercise name: 2.30
 * 
 */
#include <iostream>

using namespace std;

/* 
 * total km driven per day : 16
 * cost per gallon : 1200
 * average km per gallon : 2   -> 8 gallon mikhad -> 8 * 1200 = 96000 t
 * parking fees per day : 5000
 * tolls per day : 10000
 * 
 * sum = 96000 + 5000 + 10000 = 111000 t
 * 
 * 1 per week : week, 1 month, 3 month, 6 month, 1 year, 5 year, 10 year
 * 3 per week : week, 1 month, 3 month, 6 month, 1 year, 5 year, 10 year
 * 5 per week : week, 1 month, 3 month, 6 month, 1 year, 5 year, 10 year
 * 
 * if 1 -> kolle poolo baas bede
 * if n -> kolle pool taghsim bar n -> sahme har nafar
 * 
 * saved money : 1 nafari - sahme khodam dar n nafar
 * 
 */

class Carpool
{
public:
    // Constructor
    Carpool( float input_km, float input_cost, float input_kpl, float input_fee, float input_toll )
    {
        km = input_km;
        cost = input_cost;
        kpl = input_kpl;
        fee = input_fee;
        toll = input_toll;
    }
    
    // Set method for passengers count
    void setPassengers( int input_passengers )
    {
        passengers = input_passengers;
    }
    
    // Get method for passengers count
    float getPassengers() const
    {
        return passengers;
    }
    
    // Calculate the cost for individual by returning the sum of each cost
    float individualCost() const
    {
        return ( km / kpl ) * cost  + fee + toll;
    }
    
    // Calculate the saved money for individual by returning the sum of each cost. Passengers included.
    float saveCost() const
    {
        //return individualCost() - individualCost() / getPassengers();
        return (individualCost() * ( 1 - 1 / getPassengers() )); //WHY NOT?!!? :== individualCost
    }
    
    //*************************
    // Calculate the cost for individual per week. 'count' is days per week.
    float costWeekly( int count ) const
    {
        return individualCost() * count;
    }
    
    // Calculate the cost for individual per month. 'count' is days per week.
    float costMonthly( int count ) const
    {
        return individualCost() * 4 * count;
    }
    
    // Calculate the cost for individual per year. 'count' is days per week.
    float costAnnually( int count ) const
    {
        return individualCost() * 52 * count;
    }
    //*************************
    // Calculate the saved money from carpooling per week. 'count' is days per week. Passengers included.
    float saveCostWeekly( int count ) const
    {
        return saveCost() * count;
    }
    
    // Calculate the saved money from carpooling per month. 'count' is days per week. Passengers included.
    float saveCostMonthly( int count ) const
    {
        return saveCost() * 4 * count;
    }
    
    // Calculate the saved money from carpooling per year. 'count' is days per week. Passengers included.
    float saveCostAnnually( int count ) const
    {
        return saveCost() * 52 * count;
    }

    // Result message. Costs and saved money are included.
    void resultMessage() const
    {        
        cout << "---------- INDIVIDUAL COSTS RESULTS ----------" << endl;
        cout << "[+] 1 day per week" << endl;
        
        cout << "  [ > ] " << costWeekly( 1 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << costMonthly( 1 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << costAnnually( 1 ) << " Toman : annually" << endl;
        
        cout << "[+] 3 days per week" << endl;
        
        cout << "  [ > ] " << costWeekly( 3 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << costMonthly( 3 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << costAnnually( 3 ) << " Toman : annually" << endl;
        
        cout << "[+] 5 days per week" << endl;
        
        cout << "  [ > ] " << costWeekly( 5 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << costMonthly( 5 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << costAnnually( 5 ) << " Toman : annually" << endl;
        
        
        cout << "---------- SAVE MONEY BY CARPOOLING RESULTS ----------" << endl;
        cout << "[+] 1 day per week" << endl;
        
        cout << "  [ > ] " << saveCostWeekly( 1 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << saveCostMonthly( 1 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << saveCostAnnually( 1 ) << " Toman : annually" << endl;
        
        cout << "[+] 3 days per week" << endl;
        
        cout << "  [ > ] " << saveCostWeekly( 3 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << saveCostMonthly( 3 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << saveCostAnnually( 3 ) << " Toman : annually" << endl;
        
        cout << "[+] 5 days per week" << endl;
        
        cout << "  [ > ] " << saveCostWeekly( 5 ) << " Toman : weekly" << endl;
        cout << "  [ > ] " << costMonthly( 5 ) << " Toman : monthly" << endl;
        cout << "  [ > ] " << saveCostAnnually( 5 ) << " Toman : annually" << endl;
        
    }
    
    
private:
    float km, cost, kpl, fee, toll;
    int passengers;
};


int main()
{
    float km, cost, kpl, fee, toll;
    int passengers;
    
    // Questions
    cout << "Total km(s) driven per day: ";
    cin >> km;
    cout << "Cost per litre of gasoline (Toman): ";
    cin >> cost;
    cout << "Average km(s) per litre: ";
    cin >> kpl;
    cout << "Parking fees per day (Toman): ";
    cin >> fee;
    cout << "Tolls per day (Toman): ";
    cin >> toll;
    cout << "Passengers count (within yourself): ";
    cin >> passengers;
    
    // Object
    Carpool carpoolObj( km, cost, kpl, fee, toll );
    
    // Set passengers count
    carpoolObj.setPassengers( passengers );
    
    // Show the results message
    carpoolObj.resultMessage();
    
    return 0;
}











