// This file is a part of Hologine.
//
// Hologine is a straight-forward framework for interactive simulations,
// most notably video games.
//
// Copyright 2015 Aaron Bolyard.
//
// For licensing information, review the LICENSE file located at the root
// directory of the source package.
#ifndef HOLOGINE_CORE_IO_ENDIANNESS_HPP_
#define HOLOGINE_CORE_IO_ENDIANNESS_HPP_

namespace holo
{
	// Endianness modes.
	namespace endianness
	{
		enum
		{
			// Little-endian byte order (LSB first, MSB last).
			little,
			
			// Big-endian byte order (MSB first, LSB last).
			big,
		};
	}
}

#endif
