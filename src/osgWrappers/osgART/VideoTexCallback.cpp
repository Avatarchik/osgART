// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgART/VideoTexCallback>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgART::VideoTexCallback)
	I_Constructor5(IN, int, video, IN, int, vw, IN, int, vh, IN, int, tw, IN, int, th);
	I_Method1(void, setAlphaBias, IN, float, alphabias);
	I_Method0(float, getAlphaBias);
	I_Method2(void, load, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Method2(void, subload, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Constructor5(IN, int, video, IN, int, vw, IN, int, vh, IN, int, tw, IN, int, th);
	I_Method1(void, setAlphaBias, IN, float, alphabias);
	I_Method0(float, getAlphaBias);
	I_Method2(void, load, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Method2(void, subload, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Property(float, AlphaBias);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgART::VideoTexCallback)
	I_Constructor5(IN, int, video, IN, int, vw, IN, int, vh, IN, int, tw, IN, int, th);
	I_Method1(void, setAlphaBias, IN, float, alphabias);
	I_Method0(float, getAlphaBias);
	I_Method2(void, load, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Method2(void, subload, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Constructor5(IN, int, video, IN, int, vw, IN, int, vh, IN, int, tw, IN, int, th);
	I_Method1(void, setAlphaBias, IN, float, alphabias);
	I_Method0(float, getAlphaBias);
	I_Method2(void, load, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Method2(void, subload, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	I_Property(float, AlphaBias);
END_REFLECTOR
