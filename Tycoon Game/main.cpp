#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>

using namespace std;

void inventory(double sand, int emptyVials, int bloodVials, int bloodStones, bool bKnife, bool sKnife, bool iSpear, bool sSpear, bool mSpear, bool basicPermit, bool standardPermit, bool hunterPermit, bool rangerPermit, bool adventurerPermit, bool starterCore, bool averageCore, bool goodCore, bool betterCore, bool superbCore, bool exquisiteCore, bool masterCore, bool cooler, bool cryoVault, bool adRegular, bool adLoyal, bool adPremium, bool adNoble, bool adRoyal, bool adEmperial, int cryoCap, int necklace, int silverIngot)
{
    cout << "INVENTORY" << endl;
        cout << "***********************************" << endl;
        if (sand < 1000)
            cout << "Sand\t\t" << sand << "g"<< endl;
        else
            cout << "Sand\t\t" << sand/1000.0 << "kg" << endl;
        if (necklace > 0)
            cout << "Necklaces:\t" << necklace << endl;
        cout << "Silver Ingots:\t" << silverIngot << endl;
        cout << "Empty vials\t" << emptyVials << endl;
        cout << "Blood Vials\t" << bloodVials << endl;
        cout << "Blood Stones\t" << bloodStones << " bls" << endl << endl;
        cout << "***********************************" << endl;
        cout << "EQUIPPED ITEMS" << endl;
        cout << "***********************************" << endl;
        if (mSpear == true)
            cout << "Weapon:\t\t Mythril spear" << endl;
        else if (sSpear == true)
            cout << "Weapon:\t\t Steel spear" << endl;
        else if (iSpear == true)
            cout << "Weapon:\t\t Iron spear" << endl;
        else if (sKnife == true)
            cout << "Weapon:\t\t Sharp knife" << endl;
        else if (bKnife == true)
            cout << "Weapon:\t\t Basic knife" << endl;
        if (adventurerPermit == true)
            cout << "Permit:\t\t Adventurer's Permit" << endl;
        else if (rangerPermit == true)
            cout << "Permit:\t\t Ranger's Permit" << endl;
        else if (hunterPermit == true)
            cout << "Permit:\t\t Hunter's Permit" << endl;
        else if (standardPermit == true)
            cout << "Permit:\t\t Standard Permit" << endl;
        else if (basicPermit == true)
            cout << "Permit:\t\t Basic Permit" << endl;
        if (masterCore == true)
            cout << "Workshop core:\t Master-Craft core" << endl;
        else if (exquisiteCore == true)
            cout << "Workshop core:\t Exquisite core" << endl;
        else if (superbCore == true)
            cout << "Workshop core:\t Suberb core" << endl;
        else if (betterCore == true)
            cout << "Workshop core:\t Better core" << endl;
        else if (goodCore == true)
            cout << "Workshop core:\t Good core" << endl;
        else if (averageCore == true)
            cout << "Workshop core:\t Average core" << endl;
        else if (starterCore == true)
            cout << "Workshop core:\t Starter core" << endl;
        if (cryoVault == true)
            cout << "Cryogenic Vault  (" << cryoCap << "/40)" << endl;
        if (cooler == true)
            cout << "Cooler" << endl;
        if (adEmperial == true)
            cout << "Emperial plan (120 customers/day)" << endl;
        else if (adRoyal == true)
            cout << "Royalty plan (85 customers/day)" << endl;
        else if (adNoble == true)
            cout << "Nobleman's plan (60 customers/day)" << endl;
        else if (adPremium == true)
            cout << "Premium plan (40 customers/day)" << endl;
        else if (adLoyal == true)
            cout << "Loyalty plan (25 customers/day)" << endl;
        else if (adRegular == true)
            cout << "Regular's plan (15 customers/day)" << endl;

}

int main()
{
    int openGame = 5, gameChoice = 5, storeChoice, emptyVials = 5, bloodVials = 0, bloodStones = 20, huntChoice, starterCoreCap = 10, averageCoreCap = 15, garlicChance, percentGarChance = 5, daysCursed = 0, caravan = 99;
    double sand = 10;
    int goodCoreCap = 25, betterCoreCap = 40, superbCoreCap = 60, exquisiteCoreCap = 75, masterCoreCap = 95, cryoCap = 0, day = 1, sandVial = 5, vampLord, garlicUses = 0, necklace = 1, selling, silverIngot = 0;
    const int ADREGPRICE = 10, ADLOYPRICE = 15, ADPREMPRICE = 25, ADNOBLEPRICE = 40, ADROYALPRICE = 60, ADEMPPRICE = 85, GARLICPRICE = 35, NECKMOLDPRICE = 75;
    const int SANDTENPRICE = 5, SANDXXVPRICE = 15, SANDFIFTYPRICE = 30, SANDHUNDREDPRICE = 55, SANDDPRICE = 225, SANDTHOUSANDPRICE = 400, BLOODPRICE = 5, SKNIFEPRICE = 100;
    const int ISPEARPRICE = 200, SSPEARPRICE = 450, MSPEARPRICE = 750, COOLERPRICE = 150, CRYOPRICE = 700, ACOREPRICE = 65, GCOREPRICE = 100, NECKLACEPRICE = 75;
    const int BCOREPRICE = 155, SCOREPRICE = 200, ECOREPRICE = 240, MCOREPRICE = 300, SPERMITPRICE = 30, HPERMITPRICE = 40, RPERMITPRICE = 50, APERMITPRICE = 60;
    srand(time(0));
    bool basicPermit = true, standardPermit = false, hunterPermit = false, rangerPermit = false, adventurerPermit = false, starterCore = true;
    bool averageCore = false, goodCore = false, betterCore = false, superbCore = false, exquisiteCore = false, masterCore = false;
    bool cooler = false, cryoVault = false, bKnife = true, sKnife = false, iSpear = false, sSpear = false, mSpear = false, adRegular = false;
    bool adLoyal = false, adPremium = false, adNoble = false, adRoyal = false, adEmperial = false, vampBite = false, neckmold = false, silverNecklace = false;
    cout << endl << endl << endl << endl;

        do
        {
            cout << "                                    Welcome to the Vampire Tycoon game!" << endl;
            cout << "You are a human blood vendor in a vampire city. They should simply drain you of your blood but you managed to negotiate" << endl;
            cout << "for your life and now you provide the vampire populace with fresh blood every day.Your goal however is to gain enough" << endl;
            cout << "money in order to buy yourself a ticket home to the human city. A caravan will be passing every hundreth day you are" << endl;
            cout << "in the city and they charge 3500 bls to join them. A word of caution, beware the Vampire Lord. If you become a vampire" << endl;
            cout << "                             you may no longer go home and will lose the game." << endl << endl;
            cout << "                                       Start playing :\t 1" << endl;
            cout << "                                       Exit game :\t 0" << endl;

            if ( cin.good() == false )
            {
                cin.clear();
                string garbage;
                cin >> garbage;
            }

            cin >> openGame;
            cout << endl;
        }while ( openGame > 1 || openGame < 0 || !cin.good() );

    while (openGame != 0 && gameChoice != 0)
    {
        do // open start playing and Inventory
        {
            system ("cls");

            if (daysCursed == 8)
                gameChoice = 0;

            int min = 1, max = 400;
            int miracle = rand() % (max-min+1) + min;

            cout << "Day: " << day << endl << endl;

            cout << "Days remaining until Caravan arrives: " << caravan << endl << endl;

            if (miracle == 53)
            {
                cout << "What's that shinny thing? Vials? Empty vials on the ground? Quickly, pick them up before someone comes!" << endl;
                cout << "You have found 5 empty vials." << endl;
                emptyVials += 5;
            }
            else if (miracle == 113)
            {
                cout << "Hey look! Someone forgot a bag of sand on your stand. I guess it's yours now." << endl;
                cout << "You have found 25g of sand." << endl;
                sand += 25;
            }
            else if (miracle == 399)
            {
                cout << "Hey it's raining! Ouch! What in the world! Hey wait the rain is red and hard. No way! It's totally raining bloodstones!" << endl;
                cout << "You have found 35 bls." << endl;
                bloodStones += 35;
            }
            else if (miracle == 244)
            {
                cout << "To keep or not to keep. This is kinda disgusting to be honest. Oh well might as well keep them. I hope they" << endl;
                cout << "aren't expired or something." << endl;
                cout << "You have found 3 blood Vials." << endl;
                bloodVials += 3;
            }

            if (vampBite == true)
                cout << "Status : Cursed" << endl << endl;

            inventory(sand,emptyVials,bloodVials,bloodStones, bKnife, sKnife, iSpear, sSpear, mSpear, basicPermit, standardPermit, hunterPermit, rangerPermit, adventurerPermit, starterCore, averageCore, goodCore, betterCore, superbCore, exquisiteCore, masterCore, cooler, cryoVault, adRegular, adLoyal, adPremium, adNoble, adRoyal, adEmperial, cryoCap, necklace, silverIngot);

            cout << endl << "What do you want to do?" << endl;
            cout << "1. Start the day" << endl;
            cout << "2. General Store" << endl;
            cout << "3. Hunting Areas" << endl;
            cout << "4. Workshop" << endl;
            cout << "5. Advertisement and permits agency" << endl;
            cout << "6. Caravan" << endl;
            cout << "0. Exit Game" << endl;

            if (daysCursed != 8)
            {
                do
                {
                    if ( cin.good() == false )
                    {
                        cin.clear();
                        string garbage;
                        cin >> garbage;
                    }

                    cin >> gameChoice;
                }while (gameChoice < 0 || gameChoice > 75 || !cin.good());
            }

            if (gameChoice == 65) // Cheat
               {
                   bloodVials = 10;
                   bloodStones = 100;
                   sand = 1500;
                   emptyVials = 25;
               }


            if (gameChoice == 1) // Open Start the day
            {
                int customers;
                system ("cls");

                if (adEmperial == true)
                {
                    int min = 0, max = 120;
                    customers = rand() % (max-min +1) + min;
                }
                else if (adRoyal == true)
                {
                    int min = 0, max = 85;
                    customers = rand() % (max-min +1) + min;
                }
                else if (adNoble == true)
                {
                    int min = 0, max = 60;
                    customers = rand() % (max-min +1) + min;
                }
                else if (adPremium == true)
                {
                    int min = 0, max = 40;
                    customers = rand() % (max-min +1) + min;
                }
                else if (adLoyal == true)
                {
                    int min = 0, max = 25;
                    customers = rand() % (max-min +1) + min;
                }
                else if (adRegular == true)
                {
                    int min = 0, max = 15;
                    customers = rand() % (max-min +1) + min;
                }
                else
                {
                    int min = 0, max = 10;
                    customers = rand() % (max-min +1) + min;
                }
                if (vampBite == true)
                    customers = 0.9*customers;

                int customersServed = 0;

                while (customers > 0 && bloodVials > 0)
                {
                    bloodVials--;
                    customersServed++;
                    customers--;
                }
                if (silverNecklace == false && vampBite == false)
                {
                    int min = 1, max = 250;
                    vampLord = rand() % (max-min + 1) + min;

                    if (vampLord == 237)
                        vampBite = true;
                }

                cout << "You received " << customers + customersServed << " customers today." << endl;
                cout << "You served " << customersServed << " of them." << endl;
                cout << "You made " << BLOODPRICE*customersServed << " bloodstones." << endl;
                if (vampBite == true && daysCursed == 0)
                {
                    cout << endl << "You have been bitten by the Vampire Lord. You are now cursed. You have one week to consume" << endl;
                    cout << "a Garlic Tonic or craft a Silver Necklace before you become a vampire and lose the game. Please note" << endl;
                    cout << "that every time you use a Garlic Tonic, there is an additional 5% chance that it will fail. Every day" << endl;
                    cout << "that you delay you will lose 10% of your customers starting today." << endl;
                }

                bloodStones += BLOODPRICE*customersServed;

                starterCoreCap = 10;
                averageCoreCap = 15;
                goodCoreCap = 25;
                betterCoreCap = 35;
                superbCoreCap = 45;
                exquisiteCoreCap = 60;
                masterCoreCap = 85;

                if (cooler == false)
                    bloodVials = 0;
                day++;
                caravan--;
                if (day % 100 == 1)
                    caravan = 99;
                if (vampBite == true)
                    daysCursed++;
                if (day % 5 == 1)
                {
                    if (adEmperial == true && bloodStones >= ADEMPPRICE)
                        bloodStones -= ADEMPPRICE;
                    else if (adEmperial == true && bloodStones < ADEMPPRICE)
                        adEmperial = false;
                    else if (adRoyal == true && bloodStones >= ADROYALPRICE)
                        bloodStones -= ADROYALPRICE;
                    else if (adRoyal == true && bloodStones < ADROYALPRICE)
                        adRoyal = false;
                    else if (adNoble == true && bloodStones >= ADNOBLEPRICE)
                        bloodStones -= ADNOBLEPRICE;
                    else if (adNoble == true && bloodStones < ADNOBLEPRICE)
                        adNoble = false;
                    else if (adPremium == true && bloodStones >= ADPREMPRICE)
                        bloodStones -= ADPREMPRICE;
                    else if (adPremium == true && bloodStones < ADPREMPRICE)
                        adPremium = false;
                    else if (adLoyal == true && bloodStones >= ADLOYPRICE)
                        bloodStones -= ADLOYPRICE;
                    else if (adLoyal == true && bloodStones < ADLOYPRICE)
                        adLoyal = false;
                    else if (adRegular == true && bloodStones >= ADREGPRICE)
                        bloodStones -= ADREGPRICE;
                    else if (adRegular == true && bloodStones < ADREGPRICE)
                        adRegular = false;
                }
                system ("pause");
            }// Close Start the day

            else if (gameChoice == 2) // open general store
            {
                do
                {
                    system ("cls");

                    ///Make Inventory

                    cout << endl << "Welcome to the General Store! What would you like to buy today?" << endl;
                    cout << "*************************************************************************" << endl;
                    cout << "* UPGRADES" << endl;
                    cout << "*************************************************************************" << endl;
                    cout << "* 1. Cooler (Allows storage of blood vials beyond 1 day) - 150 bls" << endl;
                    cout << "* 2. Cryogenic vault (Allows storage of animal blood without empty vials) - 700 bls" << endl;
                    cout << "* 3. Average workshop core (15 vials/day) - 65 bls " << endl;
                    cout << "* 4. Good workshop core (25 vials/day) - 100 bls" << endl;
                    cout << "* 5. Better workshop core (40 vials/day) - 155 bls" << endl;
                    cout << "* 6. Superb workshop core (60 vials/day) - 200 bls" << endl;
                    cout << "* 7. Exquisite workshop core (75 vials/day) - 240 bls" << endl;
                    cout << "* 8. Master craft workshop core (95 vials/day) - 300 bls" << endl;
                    cout << "*************************************************************************" << endl;
                    cout << "* SAND               *  WEAPONS    " << endl;
                    cout << "*************************************************************************" << endl;
                    cout << "*  9. 10g -  5 bls   * 15. Sharp knife (Lvl 2)  -  100 bls" << endl;
                    cout << "* 10. 25g -  15 bls  * 16. Iron spear (Lvl 3)   -  200 bls" << endl;
                    cout << "* 11. 50g -  30 bls  * 17. Steel spear (Lvl 4)  -  450 bls" << endl;
                    cout << "* 12. 100g - 55 bls  * 18. Mythril spear (Lvl 5) - 750 bls" << endl;
                    cout << "* 13. 500g - 225 bls * OTHER " << endl;
                    cout << "* 14. 1kg -  400 bls * 19. Garlic Tonic " << garlicUses << "/20 uses - 35 bls" << endl;
                    cout << "*                    * 20. Necklace Mold - 75 bls" << endl;
                    cout << "************************************************************************" << endl;

                    cout << endl << "21. Access Inventory" << endl; ///To do
                    cout << "22. Sell" << endl;
                    cout << " 0. Exit Store" << endl;

                    do
                    {
                        if ( cin.good() == false )
                        {
                            cin.clear();
                            string garbage;
                            cin >> garbage;
                        }

                        cin >> storeChoice;
                    }while (storeChoice < 0 || storeChoice > 22 || !cin.good());

                    if (storeChoice == 1 && bloodStones >= COOLERPRICE && cooler == false)
                    {
                        bloodStones -= COOLERPRICE;
                        cooler = true;
                        cout << "You have purchased a Cooler." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 1 && bloodStones >= COOLERPRICE && cooler == true)
                    {
                        cout << "You already own a Cooler." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 2 && bloodStones >= CRYOPRICE && cryoVault == false)
                    {
                        bloodStones -= CRYOPRICE;
                        cryoVault = true;
                        cout << "You have purchased a Cryogenic vault." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 2 && bloodStones >= CRYOPRICE && cryoVault == true)
                    {
                        cout << "You already own a Cryogenic vault." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 3 && bloodStones >= ACOREPRICE && averageCore == false)
                    {
                        bloodStones -= ACOREPRICE;
                        averageCore = true;
                        cout << "You have purchased an Average Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 3 && bloodStones >= ACOREPRICE && averageCore == true)
                    {
                        cout << "You already own an Average Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 4 && bloodStones >= GCOREPRICE && goodCore == false)
                    {
                        bloodStones -= GCOREPRICE;
                        goodCore = true;
                        cout << "You have purchased a Good Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 4 && bloodStones >= GCOREPRICE && goodCore == true)
                    {
                        cout << "You already own a Good Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 5 && bloodStones >= BCOREPRICE && betterCore == false)
                    {
                        bloodStones -= BCOREPRICE;
                        betterCore = true;
                        cout << "You have purchased a Better Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 5 && bloodStones >= BCOREPRICE && betterCore == true)
                    {
                        cout << "You already own a Better Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 6 && bloodStones >= SCOREPRICE && superbCore == false)
                    {
                        bloodStones -= SCOREPRICE;
                        superbCore = true;
                        cout << "You have purchased an Superb Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 6 && bloodStones >= SCOREPRICE && superbCore == true)
                    {
                        cout << "You already own a Superb Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 7 && bloodStones >= ECOREPRICE && exquisiteCore == false)
                    {
                        bloodStones -= ECOREPRICE;
                        exquisiteCore = true;
                        cout << "You have purchased an Exquisite Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 7 && bloodStones >= ECOREPRICE && exquisiteCore == true)
                    {
                        cout << "You already own an Exquisite Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 8 && bloodStones >= MCOREPRICE && masterCore == false)
                    {
                        bloodStones -= MCOREPRICE;
                        masterCore = true;
                        cout << "You have purchased an Master Craft Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 8 && bloodStones >= MCOREPRICE && masterCore == true)
                    {
                        cout << "You already own a Master Craft Workshop core." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 9 && bloodStones >= SANDTENPRICE)
                    {
                        bloodStones -= SANDTENPRICE;
                        sand += 10;
                        cout << "You have purchased 10g of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 10 && bloodStones >= SANDXXVPRICE)
                    {
                        bloodStones -= SANDXXVPRICE;
                        sand += 25;
                        cout << "You have purchased 25g of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 11 && bloodStones >= SANDFIFTYPRICE)
                    {
                        bloodStones -= SANDFIFTYPRICE;
                        sand += 50;
                        cout << "You have purchased 50g of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 12 && bloodStones >= SANDHUNDREDPRICE)
                    {
                        bloodStones -= SANDHUNDREDPRICE;
                        sand += 100;
                        cout << "You have purchased 100g of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 13 && bloodStones >= SANDDPRICE)
                    {
                        bloodStones -= SANDDPRICE;
                        sand += 500;
                        cout << "You have purchased 500g of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 14 && bloodStones >= SANDTHOUSANDPRICE)
                    {
                        bloodStones -= SANDTHOUSANDPRICE;
                        sand += 1000;
                        cout << "You have purchased 1kg of sand." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 15 && bloodStones >= SKNIFEPRICE && sKnife == false)
                    {
                        bloodStones -= SKNIFEPRICE;
                        sKnife = true;
                        cout << "You have purchased a Sharp knife." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 15 && bloodStones >= SKNIFEPRICE && sKnife == true)
                    {
                        cout << "You already own a Sharp knife." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 16 && bloodStones >= ISPEARPRICE && iSpear == false)
                    {
                        bloodStones -= ISPEARPRICE;
                        iSpear = true;
                        cout << "You have purchased an Iron spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 16 && bloodStones >= ISPEARPRICE && iSpear == true)
                    {
                        cout << "You already own an Iron spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 17 && bloodStones >= SSPEARPRICE && sSpear == false)
                    {
                        bloodStones -= SSPEARPRICE;
                        sSpear = true;
                        cout << "You have purchased a Steel spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 17 && bloodStones >= SSPEARPRICE && sSpear == true)
                    {
                        cout << "You already own a Steel spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 18 && bloodStones >= MSPEARPRICE && mSpear == false)
                    {
                        bloodStones -= MSPEARPRICE;
                        mSpear = true;
                        cout << "You have purchased an Iron spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 18 && bloodStones >= MSPEARPRICE && mSpear == true)
                    {
                        cout << "You already own an Iron spear." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 19 && bloodStones >= GARLICPRICE && garlicUses < 20)
                    {
                        bloodStones -= GARLICPRICE;
                        int min = 1, max = 100;
                        garlicChance = rand() % (max-min + 1) + min;

                        if (garlicUses == 0)
                            vampBite = false;
                        if (garlicUses == 1)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                                cout << "The Tonic has failed to cure your curse." << endl;
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 2)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                                cout << "The Tonic has failed to cure your curse." << endl;
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 3)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                                cout << "The Tonic has failed to cure your curse." << endl;
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 4)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                                cout << "The Tonic has failed to cure your curse." << endl;
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 5)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 6)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 7)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 8)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 9)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 10)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 11)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 12)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 13)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 14)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 15)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 16)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 17)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 18)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse." << endl;
                                system("pause");
                            }
                            else
                                vampBite = false;
                        }
                        else if (garlicUses == 19)
                        {
                            if (garlicChance <= garlicUses*percentGarChance && garlicChance >= 1)
                            {
                                cout << "The Tonic has failed to cure your curse. You may no longer use it as a remedy." << endl;
                                cout << "Please acquire a Silver Necklace in order to prevent any more vampire bites." << endl;
                                system("pause");
                            }
                            else
                            {
                                vampBite = false;
                                cout << "The Tonic was successful in curing your curse. However, you may no longer use it as a remedy." << endl;
                                cout << "Please acquire a Silver Necklace in order to prevent any more vampire bites." << endl;
                            }

                        }
                        garlicUses++;
                    }
                    else if (storeChoice == 19 && garlicUses >= 20)
                    {
                        cout << "You may no longer use this item. Please acquire a Silver Necklace." << endl;
                        system("pause");
                    }
                    else if (storeChoice == 20 && bloodStones >= NECKMOLDPRICE && neckmold == false)
                    {
                        bloodStones -= NECKMOLDPRICE;
                        neckmold = true;
                    }
                    else if (storeChoice == 21)
                    {
                        system("cls");
                        inventory(sand,emptyVials,bloodVials,bloodStones, bKnife, sKnife, iSpear, sSpear, mSpear, basicPermit, standardPermit, hunterPermit, rangerPermit, adventurerPermit, starterCore, averageCore, goodCore, betterCore, superbCore, exquisiteCore, masterCore, cooler, cryoVault, adRegular, adLoyal, adPremium, adNoble, adRoyal, adEmperial, cryoCap, necklace,silverIngot);
                        system("pause");
                    }
                    else if (storeChoice == 22 && necklace > 0)
                    {
                        do
                        {
                            system("cls");
                            cout << "Welcome to the Pawn Shop!" << endl;
                            cout << "Here you may sell each necklace for 75 bls" << endl;
                            cout << "You have " << necklace << " necklaces available." << endl;
                            cout << "How many would you like to sell?" << endl;

                            int sellNecklace;
                            do
                            {
                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> sellNecklace;
                            }while (sellNecklace < 0 || !cin.good());

                            if (sellNecklace > necklace)
                                cout << "You don't have that many necklaces. Please choose again." << endl;
                            else
                            {
                                necklace -= sellNecklace;
                                bloodStones += sellNecklace*NECKLACEPRICE;
                                cout << "You have sold " << sellNecklace << " necklaces for " << sellNecklace*NECKLACEPRICE << "bls" << endl;
                                selling = 0;
                            }
                        }while (selling != 0);

                    }
                    else if (storeChoice == 22 && necklace == 0)
                    {
                        cout << "You don't have anything to sell" << endl;
                        system("pause");
                    }
                    else
                    {
                        cout << "You don't have enough bloodstones to purchase this item." << endl;
                        system("pause");
                    }


                } while (storeChoice != 0);

            }

            else if (gameChoice == 3) // hunting
            {//open IF hunting
                do
                {
                    system ("cls");
                    do
                    {
                        cout << "Welcome to the Hunting areas! Please choose the area you would like to hunt in." << endl;
                        cout << "*******************************************************************************" << endl;
                        cout << "Empty Vials: " << emptyVials << endl;
                        cout << "*******************************************************************************" << endl;
                        cout << "1. Area 1" << endl;
                        cout << "2. Area 2" << endl;
                        cout << "3. Area 3" << endl;
                        cout << "4. Area 4" << endl;
                        cout << "5. Area 5" << endl;
                        cout << "6. Cryogenic vault" << endl;
                        cout << "0. Exit Hunting Area" << endl << endl;


                        if ( cin.good() == false )
                        {
                            cin.clear();
                            string garbage;
                            cin >> garbage;
                        }

                        cin >> huntChoice;

                    }while ( huntChoice > 6 || huntChoice < 0 || !cin.good());

                    if (huntChoice == 1 && basicPermit == true && bKnife == true)
                    {
                        int min= 1, max = 4;
                        int animalOne = rand() % (max-min+1) + min;

                        if (emptyVials >= 2 || (cryoVault == true && cryoCap <= 38))
                        {
                            if (animalOne == 1)
                            cout << "You have killed a squirrel (Level 1)." << endl;
                            else if (animalOne == 2)
                            cout << "You have killed a rabbit (Level 1)." << endl;
                            else if (animalOne == 3)
                            cout << "You have killed a weasel (Level 1)." << endl;
                            else
                            cout << "You have killed a mouse (Level 1)." << endl;

                            bloodVials += 2;
                            if (emptyVials >= 2)
                            {
                                emptyVials -= 2;
                                cout << "You have collected 2 blood vials." << endl;
                                cout << "You now have " << bloodVials << " bloodVials and " << emptyVials << " emptyVials." << endl;
                            }
                            else
                            {
                                cryoCap += 2;
                                cout << "Your cryogenic vault now has a capacity of " << cryoCap << "/40." << endl;
                            }

                        }
                        else
                        {
                            if (cryoVault == true)
                            {
                                cout << "You don't have enough empty vials to hunt in this area or your cryogenic vault" << endl;
                                cout << "doesn't have enough room for this animal. Remember you cannot store part of an" << endl;
                                cout << "                    animal in your vault." << endl;
                            }

                            else
                                cout << "You don't have enough empty vials to hunt in this area." << endl;
                        }

                        do
                        {
                            cout << endl << "Would you like to hunt again (Yes = 1 / No = 0)." << endl;

                            if ( cin.good() == false )
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }

                            cin >> huntChoice;

                        }while ( huntChoice > 1 || huntChoice < 0 || !cin.good() );

                    }

                    else if (huntChoice == 2 && standardPermit == true && sKnife == true)
                    {
                        int min = 1, max = 6;
                        int animalTwo = rand () % (max-min+1) + min;

                        if (emptyVials >= 4 || (cryoVault == true && cryoCap <= 36))
                        {
                            if (animalTwo == 1)
                                cout << "You have killed a fox (Level 2)." << endl;
                            else if (animalTwo == 2)
                                cout << "You have killed a wolf (Level 2)." << endl;
                            else if (animalTwo == 3)
                                cout << "You have killed a coyote (Level 2)." << endl;
                            else if (animalTwo == 4)
                                cout << "You have killed a beaver (Level 2)." << endl;
                            else if (animalTwo == 5)
                                cout << "You have killed a badger (Level 2)." << endl;
                            else
                                cout << "You have killed a hedgehog (Level 2)." << endl;

                            if (emptyVials >= 4)
                            {
                                emptyVials -= 4;
                                cout << "You have collected 4 blood vials." << endl;
                                cout << "You now have " << bloodVials << " bloodVials and " << emptyVials << " emptyVials." << endl;
                            }
                            else
                            {
                                cryoCap += 4;
                                cout << "Your cryogenic vault now has a capacity of " << cryoCap << "/40." << endl;
                            }
                        }
                        else
                        {
                            if (cryoVault == true)
                            {
                                cout << "You don't have enough empty vials to hunt in this area or your cryogenic vault" << endl;
                                cout << "doesn't have enough room for this animal. Remember you cannot store part of an" << endl;
                                cout << "                    animal in your vault." << endl;
                            }

                            else
                                cout << "You don't have enough empty vials to hunt in this area." << endl;
                        }
                        do
                        {
                            cout << endl << "Would you like to hunt again (Yes = 1 / No = 0)." << endl;

                            if ( cin.good() == false )
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }

                            cin >> huntChoice;

                        }while ( huntChoice > 1 || huntChoice < 0 || !cin.good() );

                    }

                    else if (huntChoice == 3 && hunterPermit == true && iSpear == true)
                    {
                        int min = 1, max = 4;
                        int animalThree = rand() % (max-min+1) + min;

                        if (emptyVials >= 6 || (cryoVault == true && cryoCap <= 34))
                        {
                            if (animalThree == 1)
                            {
                                cout << "You have killed a deer (Level 3)." << endl;

                                int min = 1, max = 200;
                                int silverDrop = rand() % (max-min+1) + min;

                                if (silverDrop == 103)
                                {
                                    cout << "You lucky bastard. A deer, carrying silver! Impossible. It isn't natural I tell you. Where did it find it hein? The grass?" << endl;
                                    cout << "Whatever just keep it and go away already." << endl;
                                    silverIngot++;
                                }
                            }
                            else if (animalThree == 2)
                                cout << "You have killed a elk (Level 3)." << endl;
                            else if (animalThree == 3)
                                cout << "You have killed a caribou (Level 3)." << endl;
                            else
                                cout << "You have killed a aligator (Level 3)." << endl;

                            if (emptyVials >= 6)
                            {
                                emptyVials -= 6;
                                cout << "You have collected 6 blood vials." << endl;
                                cout << "You now have " << bloodVials << " bloodVials and " << emptyVials << " emptyVials." << endl;
                            }
                            else
                            {
                                cryoCap += 6;
                                cout << "Your cryogenic vault now has a capacity of " << cryoCap << "/40." << endl;
                            }
                        }
                        else
                        {
                            if (cryoVault == true)
                            {
                                cout << "You don't have enough empty vials to hunt in this area or your cryogenic vault" << endl;
                                cout << "doesn't have enough room for this animal. Remember you cannot store part of an" << endl;
                                cout << "                    animal in your vault." << endl;
                            }

                            else
                            {
                                cout << "You don't have enough empty vials to hunt in this area." << endl;
                            }

                        }

                        do
                        {
                            cout << endl << "Would you like to hunt again (Yes = 1 / No = 0)." << endl;

                            if ( cin.good() == false )
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }

                            cin >> huntChoice;

                        }while ( huntChoice > 1 || huntChoice < 0 || !cin.good() );

                    }

                    else if (huntChoice == 4 && rangerPermit == true && sSpear == true)
                    {
                        int min = 1, max = 4;
                        int animalFour = rand() % (max-min+1) + min;

                        if (emptyVials >= 8 || (cryoVault == true && cryoCap <= 32))
                        {
                            if (animalFour == 1)
                            {
                                cout << "You have killed a Bear (Level 5)." << endl;

                                int min = 1, max = 101;
                                int silverDrop = rand() % (max-min+1) + min;

                                if (silverDrop == 77)
                                {
                                    cout << "The gods smile on you. Somehow you came across a bear with a piece of silver in its stomac." << endl;
                                    cout << "And yes, you totally get to keep it." << endl;
                                    silverIngot++;
                                }
                            }
                            else if (animalFour == 2)
                                cout << "You have killed a Boar (Level 5)." << endl;
                            else if (animalFour == 3)
                                cout << "You have killed a Lynx (Level 5)." << endl;
                            else
                                cout << "You have killed a Bobcat (Level 4)." << endl;

                            if (emptyVials >= 8)
                            {
                                bloodVials += 8;
                                emptyVials -= 8;
                                cout << "You have collected 8 blood vials." << endl;
                                cout << "You now have " << bloodVials << " bloodVials and " << emptyVials << " emptyVials." << endl;
                            }
                            else
                            {
                                cryoCap += 8;
                                cout << "Cryogenic vault capacity: " << cryoCap << "/40" << endl;
                            }

                        }
                        else
                        {
                            if (cryoVault == true)
                            {
                                cout << "You don't have enough empty vials to hunt in this area or your cryogenic vault" << endl;
                                cout << "doesn't have enough room for this animal. Remember you cannot store part of an" << endl;
                                cout << "                    animal in your vault." << endl;
                            }

                            else
                            {
                                cout << "You don't have enough empty vials to hunt in this area." << endl;
                            }

                        }

                        do
                        {
                            cout << endl << "Would you like to hunt again (Yes = 1 / No = 0)." << endl;

                            if ( cin.good() == false )
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }

                            cin >> huntChoice;

                        }while ( huntChoice > 1 || huntChoice < 0 || !cin.good() );

                    }

                    else if (huntChoice == 5 && adventurerPermit == true && mSpear == true)
                    {
                        int min = 1, max = 3;
                        int animalFive = rand() % (max-min+1) + min;

                        if (emptyVials >= 10 || (cryoVault == true && cryoCap <= 30))
                        {
                            if (animalFive == 1)
                                cout << "You have killed a Manticore (Level 5)." << endl;
                            else if (animalFive == 2)
                            {
                                cout << "You have killed a Silver Veined Golem (Level 5)." << endl;
                                int min = 1, max = 50;
                                int silverDrop = rand() % (max-min+1) + min;

                                if (silverDrop == 3)
                                {
                                    cout << "Congratulations! You have found a Silver Ingot." << endl;
                                    silverIngot++;
                                }
                            }
                            else
                                cout << "You have killed a Drake (Level 5)." << endl;

                            if (emptyVials >= 10)
                            {
                                bloodVials += 10;
                                emptyVials -= 10;
                                cout << "You have collected 10 blood vials." << endl;
                                cout << "You now have " << bloodVials << " bloodVials and " << emptyVials << " emptyVials." << endl;
                            }
                            else
                            {
                                cryoCap += 10;
                                cout << "Cryogenic vault capacity: " << cryoCap << "/40" << endl;
                            }

                        }
                        else
                        {
                            if (cryoVault == true)
                            {
                                cout << "You don't have enough empty vials to hunt in this area or your cryogenic vault" << endl;
                                cout << "doesn't have enough room for this animal. Remember you cannot store part of an" << endl;
                                cout << "                    animal in your vault." << endl;
                            }

                            else
                            {
                                cout << "You don't have enough empty vials to hunt in this area." << endl;
                            }

                        }

                        do
                        {
                            cout << endl << "Would you like to hunt again (Yes = 1 / No = 0)." << endl;

                            if ( cin.good() == false )
                            {
                                cin.clear();
                                string garbage;
                                cin >> garbage;
                            }

                            cin >> huntChoice;

                        }while ( huntChoice > 1 || huntChoice < 0 || !cin.good() );

                    }
                    else if (huntChoice == 6)
                    {
                        if (cryoVault == true)
                        {
                            int cryoChoice;
                            do
                            {
                                cout << "Welcome to your cryogenic vault." << endl;
                                cout << "********************************************************" << endl;
                                cout << "     Empty Vials: " << emptyVials << "       Vault capacity: " << cryoCap << endl;
                                cout << "*********************************************************" << endl;
                                cout << "Would you like to fill up some vials? (Yes = 1 / No = 0)" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> cryoChoice;

                            }while ( cryoChoice > 1 || cryoChoice < 0 || !cin.good() );

                            if (cryoChoice == 1)
                            {
                                int cryoNumber;
                                do
                                {
                                    cout << "How many would you like to fill up?" << endl;

                                    if ( cin.good() == false )
                                    {
                                        cin.clear();
                                        string garbage;
                                        cin >> garbage;
                                    }

                                    cin >> cryoNumber;
                                }while (cryoNumber < 0 || !cin.good());

                                if (cryoNumber > emptyVials || cryoNumber > cryoCap)
                                {
                                    cout << "You either don't have enough empty Vials or not enough blood in your vault." << endl;
                                    cout << "Please change your choice." << endl;
                                }
                                else
                                {
                                    bloodVials += cryoNumber;
                                    emptyVials -= cryoNumber;
                                    cryoCap -= cryoNumber;
                                    cout << "You have successfully filled " << cryoNumber << " vials." << endl;
                                    system("pause");
                                }

                            }

                        }
                        else
                        {
                            cout << "You do not own this upgrade." << endl;
                            system("pause");
                        }
                    }
                    else if (huntChoice != 0)
                    {
                        cout << "You are missing either the proper permit or weapon to access this area." << endl;
                        system("pause");
                    }

                }while (huntChoice != 0);
            }

            else if (gameChoice == 4) // Workshop
            {

                int create;
                do
                {
                    system("cls");
                    cout << "Welcome to your Workshop!" << endl;
                    cout << "This is where you can create vials for when you go hunting. Empty ones of course." << endl;
                    cout << "*********************************************************************************" << endl;
                    cout << "Sand: " << sand << "     Silver Ingot: " << silverIngot << "      Necklace Mold : " << neckmold << endl;
                    cout << "*********************************************************************************" << endl;

                    do
                    {
                        cout << "What would you like to make?" << endl;
                        cout << "1. Vials" << endl;
                        cout << "2. Silver Necklace" << endl;
                        cout << "0. Back to main menu" << endl;

                        if ( cin.good() == false )
                        {
                            cin.clear();
                            string garbage;
                            cin >> garbage;
                        }

                        cin >> create;
                    }while (create > 2 || create < 0 || !cin.good());

                    if (create == 1 && sand >= 5)
                    {
                        if (masterCore == true && masterCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > masterCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                masterCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << masterCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }
                        }
                        else if (masterCore == true && masterCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (exquisiteCore == true && exquisiteCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > exquisiteCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                exquisiteCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << exquisiteCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }
                        }
                        else if (exquisiteCore == true && exquisiteCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (superbCore == true && superbCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > superbCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                superbCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << superbCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }
                        }
                        else if (superbCore == true && superbCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (betterCore == true && betterCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > betterCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                betterCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << betterCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }
                        }
                        else if (betterCore == true && betterCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (goodCore == true && goodCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > goodCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                goodCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << goodCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }
                        }
                        else if (goodCore == true && goodCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (averageCore == true && averageCoreCap > 0)
                        {
                            int vialNumber;

                                do
                                {
                                    cout << "How many would you like to make?" << endl;

                                    if ( cin.good() == false )
                                    {
                                        cin.clear();
                                        string garbage;
                                        cin >> garbage;
                                    }

                                    cin >> vialNumber;
                                }while (vialNumber < 0 || !cin.good());

                                if (sand < vialNumber*sandVial)
                                {
                                    cout << "You either don't have enough sand to make this amount of vials." << endl;
                                    cout << "Please change your choice." << endl;
                                    system("pause");
                                }
                                else if (vialNumber > averageCoreCap)
                                {
                                    cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                    cout << "Please change your choice." << endl;
                                    system("pause");
                                }

                                else
                                {
                                    emptyVials += vialNumber;
                                    sand -= vialNumber*sandVial;
                                    averageCoreCap -= vialNumber;
                                    cout << "You have made " << vialNumber << " empty vials!" << endl;
                                    cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                    cout << "Your workshop can still make " << averageCoreCap << " empty vials." << endl;
                                    create = 0;
                                    system("pause");
                                }
                        }
                        else if (averageCore == true && averageCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                        else if (starterCore == true && starterCoreCap > 0)
                        {
                            int vialNumber;

                            do
                            {
                                cout << "How many would you like to make?" << endl;

                                if ( cin.good() == false )
                                {
                                    cin.clear();
                                    string garbage;
                                    cin >> garbage;
                                }

                                cin >> vialNumber;
                            }while (vialNumber < 0 || !cin.good());

                            if (sand < vialNumber*sandVial)
                            {
                                cout << "You either don't have enough sand to make this amount of vials." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }
                            else if (vialNumber > starterCoreCap)
                            {
                                cout << "The amount of vials you wish to make exceed the your workshop's daily quota." << endl;
                                cout << "Please change your choice." << endl;
                                system("pause");
                            }

                            else
                            {
                                emptyVials += vialNumber;
                                sand -= vialNumber*sandVial;
                                starterCoreCap -= vialNumber;
                                cout << "You have made " << vialNumber << " empty vials!" << endl;
                                cout << "Now all you have to do is fill them up! Happy hunting!" << endl;
                                cout << "Your workshop can still make " << starterCoreCap << " empty vials." << endl;
                                create = 0;
                                system("pause");
                            }

                        }
                        else if (starterCore == true && starterCoreCap == 0)
                        {
                            cout << "Sorry to tell you this but your workshop needs a break for the day" << endl;
                            cout << "Go sell some blood for a change." << endl;
                            create = 0;
                            system("pause");
                        }
                    }
                    else if (sand < 5)
                    {
                        cout << "Sorry you do not have enough sand to make any vials." << endl;
                        system ("pause");
                        create = 0;
                    }
                    else if (create == 2)
                    {
                        if (silverIngot == 0 || neckmold == false)
                        {
                            cout << "Sorry. You can't create this item." << endl;
                            system("pause");
                        }

                        else
                        {
                            if (silverNecklace == false)
                            {
                                cout << "You have successfully created a Silver Necklace! You are now immune to the Vampire Lord!" << endl;
                                cout << "Also, if you ever come across more silver ingots, you can make more necklaces! And sell them! Pretty cool huh." << endl;
                                silverIngot--;
                                silverNecklace = true;
                                necklace--;
                            }
                            else
                            {
                                necklace++;
                                cout << "You have made a Silver Necklace. What are you waiting for? Go make some cash!" << endl;
                                silverIngot--;
                            }
                        }

                    }

                }while (create != 0);
            }
            else if (gameChoice == 5) // Agency
            {
                int agencyChoice;
                do
                {
                    system("cls");
                    cout << "Welcome to the advertisement and permits agency!" << endl;
                    cout << "What would you like to buy?" << endl;
                    cout << "*****************************************************" << endl;
                    cout << "* ADVERTISING PLANS*" << endl;
                    cout << "*****************************************************" << endl;
                    cout << "* 1. Regular's plan (15 clients/day) - 10 bls/5 days" << endl;
                    cout << "* 2. Loyalty plan (25 clients/day)  -  15 bls/5 days" << endl;
                    cout << "* 3. Premium plan (40 clients/day)  -  25 bls/5 days" << endl;
                    cout << "* 4. Nobleman's plan (60 clients/day - 40 bls/5 days" << endl;
                    cout << "* 5. Royal plan (85 clients/day    -   60 bls/5 days" << endl;
                    cout << "* 6. Emperial plan (120 clients/day  - 85 bls/5 days" << endl;
                    cout << "*****************************************************" << endl;
                    cout << "* PERMITS**" << endl;
                    cout << "*****************************************************" << endl;
                    cout << "*  7. Standard permit (Area 2)   -   30 bls" << endl;
                    cout << "*  8. Hunter's permit (Area 3)   -   40 bls" << endl;
                    cout << "*  9. Ranger's permit (Area 4)   -   50 bls" << endl;
                    cout << "* 10. Adventurer's permit (Area 5) - 60 bls" << endl;
                    cout << "*****************************************************" << endl << endl;

                    cout << "11. Access Inventory" << endl; ///To do
                    cout << " 0. Exit Agency" << endl << endl;

                    cout << "*The number of clients stated promises a MAX of stated clients. Less is possible. Also if you fail" << endl;
                    cout << "to pay the fee due to a shortage of bloodStones, your plan will be cancelled immediatly and will revert" << endl;
                    cout << "back to the lowest plan you have previously purchased and can afford. The billing cycle" << endl;
                    cout << "is on every day that is a multiple of 5." << endl;
                    cout << "**Permits allow access to lower level areas including its own." << endl;

                    do
                    {
                        if ( cin.good() == false )
                        {
                            cin.clear();
                            string garbage;
                            cin >> garbage;
                        }

                        cin >> agencyChoice;
                    }while (agencyChoice < 0 || agencyChoice > 11 || !cin.good());

                    if (agencyChoice == 1 && bloodStones >= ADREGPRICE && adRegular == false)
                    {
                        bloodStones -= ADREGPRICE;
                        adRegular = true;
                        cout << "You have purchased the Regular's advertising plan." << endl;
                        system("pause");
                    }
                    if (agencyChoice == 1 && bloodStones >= ADREGPRICE && adRegular == true)
                    {
                        cout << "You already own the Regular's advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 2 && bloodStones >= ADLOYPRICE && adLoyal == false)
                    {
                        bloodStones -= ADLOYPRICE;
                        adLoyal = true;
                        cout << "You have purchased the Loyalty advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 2 && bloodStones >= ADLOYPRICE && adLoyal == true)
                    {
                        cout << "You already own the Loyalty advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 3 && bloodStones >= ADPREMPRICE && adPremium == false)
                    {
                        bloodStones -= ADPREMPRICE;
                        adPremium = true;
                        cout << "You have purchased the Premium advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 3 && bloodStones >= ADPREMPRICE && adPremium == true)
                    {
                        cout << "You already own the Premium advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 4 && bloodStones >= ADNOBLEPRICE && adNoble == false)
                    {
                        bloodStones -= ADNOBLEPRICE;
                        adNoble = true;
                        cout << "You have purchased the Nobleman's advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 4 && bloodStones >= ADNOBLEPRICE && adNoble == true)
                    {
                        cout << "You already own the Nobleman's advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 5 && bloodStones >= ADROYALPRICE && adRoyal == false)
                    {
                        bloodStones -= ADROYALPRICE;
                        adRoyal = true;
                        cout << "You have purchased the Royal's advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 5 && bloodStones >= ADROYALPRICE && adRoyal == true)
                    {
                        cout << "You already own the Royal's advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 6 && bloodStones >= ADEMPPRICE && adEmperial == false)
                    {
                        bloodStones -= ADEMPPRICE;
                        adEmperial = true;
                        cout << "You have purchased the Emperial advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 6 && bloodStones >= ADEMPPRICE && adEmperial == true)
                    {
                        cout << "You already own the Emperial advertising plan." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 7 && bloodStones >= SPERMITPRICE && standardPermit == false)
                    {
                        bloodStones -= SPERMITPRICE;
                        standardPermit = true;
                        cout << "You have purchased a Standard Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 7 && bloodStones >= SPERMITPRICE && standardPermit == true)
                    {
                        cout << "You already own a Standard Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 8 && bloodStones >= HPERMITPRICE && hunterPermit == false)
                    {
                        bloodStones -= HPERMITPRICE;
                        hunterPermit == true;
                        cout << "You have purchased a Hunter's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 8 && bloodStones >= HPERMITPRICE && hunterPermit == true)
                    {
                        cout << "You already own a Hunter's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 9 && bloodStones >= RPERMITPRICE && rangerPermit == false)
                    {
                        bloodStones -= RPERMITPRICE;
                        rangerPermit = true;
                        cout << "You have purchased a Ranger's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 9 && bloodStones >= RPERMITPRICE && rangerPermit == true)
                    {
                        cout << "You already own a Ranger's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 10 && bloodStones >= APERMITPRICE && adventurerPermit == false)
                    {
                        bloodStones -= APERMITPRICE;
                        adventurerPermit = true;
                        cout << "You have purchased an Adventurer's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 10 && bloodStones >= APERMITPRICE && adventurerPermit == true)
                    {
                        cout << "You already own an Adventurer's Hunting Permit." << endl;
                        system("pause");
                    }
                    else if (agencyChoice == 11)
                    {
                        system("pause");
                        inventory(sand, emptyVials, bloodVials, bloodStones, bKnife, sKnife, iSpear, sSpear, mSpear, basicPermit, standardPermit, hunterPermit, rangerPermit, adventurerPermit, starterCore, averageCore, goodCore, betterCore, superbCore, exquisiteCore, masterCore, cooler, cryoVault, adRegular, adLoyal, adPremium, adNoble, adRoyal, adEmperial, cryoCap, necklace, silverIngot);
                        system("pause");
                    }
                    else
                    {
                        cout << "You do not have enough bloodstones to purchase this item." << endl;
                        system("pause");
                    }

                }while (agencyChoice != 0);

            }
            else if (gameChoice == 6 && day % 100 == 0 && bloodStones >= 3500 && vampBite == false)
            {
                system("cls");
                bloodStones -= 3500;
                cout << endl << endl << endl << endl << endl << endl << endl;
                cout << "                               Welcome to Mario's Caravan! Destination : Human city. Please enjoy your ride." << endl;
                cout << "                               Congratulations! You have successfully joined the caravan and are bound for the" << endl;
                cout << "                                                            human city." << endl;
                cout << endl << "                               You have successfully completed the game!" << endl;
                system("pause");
                gameChoice = 0;
                openGame = 0;
            }
            else if (gameChoice == 6)
            {
                system("cls");
                if (vampBite == true)
                {
                    cout << "You may not join the caravan while cursed." << endl;
                }
                if (bloodStones < 3500)
                {
                    cout << "You do not have enough bloodstones to join the caravan." << endl;
                }
                if (day % 100 != 0)
                {
                    cout << "The caravan isn't even here. What are you doing?" << endl;
                }
                system("pause");
            }





        }while (gameChoice != 0);//Close start playing
    }


    system ("cls");

    if (daysCursed == 8)
    {
        cout << endl << endl << endl << endl << endl << "                              GAME OVER" << endl;
        cout << "You did not succeed in finding the cure to your curse in the time alloted." << endl;
    }
    else
        cout << endl << endl << endl << endl << endl << "\t\t\t\t\t\t\tBye!" << endl;
    return 0;
}
