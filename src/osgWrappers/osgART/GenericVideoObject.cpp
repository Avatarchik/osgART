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

#include <osgART/GenericVideo>
#include <osgART/GenericVideoObject>
#include <osgART/GenericVideoShader>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgART::GenericVideoObject::TextureMode)
	I_EnumLabel(osgART::GenericVideoObject::USE_TEXTURE_DEFAULT);
	I_EnumLabel(osgART::GenericVideoObject::USE_TEXTURE_2D);
	I_EnumLabel(osgART::GenericVideoObject::USE_TEXTURE_RECTANGLE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgART::GenericVideoObject::DistortionCorrectionMode)
	I_EnumLabel(osgART::GenericVideoObject::NO_CORRECTION);
	I_EnumLabel(osgART::GenericVideoObject::CAMERA_PARAM_CORRECTION);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgART::GenericVideoObject)
	I_Constructor1(IN, osgART::GenericVideo *, video);
	I_Method0(void, init);
	//I_Method1(void, setShader, IN, osgART::GenericVideoShader *, vs);
	//I_Method0(osg::ref_ptr< osgART::GenericVideoShader >, getShader);
	I_Method1(void, setTextureMode, IN, osgART::GenericVideoObject::TextureMode, tm);
	I_Method0(osgART::GenericVideoObject::TextureMode, getTextureMode);
	I_Method1(void, setDistortionCorrectionMode, IN, osgART::GenericVideoObject::DistortionCorrectionMode, dcm);
	I_Method0(osgART::GenericVideoObject::DistortionCorrectionMode, getDistorsionCorrectionMode);
	I_StaticMethod1(unsigned int, mathNextPowerOf2, IN, unsigned int, x);
	I_ReadOnlyProperty(osgART::GenericVideoObject::DistortionCorrectionMode, DistorsionCorrectionMode);
	I_WriteOnlyProperty(osgART::GenericVideoObject::DistortionCorrectionMode, DistortionCorrectionMode);
	I_ReadOnlyProperty(osg::ref_ptr< osgART::GenericVideoShader >, Shader);
	//I_WriteOnlyProperty(osg::Texture *, Texture);
	I_Property(osgART::GenericVideoObject::TextureMode, TextureMode);
END_REFLECTOR

