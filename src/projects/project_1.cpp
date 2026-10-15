#include <iostream>
#include <cmath>

int main() {
    double maxFinalMark{}, maxMidtermMark{}, finalMark{}, midtermMark{};
    double projectMark1{}, projectMark2{}, projectMark3{}, projectMark4{}, projectMark5{};
    double maxProjectMark1{}, maxProjectMark2{}, maxProjectMark3{}, maxProjectMark4{}, maxProjectMark5{};

    do {
        std::cout << "Enter the maximum grade on the final examination: ";
        std::cin >> maxFinalMark;
    } while (maxFinalMark <= 0 || maxFinalMark != std::round(maxFinalMark));
    do {
        std::cout << "Enter your grade on the final examination: ";
        std::cin >> finalMark;
    } while (finalMark < 0 || finalMark > maxFinalMark);
    
    do {
        std::cout << "Enter the maximum grade on the mid-term examination: ";
        std::cin >> maxMidtermMark;
    } while (maxMidtermMark <= 0 || maxMidtermMark != std::round(maxMidtermMark));
    do {
        std::cout << "Enter your grade on the mid-term examination: ";
        std::cin >> midtermMark;
    } while (midtermMark < 0 || midtermMark > maxMidtermMark);

    do {
        std::cout << "Enter the maximum grade on project 1: ";
        std::cin >> maxProjectMark1;
    } while (maxProjectMark1 <= 0 || maxProjectMark1 != std::round(maxProjectMark1));
    do {
        std::cout << "Enter your grade on the project 1: ";
        std::cin >> projectMark1;
    } while (projectMark1 < 0 || projectMark1 > maxProjectMark1);

    do {
        std::cout << "Enter the maximum grade on project 2: ";
        std::cin >> maxProjectMark2;
    } while (maxProjectMark2 <= 0 || maxProjectMark2 != std::round(maxProjectMark2));
    do {
        std::cout << "Enter your grade on the project 2: ";
        std::cin >> projectMark2;
    } while (projectMark2 < 0 || projectMark2 > maxProjectMark2);

    do {
        std::cout << "Enter the maximum grade on project 3: ";
        std::cin >> maxProjectMark3;
    } while (maxProjectMark3 <= 0 || maxProjectMark3 != std::round(maxProjectMark3));
    do {
        std::cout << "Enter your grade on the project 3: ";
        std::cin >> projectMark3;
    } while (projectMark3 < 0 || projectMark3 > maxProjectMark3);

    do {
        std::cout << "Enter the maximum grade on project 4: ";
        std::cin >> maxProjectMark4;
    } while (maxProjectMark4 <= 0 || maxProjectMark4 != std::round(maxProjectMark4));
    do {
        std::cout << "Enter your grade on the project 4: ";
        std::cin >> projectMark4;
    } while (projectMark4 < 0 || projectMark4 > maxProjectMark4);

    do {
        std::cout << "Enter the maximum grade on project 5: ";
        std::cin >> maxProjectMark5;
    } while (maxProjectMark5 <= 0 || maxProjectMark5 != std::round(maxProjectMark5));
    do {
        std::cout << "Enter your grade on the project 5: ";
        std::cin >> projectMark5;
    } while (projectMark5 < 0 || projectMark5 > maxProjectMark5);

    double F100 = finalMark / maxFinalMark * 100;
    double M100 = midtermMark / maxMidtermMark * 100;
    double P1_100 = (projectMark1 / maxProjectMark1) * 100.0;
    double P2_100 = (projectMark2 / maxProjectMark2) * 100.0;
    double P3_100 = (projectMark3 / maxProjectMark3) * 100.0;
    double P4_100 = (projectMark4 / maxProjectMark4) * 100.0;
    double P5_100 = (projectMark5 / maxProjectMark5) * 100.0;

    if (M100 < F100) M100 = F100;
    if (P1_100 < F100) P1_100 = F100;
    if (P2_100 < F100) P2_100 = F100;
    if (P3_100 < F100) P3_100 = F100;
    if (P4_100 < F100) P4_100 = F100;
    if (P5_100 < F100) P5_100 = F100;

    double E100 = 0.75 * F100 + 0.25 * M100;
    double P100 = 0.2 * (P1_100 + P2_100 + P3_100 + P4_100 + P5_100);

    double finalAverage{}; 
    if (E100 <= 40.0) {
        finalAverage = E100;
    } else if (E100 >= 60.0) {
        finalAverage = (2.0 / 3.0 * E100) + (1.0 / 3.0 * P100);
    } else {
        double w = (E100 - 40.0) / 20.0;
        finalAverage = P100 * ((1.0 / 3.0) * w) + E100 * (1.0 - (1.0 / 3.0) * w);
    }

    std::cout << "Final grade: " << static_cast<int>(std::round(finalAverage + 1e-12)) << std::endl;
    return 0;
}
