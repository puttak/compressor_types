/*
 * AnnulusPoint.h
 *
 *  Created on: Aug 27, 2012
 *      Author: bachm03j
 */

#ifndef ANNULUSPOINT_H_
#define ANNULUSPOINT_H_

#include "CartesianPoint.h"
#include <string>

class AnnulusPoint: public CartesianPoint {
public:
	AnnulusPoint();
	AnnulusPoint(std::string labelIn, double Xin, double RadiusIn);
	AnnulusPoint(AnnulusPoint *pntToCopy);
	virtual ~AnnulusPoint();

	//accessors (properties)
	double getX() const;
	double getRadius() const;
	std::string getLabel() const;
	void setLabel(std::string newLabel);

	double axialAreaTo(AnnulusPoint *otherPoint);
	double frustumAreaTo(AnnulusPoint *otherPoint);
	double angleBetween(AnnulusPoint *otherPoint);


private:
	std::string _label;

};

#endif /* ANNULUSPOINT_H_ */

