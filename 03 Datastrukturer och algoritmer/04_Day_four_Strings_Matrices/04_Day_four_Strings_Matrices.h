//
//  04_Day_four_Strings_Matrices.h
//  04_Day_four_Strings_Matrices
//
//  Created by Daniel Eftodi on 2021-12-17.
//

#ifndef Day_three_Array_ADT_h
#define Day_three_Array_ADT_h

/* INCLUDES */

#include <stdio.h>
#include <iostream>         // include I/O
#include <iomanip>          // include manipulating the I/O
#include <string>           // include working with strings
#include <vector>           // include dynamic array functionalities
#include <unistd.h>         // system(clear);
#include <iomanip>          // include to manipulate std::cout outputs
#include <termios.h>        // include for c_getche()

/* DEFINITIONS */

// ENABLE-DISABLE debug logging
#define DEBUG_LOGGING false

/* DECLARATIONS */


// a common Debug logging function
void DBG_LOG(std::string sText,
             std::string sVarA,
             std::string sVarB = "",
             std::string sVarC = "",
             std::string sVarD = "",
             std::string sVarE = "",
             std::string sVarF = "",
             std::string sVarG = "",
             std::string sVarH = "",
             std::string sVarI = "",
             std::string sVarJ = "",
             std::string sVarK = "",
             std::string sVarL = "",
             std::string sVarM = ""
             );
    
/* From our common_lib - BEGIN */
void clearScreen(void)
    {
#ifdef __WIN32__
        system("cls");
#else
        system("clear");
#endif
    }
    
void delay(int iDelayTime)
    {
#ifdef __WIN32__
        Sleep(iDelayTime);
#else
        sleep(iDelayTime);
#endif
    }

/* Read 1 character without echo */
int c_getch(void);

/* Read 1 character with echo */
int c_getche(void);

/* From our common_lib - END */

/* FUNCTIONS */

int main(int argc, char ** argv);

#endif /* Day_three_Array_ADT_h */
