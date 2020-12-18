
/*********************************************************************************************

    This is public domain software that was developed by or for the U.S. Naval Oceanographic
    Office and/or the U.S. Army Corps of Engineers.

    This is a work of the U.S. Government. In accordance with 17 USC 105, copyright protection
    is not available for any work of the U.S. Government.

    Neither the United States Government, nor any employees of the United States Government,
    nor the author, makes any warranty, express or implied, without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, or assumes any liability or
    responsibility for the accuracy, completeness, or usefulness of any information,
    apparatus, product, or process disclosed, or represents that its use would not infringe
    privately-owned rights. Reference herein to any specific commercial products, process,
    or service by trade name, trademark, manufacturer, or otherwise, does not necessarily
    constitute or imply its endorsement, recommendation, or favoring by the United States
    Government. The views and opinions of authors expressed herein do not necessarily state
    or reflect those of the United States Government, and shall not be used for advertising
    or product endorsement purposes.
*********************************************************************************************/


/****************************************  IMPORTANT NOTE  **********************************

    Comments in this file that start with / * ! are being used by Doxygen to document the
    software.  Dashes in these comment blocks are used to create bullet lists.  The lack of
    blank lines after a block of dash preceeded comments means that the next block of dash
    preceeded comments is a new, indented bullet list.  I've tried to keep the Doxygen
    formatting to a minimum but there are some other items (like <br> and <pre>) that need
    to be left alone.  If you see a comment that starts with / * ! and there is something
    that looks a bit weird it is probably due to some arcane Doxygen syntax.  Be very
    careful modifying blocks of Doxygen comments.

*****************************************  IMPORTANT NOTE  **********************************/



#ifndef CHRTR2_VERSION

#define     CHRTR2_VERSION "PFM Software - CHRTR2 library V3.10 - 06/23/17"

#endif

/*!< <pre>

    Version 1.00
    04/12/10
    Jan C. Depner

    First version.


    Version 1.01
    04/29/10
    Jan C. Depner

    Microsoft, in their infinite wisdom, doesn't support %hhd in scanf statements (like the rest of
    the world does) so I had to use %hd, slap it into a short int and then copy the value to an
    unsigned char.  What's really weird is that %hhd works fine for printf.  DOH!


    Version 1.02
    Jan C. Depner
    04/30/10

    Now use "const NV_CHAR *" arguments instead of "NV_CHAR *" arguments where applicable (gcc 4.4 doesn't like 
    you calling functions with constant strings [i.e. "fred"] if the argument in the function isn't declared const).


    Version 1.03
    Jan C. Depner
    08/17/10

    Added total uncertainty and number of points to chrtr2_record.


    Version 1.04
    Jan C. Depner
    10/26/10

    Fix screwup when reading version string.


    Version 1.05
    Jan C. Depner
    01/24/11

    Changed CHRTR2_USER_05 to CHRTR2_LAND_MASK.  That's all we ever used it for anyway.  It makes more sense
    as a fixed field since we use it quite a bit.


    Version 2.00
    Jan C. Depner
    03/31/11

    Added ellipsoid_separation and z00_value optional fields to the record.  This is a major format change.


    Version 2.01
    Jan C. Depner
    01/30/12

    Added CHRTR2_FATHOMS_AT_4800 as a unit designator.  This is used for nominal depth measured using a 
    set sound velocity of 4800 feet per second.  The normal CHRTR2_FATHOMS unit designator assumes either
    true depth or nominal depth using a set sound velocity of 1500 meters per second.


    Version 2.02
    06/26/12
    Jan C. Depner

    Replaced #define's with typedef's for type definitions in the _nvtypes.h file.


    Version 3.0
    Stacy Johnson
    06/14/2012

    Removed 1/2 node adjustments from chrtr2_get_lat_lon() to put in line with gridded registration


    Version 3.01
    Stacy Johnson
    08/24/2012

    Slight modification needed to how N and E are calculated in the header due to the orientation changes.


    Version 3.02
    Stacy Johnson
    05/17/2013

    Slight modification needed to deal with 32bit vs 64bit values for CHRTR2_NULL_Z_VALUE, simple reassign value if it is greater than assigned value


    Version 3.03
    Stacy Johnson
    05/20/2013

    Fixed rounding issue when converting from coordinates to lat/lon and back


    Version 3.04
    Stacy Johnson
    06/24/2013

    Extension of 3.02 change to acoomindate violating the lower range where the record has been nulled (i.e. all fields as st to zero) but the minimum bound is set to a higher value.


    Version 3.05
    Stacy Johnson
    01/17/2014

    Added various status check/set functions to simplify the process.


    Version 3.06
    05/07/14
    Jan C. Depner

    Fixed bug in binaryFeatureData_perror.


    Version 3.07
    07/20/14
    Jan C. Depner

    Replaced the binaryFeatureData_nvtypes.h file by using stdint.h and inttypes.h.  These are
    standards that run on Linux and MinGW.  I don't care about MSC :P


    Version 3.08
    Jan C. Depner (PFM Software)
    07/29/14

    - Fixed errors discovered by cppcheck.


    Version 3.09
    Jan C. Depner (PFM Software)
    12/26/14

    - Fixed header read of Z UNITS.


    Version 3.10
    06/18/17
    Brett Goldenbloome (Leidos), Jan Depner (PFM Software)

    - After using the bit_pack and bit_unpack functions for 18 years with no apparent problems, Brett Goldenbloome
      at Leidos, Newport RI discovered that, in extremely rare circumstances, the functions would access one byte
      past the end of the buffer.  I have added an "if" statement (shudder) to correct the problem.

</pre>*/
