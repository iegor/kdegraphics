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

#include "SVGFEDiffuseLightingElement.h"
#include "SVGFEDiffuseLightingElementImpl.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedNumber.h"

using namespace KSVG;

SVGFEDiffuseLightingElement::SVGFEDiffuseLightingElement() : SVGElement(), SVGFilterPrimitiveStandardAttributes()
{
	impl = 0;
}

SVGFEDiffuseLightingElement::SVGFEDiffuseLightingElement(const SVGFEDiffuseLightingElement &other) : SVGElement(other), SVGFilterPrimitiveStandardAttributes(other), impl(0)
{
	(*this) = other;
}

SVGFEDiffuseLightingElement &SVGFEDiffuseLightingElement::operator =(const SVGFEDiffuseLightingElement &other)
{
	SVGElement::operator=(other);
	SVGFilterPrimitiveStandardAttributes::operator=(other);

	if(impl == other.impl)
		return *this;

	if(impl)
		impl->deref();

	impl = other.impl;

	if(impl)
		impl->ref();

	return *this;
}

SVGFEDiffuseLightingElement::SVGFEDiffuseLightingElement(SVGFEDiffuseLightingElementImpl *other) : SVGElement(other), SVGFilterPrimitiveStandardAttributes(other)
{
	impl = other;
	if(impl)
		impl->ref();
}

SVGFEDiffuseLightingElement::~SVGFEDiffuseLightingElement()
{
	if(impl)
		impl->deref();
}

SVGAnimatedString SVGFEDiffuseLightingElement::in1() const
{
	if(!impl) return SVGAnimatedString(0);
	return SVGAnimatedString(impl->in1());
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::surfaceScale() const
{
	if(!impl) return SVGAnimatedNumber(0);
	return SVGAnimatedNumber(impl->surfaceScale());
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::diffuseConstant() const
{
	if(!impl) return SVGAnimatedNumber();
	return SVGAnimatedNumber(impl->diffuseConstant());
}

// vim:ts=4:noet
