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

#ifndef SVGFESpecularLightingElementImpl_H
#define SVGFESpecularLightingElementImpl_H

#include "SVGElementImpl.h"
#include "SVGFilterPrimitiveStandardAttributesImpl.h"

#include "ksvg_lookup.h"

namespace KSVG
{

class SVGAnimatedStringImpl;
class SVGAnimatedNumberImpl;
class SVGFESpecularLightingElementImpl : public SVGElementImpl,
										 public SVGFilterPrimitiveStandardAttributesImpl
{
public:
	SVGFESpecularLightingElementImpl(DOM::ElementImpl *);
	virtual ~SVGFESpecularLightingElementImpl();

	SVGAnimatedStringImpl *in1() const;
	SVGAnimatedNumberImpl *surfaceScale() const;
	SVGAnimatedNumberImpl *specularConstant() const;
	SVGAnimatedNumberImpl *specularExponent() const;

private:
	SVGAnimatedStringImpl *m_in1;
	SVGAnimatedNumberImpl *m_surfaceScale;
	SVGAnimatedNumberImpl *m_specularConstant;
	SVGAnimatedNumberImpl *m_specularExponent;

public:
	KSVG_FORWARDGET
	KSVG_FORWARDPUT
};

}

#endif

// vim:ts=4:noet
