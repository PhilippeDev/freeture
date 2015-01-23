/*
								StackedFrames.cpp

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*
*	This file is part of:	freeture
*
*	Copyright:		(C) 2014-2015 Yoan Audureau -- FRIPON-GEOPS-UPSUD
*
*	License:		GNU General Public License
*
*	FreeTure is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*	FreeTure is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*	You should have received a copy of the GNU General Public License
*	along with FreeTure. If not, see <http://www.gnu.org/licenses/>.
*
*	Last modified:		20/10/2014
*
*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

/**
 * @file    StackedFrames.cpp
 * @author  Yoan Audureau
 * @version 1.0
 * @date    19/06/2014
 */

#include "StackedFrames.h"

StackedFrames::StackedFrames(string firstDate, string lastDate, int g, int e, Mat img, int nbImg){

    startDate   = firstDate;
    endDate     = lastDate;
    gain        = g;
    exp         = e;
    imgSum      = nbImg;
    img.copyTo(stackedImg);

}

StackedFrames::StackedFrames(){

}

StackedFrames::~StackedFrames(void){

}