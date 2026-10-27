/*
 * Name:         Mwaura Job Gathoga
 * Reg No:       BCS-03-0134/2026
 * Description:  Week 6 Activity: Arrays - Hotel Management System.
 *               Uses a 1D array for weekly revenue, a 2D array for room
 *               occupancy on one branch, and a 3D array for all branches.
 * Date:         27 October 2026
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define DAYS 7
#define FLOORS 5
#define ROOMS 10
#define BRANCHES 3
 
int main(void)
{
    srand((unsigned int)time(NULL));
 
    /* ---------- 1D Array: Weekly Revenue Tracker ---------- */
    double revenue[DAYS];
    double total = 0.0, average;
    int i, j, k;
 
    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < DAYS; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }
    average = total / DAYS;
 
    printf("\nTotal weekly revenue:  %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);
 
    /* ---------- 2D Array: Room Occupancy (One Branch) ---------- */
    int occupancy[FLOORS][ROOMS];
 
    /* Simulate input: 1 = occupied, 0 = vacant */
    for (i = 0; i < FLOORS; i++)
        for (j = 0; j < ROOMS; j++)
            occupancy[i][j] = rand() % 2;
 
    printf("\n=== Room Occupancy (One Branch) ===\n");
    for (i = 0; i < FLOORS; i++) {
        int occupied = 0, vacant = 0;
        for (j = 0; j < ROOMS; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }
 
    /* ---------- 3D Array: Multiple Branches ---------- */
    int chain[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;
 
    for (i = 0; i < BRANCHES; i++)
        for (j = 0; j < FLOORS; j++)
            for (k = 0; k < ROOMS; k++) {
                chain[i][j][k] = rand() % 2;
                totalOccupied += chain[i][j][k];
            }
 
    printf("\n=== Hotel Chain (3 Branches) ===\n");
    printf("Total occupied rooms across all branches: %d out of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);
 
    return 0;
}