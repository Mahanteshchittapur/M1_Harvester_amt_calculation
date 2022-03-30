/** 
*@file Mainagri.h
*@author Mahantesh
*@brief this header file contains all the fuctions the are used in the main c file
* @version 0.1
* @date 2022-03-30
*
#ifndef __Mainagri_H__
#define __Mainagri_H__

/**
 * @brief function to get information
 * @param name,survey_no 
 * 
 */
void details();
/**
 * @brief function to calculate harvestor
 amount for red gram crop
  *@based on no of boxes
 * 
 */
void red_gram();
/**
 *@brief function to calculate harvestor
 amount for chik peas crop
  *@based on no of boxes
 *
 */
void chik_pea();
/**
 *@brief function to calculate harvestor
 amount for carom crop
 *@based on no of boxes
 */
void carom();
/**
 *@brief function to calculate harvestor
 amount for sorghum crop
 *@based on acres
 */
void sorghum();
/**
 * @brief structure for customer input
 * 
 */
struct agri
{

	char name[15];
       int surveynum;
      int no_of_boxes;
    float acres;
	int phonenumber[10];
};
struct agri B;
#endif




