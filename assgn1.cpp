#include <iostream>
#include <cstdint>

using namespace std;

// Define the structure for Unit Location
struct UnitLocation {
    uint32_t latitude;
    uint32_t longitude;
    uint32_t altitude;
    uint32_t timezone;
    uint32_t refraction;
    uint32_t tracking_mode;
};

// Define the structure for Azimuth
struct Azimuth {
    uint32_t AZ_Offset;
    uint32_t AZ_SoftLimit_Reverse;
    uint32_t AZ_SoftLimit_Forward;
    uint32_t AZ_DeadBand;
    uint32_t AZ_NightStowThreshold;
    uint32_t AZ_NightStowPosition;
    uint32_t AZ_WindStowPosition;
};

// Define the structure for Elevation
struct Elevation {
    uint32_t EL_Offset;
    uint32_t EL_SoftLimit_Reverse;
    uint32_t EL_SoftLimit_Forward;
    uint32_t EL_DeadBand;
    uint32_t EL_NightStowThreshold;
    uint32_t EL_NightStowPosition;
    uint32_t EL_WindStowPosition;
};

// Define the structure for SingleAxis
struct SingleAxis {
    int BacktrackingEnabled;
    uint32_t PanelShadowStartAngleDegrees;
    uint32_t SunShadowStartAngleDegrees;
    uint32_t SunShadowStartHeight;
    uint32_t Single_SoftLimit_Reverse;
    uint32_t Single_SoftLimit_Forward;
    int Single_start_date;
    int Single_stop_days;
};

// Function to initialize structures with default values
void initializeDefaultValues(UnitLocation& location, Azimuth& azimuth, Elevation& elevation, SingleAxis& singleAxis) {
    // Unit Location
    location = {62589, 62589, 62589, 62589, 62589, 1};

    // Azimuth
    azimuth = {0, 0, 0, 0, 0, 0, 0};

    // Elevation
    elevation = {0, 0, 0, 0, 0, 0, 0};

    // SingleAxis
    singleAxis = {1, 0, 0, 0, 0, 0, 12, 12};
}

// Function to display default values for each structure
void displayDefaultValues(const UnitLocation& location, const Azimuth& azimuth, const Elevation& elevation, const SingleAxis& singleAxis) {
    cout << "\nDefault Unit Location:" << endl
         << "Latitude: " << location.latitude << ", Longitude: " << location.longitude << ", Altitude: " << location.altitude << endl
         << "Timezone: " << location.timezone << ", Refraction: " << location.refraction << ", Tracking Mode: " << location.tracking_mode << endl;

    cout << "\nDefault Azimuth:" << endl
         << "AZ_Offset: " << azimuth.AZ_Offset << ", AZ_SoftLimit_Reverse: " << azimuth.AZ_SoftLimit_Reverse << endl
         << "AZ_SoftLimit_Forward: " << azimuth.AZ_SoftLimit_Forward << ", AZ_DeadBand: " << azimuth.AZ_DeadBand << endl
         << "AZ_NightStowThreshold: " << azimuth.AZ_NightStowThreshold << ", AZ_NightStowPosition: " << azimuth.AZ_NightStowPosition << endl
         << "AZ_WindStowPosition: " << azimuth.AZ_WindStowPosition << endl;

    cout << "\nDefault Elevation:" << endl
         << "EL_Offset: " << elevation.EL_Offset << ", EL_SoftLimit_Reverse: " << elevation.EL_SoftLimit_Reverse << endl
         << "EL_SoftLimit_Forward: " << elevation.EL_SoftLimit_Forward << ", EL_DeadBand: " << elevation.EL_DeadBand << endl
         << "EL_NightStowThreshold: " << elevation.EL_NightStowThreshold << ", EL_NightStowPosition: " << elevation.EL_NightStowPosition << endl
         << "EL_WindStowPosition: " << elevation.EL_WindStowPosition << endl;

    cout << "\nDefault SingleAxis:" << endl
         << "BacktrackingEnabled: " << singleAxis.BacktrackingEnabled << ", PanelShadowStartAngleDegrees: " << singleAxis.PanelShadowStartAngleDegrees << endl
         << "SunShadowStartAngleDegrees: " << singleAxis.SunShadowStartAngleDegrees << ", SunShadowStartHeight: " << singleAxis.SunShadowStartHeight << endl
         << "Single_SoftLimit_Reverse: " << singleAxis.Single_SoftLimit_Reverse << ", Single_SoftLimit_Forward: " << singleAxis.Single_SoftLimit_Forward << endl
         << "Single_start_date: " << singleAxis.Single_start_date << ", Single_stop_days: " << singleAxis.Single_stop_days << endl;
}


// Function to modify Unit Location values by user input
void modifyUnitLocation(UnitLocation& location) {
    cout << "Enter new Latitude: ";
    cin >> location.latitude;

    cout << "Enter new Longitude: ";
    cin >> location.longitude;

    cout << "Enter new Altitude: ";
    cin >> location.altitude;

    cout << "Enter new Timezone: ";
    cin >> location.timezone;

    cout << "Enter new Refraction: ";
    cin >> location.refraction;

    cout << "Enter new Tracking Mode: ";
    cin >> location.tracking_mode;
}

// Function to modify Azimuth values by user input
void modifyAzimuth(Azimuth& azimuth) {
    cout << "Enter new AZ_Offset: ";
    cin >> azimuth.AZ_Offset;

    cout << "Enter new AZ_SoftLimit_Reverse: ";
    cin >> azimuth.AZ_SoftLimit_Reverse;

    cout << "Enter new AZ_SoftLimit_Forward: ";
    cin >> azimuth.AZ_SoftLimit_Forward;

    cout << "Enter new AZ_DeadBand: ";
    cin >> azimuth.AZ_DeadBand;

    cout << "Enter new AZ_NightStowThreshold: ";
    cin >> azimuth.AZ_NightStowThreshold;

    cout << "Enter new AZ_NightStowPosition: ";
    cin >> azimuth.AZ_NightStowPosition;

    cout << "Enter new AZ_WindStowPosition: ";
    cin >> azimuth.AZ_WindStowPosition;
}

// Function to modify Elevation values by user input
void modifyElevation(Elevation& elevation) {
    cout << "Enter new EL_Offset: ";
    cin >> elevation.EL_Offset;

    cout << "Enter new EL_SoftLimit_Reverse: ";
    cin >> elevation.EL_SoftLimit_Reverse;

    cout << "Enter new EL_SoftLimit_Forward: ";
    cin >> elevation.EL_SoftLimit_Forward;

    cout << "Enter new EL_DeadBand: ";
    cin >> elevation.EL_DeadBand;

    cout << "Enter new EL_NightStowThreshold: ";
    cin >> elevation.EL_NightStowThreshold;

    cout << "Enter new EL_NightStowPosition: ";
    cin >> elevation.EL_NightStowPosition;

    cout << "Enter new EL_WindStowPosition: ";
    cin >> elevation.EL_WindStowPosition;
}

// Function to modify SingleAxis values by user input
void modifySingleAxis(SingleAxis& singleAxis) {
    cout << "Enter new BacktrackingEnabled (1 or 0): ";
    cin >> singleAxis.BacktrackingEnabled;

    cout << "Enter new PanelShadowStartAngleDegrees: ";
    cin >> singleAxis.PanelShadowStartAngleDegrees;

    cout << "Enter new SunShadowStartAngleDegrees: ";
    cin >> singleAxis.SunShadowStartAngleDegrees;

    cout << "Enter new SunShadowStartHeight: ";
    cin >> singleAxis.SunShadowStartHeight;

    cout << "Enter new Single_SoftLimit_Reverse: ";
    cin >> singleAxis.Single_SoftLimit_Reverse;

    cout << "Enter new Single_SoftLimit_Forward: ";
    cin >> singleAxis.Single_SoftLimit_Forward;

    cout << "Enter new Single_start_date: ";
    cin >> singleAxis.Single_start_date;

    cout << "Enter new Single_stop_days: ";
    cin >> singleAxis.Single_stop_days;
}

// Function to display modified values for each structure


void displayValues(const UnitLocation& location, const Azimuth& azimuth, const Elevation& elevation, const SingleAxis& singleAxis) {
    cout << "\nModified Unit Location:" << endl
         << "Latitude: " << location.latitude << "\n Longitude: " << location.longitude << "\n Altitude: " << location.altitude << endl
         << "Timezone: " << location.timezone << "\n Refraction: " << location.refraction << "\n Tracking Mode: " << location.tracking_mode << endl;

    cout << "\nModified Azimuth:" << endl
         << "AZ_Offset: " << azimuth.AZ_Offset << "\n AZ_SoftLimit_Reverse: " << azimuth.AZ_SoftLimit_Reverse << endl
         << "AZ_SoftLimit_Forward: " << azimuth.AZ_SoftLimit_Forward << "\n AZ_DeadBand: " << azimuth.AZ_DeadBand << endl
         << "AZ_NightStowThreshold: " << azimuth.AZ_NightStowThreshold << "\n AZ_NightStowPosition: " << azimuth.AZ_NightStowPosition << endl
         << "AZ_WindStowPosition: " << azimuth.AZ_WindStowPosition << endl;

    cout << "\nModified Elevation:" << endl
         << "EL_Offset: " << elevation.EL_Offset << "\n EL_SoftLimit_Reverse: " << elevation.EL_SoftLimit_Reverse << endl
         << "EL_SoftLimit_Forward: " << elevation.EL_SoftLimit_Forward << "\n EL_DeadBand: " << elevation.EL_DeadBand << endl
         << "EL_NightStowThreshold: " << elevation.EL_NightStowThreshold << "\n EL_NightStowPosition: " << elevation.EL_NightStowPosition << endl
         << "EL_WindStowPosition: " << elevation.EL_WindStowPosition << endl;

    cout << "\nModified SingleAxis:" << endl
         << "BacktrackingEnabled: " << singleAxis.BacktrackingEnabled << "\n PanelShadowStartAngleDegrees: " << singleAxis.PanelShadowStartAngleDegrees << endl
         << "SunShadowStartAngleDegrees: " << singleAxis.SunShadowStartAngleDegrees << "\n SunShadowStartHeight: " << singleAxis.SunShadowStartHeight << endl
         << "Single_SoftLimit_Reverse: " << singleAxis.Single_SoftLimit_Reverse << "\n Single_SoftLimit_Forward: " << singleAxis.Single_SoftLimit_Forward << endl
         << "Single_start_date: " << singleAxis.Single_start_date << "\n Single_stop_days: " << singleAxis.Single_stop_days << endl;
}



int main() {
    // Create instances of the structures and initialize with default values
    UnitLocation unitLocation;
    Azimuth azimuth;
    Elevation elevation;
    SingleAxis singleAxis;

    initializeDefaultValues(unitLocation, azimuth, elevation, singleAxis);

    // Display default values for each structure
    displayDefaultValues(unitLocation, azimuth, elevation, singleAxis);

    // Ask the user which structure to modify
    int choice;
    cout << "\nEnter the number of the structure to modify (1-4):\n";
    cout << "1. Unit Location\n2. Azimuth\n3. Elevation\n4. SingleAxis\n";
    cin >> choice;

    // Modify values based on user input
    switch (choice) {
        case 1:
            modifyUnitLocation(unitLocation);
            break;
        case 2:
            modifyAzimuth(azimuth);
            break;
        case 3:
            modifyElevation(elevation);
            break;
        case 4:
            modifySingleAxis(singleAxis);
            break;
        default:
            cout << "Invalid choice. No structure modified.\n";
            return 1;
    }

    // Output modified values for the chosen structure
    displayValues(unitLocation, azimuth, elevation, singleAxis);

    return 0;
}
