/*
    Copyright (C) 2001-2003 KSVG Team
    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef SVGPathSegArcImpl_H
#define SVGPathSegArcImpl_H

#include "ksvg_lookup.h"

#include "SVGPathSegImpl.h"

namespace KSVG
{

class SVGPathSegArcAbsImpl : public SVGPathSegImpl
{
public:
	SVGPathSegArcAbsImpl();
	virtual ~SVGPathSegArcAbsImpl();

	virtual unsigned short pathSegType() const { return PATHSEG_ARC_ABS; }
	virtual DOM::DOMString pathSegTypeAsLetter() const { return "A"; }
	virtual QString toString() const { return QString("A %1 %2 %3 %4 %5 %6 %7").arg(m_r1).arg(m_r2).arg(m_angle).arg(m_largeArcFlag).arg(m_sweepFlag).arg(m_x).arg(m_y); }

	void setX(double x);
	double x() const;

	void setY(double y);
	double y() const;

	void setR1(double r1);
	double r1() const;

	void setR2(double r2);
	double r2() const;

	void setAngle(double angle);
	double angle() const;

	void setLargeArcFlag(bool largeArcFlag);
	bool largeArcFlag() const;

	void setSweepFlag(bool sweepFlag);
	bool sweepFlag() const;

	virtual void getDeltasAndSlopes(double curx, double cury, double *dx, double *dy, double *startSlope, double *endSlope) const;

private:
	double m_x;
	double m_y;
	double m_r1;
	double m_r2;
	double m_angle;

	bool m_largeArcFlag	: 1;
	bool m_sweepFlag : 1;

public:
	KSVG_GET
	KSVG_PUT

	enum
	{
		// Properties
		X, Y, R1, R2, Angle, LargeArcFlag, SweepFlag
	};

	KJS::Value getValueProperty(KJS::ExecState *exec, int token) const;
	void putValueProperty(KJS::ExecState *exec, int token, const KJS::Value &value, int attr);
};


class SVGPathSegArcRelImpl : public SVGPathSegImpl
{
public:
	SVGPathSegArcRelImpl();
	virtual ~SVGPathSegArcRelImpl();

	virtual unsigned short pathSegType() const { return PATHSEG_ARC_REL; }
	virtual DOM::DOMString pathSegTypeAsLetter() const { return "a"; }
	virtual QString toString() const { return QString("a %1 %2 %3 %4 %5 %6 %7").arg(m_r1).arg(m_r2).arg(m_angle).arg(m_largeArcFlag).arg(m_sweepFlag).arg(m_x).arg(m_y); }

	void setX(double x);
	double x() const;

	void setY(double y);
	double y() const;

	void setR1(double r1);
	double r1() const;

	void setR2(double r2);
	double r2() const;

	void setAngle(double angle);
	double angle() const;

	void setLargeArcFlag(bool largeArcFlag);
	bool largeArcFlag() const;

	void setSweepFlag(bool sweepFlag);
	bool sweepFlag() const;

	virtual void getDeltasAndSlopes(double curx, double cury, double *dx, double *dy, double *startSlope, double *endSlope) const;

private:
	double m_x;
	double m_y;
	double m_r1;
	double m_r2;
	double m_angle;

	bool m_largeArcFlag : 1;
	bool m_sweepFlag : 1;

public:
	KSVG_GET
	KSVG_PUT

	enum
	{
		// Properties
		X, Y, R1, R2, Angle, LargeArcFlag, SweepFlag
	};

	KJS::Value getValueProperty(KJS::ExecState *exec, int token) const;
	void putValueProperty(KJS::ExecState *exec, int token, const KJS::Value &value, int attr);
};

}

#endif

// vim:ts=4:noet
