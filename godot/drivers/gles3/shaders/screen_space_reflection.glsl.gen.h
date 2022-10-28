/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SCREEN_SPACE_REFLECTION_GLSL_GEN_HGLES3_120
#define SCREEN_SPACE_REFLECTION_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class ScreenSpaceReflectionShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "ScreenSpaceReflectionShaderGLES3"; }
public:

	enum Conditionals {
		USE_ORTHOGONAL_PROJECTION,
		REFLECT_ROUGHNESS,
	};

	enum Uniforms {
		CAMERA_Z_NEAR,
		CAMERA_Z_FAR,
		VIEWPORT_SIZE,
		PIXEL_SIZE,
		FILTER_MIPMAP_LEVELS,
		INVERSE_PROJECTION,
		PROJECTION,
		NUM_STEPS,
		DEPTH_TOLERANCE,
		DISTANCE_FADE,
		CURVE_FADE_IN,
		MARGIN,
	};

	_FORCE_INLINE_ int get_uniform(Uniforms p_uniform) const { return _get_uniform(p_uniform); }

	_FORCE_INLINE_ void set_conditional(Conditionals p_conditional,bool p_enable)  {  _set_conditional(p_conditional,p_enable); }

	#ifdef DEBUG_ENABLED
 	#define _FU if (get_uniform(p_uniform)<0) return; if (!is_version_valid()) return; ERR_FAIL_COND( get_active()!=this ); 

 	#else
 	#define _FU if (get_uniform(p_uniform)<0) return; 

 	#endif
	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, double p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Color& p_color) { _FU GLfloat col[4]={p_color.r,p_color.g,p_color.b,p_color.a}; glUniform4fv(get_uniform(p_uniform),1,col); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector2& p_vec2) { _FU GLfloat vec2[2]={p_vec2.x,p_vec2.y}; glUniform2fv(get_uniform(p_uniform),1,vec2); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Size2i& p_vec2) { _FU GLint vec2[2]={p_vec2.x,p_vec2.y}; glUniform2iv(get_uniform(p_uniform),1,vec2); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector3& p_vec3) { _FU GLfloat vec3[3]={p_vec3.x,p_vec3.y,p_vec3.z}; glUniform3fv(get_uniform(p_uniform),1,vec3); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b) { _FU glUniform2f(get_uniform(p_uniform),p_a,p_b); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c) { _FU glUniform3f(get_uniform(p_uniform),p_a,p_b,p_c); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c, float p_d) { _FU glUniform4f(get_uniform(p_uniform),p_a,p_b,p_c,p_d); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform& p_transform) {  _FU

		const Transform &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.basis.elements[0][0],
			tr.basis.elements[1][0],
			tr.basis.elements[2][0],
			0,
			tr.basis.elements[0][1],
			tr.basis.elements[1][1],
			tr.basis.elements[2][1],
			0,
			tr.basis.elements[0][2],
			tr.basis.elements[1][2],
			tr.basis.elements[2][2],
			0,
			tr.origin.x,
			tr.origin.y,
			tr.origin.z,
			1
		};


                glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform2D& p_transform) {  _FU

		const Transform2D &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.elements[0][0],
			tr.elements[0][1],
			0,
			0,
			tr.elements[1][0],
			tr.elements[1][1],
			0,
			0,
			0,
			0,
			1,
			0,
			tr.elements[2][0],
			tr.elements[2][1],
			0,
			1
		};


        glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const CameraMatrix& p_matrix) {  _FU

		GLfloat matrix[16];

		for (int i=0;i<4;i++) {
			for (int j=0;j<4;j++) {

				matrix[i*4+j]=p_matrix.matrix[i][j];
			}
		}

		glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);
}

#undef _FU


	virtual void init() {

		static const char* _conditional_strings[]={
			"#define USE_ORTHOGONAL_PROJECTION\n",
			"#define REFLECT_ROUGHNESS\n",
		};

		static const char* _uniform_strings[]={
			"camera_z_near",
			"camera_z_far",
			"viewport_size",
			"pixel_size",
			"filter_mipmap_levels",
			"inverse_projection",
			"projection",
			"num_steps",
			"depth_tolerance",
			"distance_fade",
			"curve_fade_in",
			"margin",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback* _feedbacks=NULL;
		static TexUnitPair _texunit_pairs[]={
			{"source_diffuse",0},
			{"source_normal_roughness",1},
			{"source_depth",2},
		};

		static int *_shadow_texunits=NULL;
		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,52,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,59,10,10,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,111,117,116,32,118,101,99,50,32,112,111,115,95,105,110,116,101,114,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,117,118,95,105,110,116,101,114,112,32,61,32,117,118,95,105,110,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,9,112,111,115,95,105,110,116,101,114,112,46,120,121,32,61,32,103,108,95,80,111,115,105,116,105,111,110,46,120,121,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,105,110,32,118,101,99,50,32,112,111,115,95,105,110,116,101,114,112,59,10,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,100,105,102,102,117,115,101,59,32,47,47,116,101,120,117,110,105,116,58,48,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,110,111,114,109,97,108,95,114,111,117,103,104,110,101,115,115,59,32,47,47,116,101,120,117,110,105,116,58,49,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,100,101,112,116,104,59,32,47,47,116,101,120,117,110,105,116,58,50,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,110,101,97,114,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,102,97,114,59,10,10,117,110,105,102,111,114,109,32,118,101,99,50,32,118,105,101,119,112,111,114,116,95,115,105,122,101,59,10,117,110,105,102,111,114,109,32,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,102,105,108,116,101,114,95,109,105,112,109,97,112,95,108,101,118,101,108,115,59,10,10,117,110,105,102,111,114,109,32,109,97,116,52,32,105,110,118,101,114,115,101,95,112,114,111,106,101,99,116,105,111,110,59,10,117,110,105,102,111,114,109,32,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,59,10,10,117,110,105,102,111,114,109,32,105,110,116,32,110,117,109,95,115,116,101,112,115,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,101,112,116,104,95,116,111,108,101,114,97,110,99,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,105,115,116,97,110,99,101,95,102,97,100,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,117,114,118,101,95,102,97,100,101,95,105,110,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,118,101,99,50,32,118,105,101,119,95,116,111,95,115,99,114,101,101,110,40,118,101,99,51,32,118,105,101,119,95,112,111,115,44,32,111,117,116,32,102,108,111,97,116,32,119,41,32,123,10,9,118,101,99,52,32,112,114,111,106,101,99,116,101,100,32,61,32,112,114,111,106,101,99,116,105,111,110,32,42,32,118,101,99,52,40,118,105,101,119,95,112,111,115,44,32,49,46,48,41,59,10,9,112,114,111,106,101,99,116,101,100,46,120,121,122,32,47,61,32,112,114,111,106,101,99,116,101,100,46,119,59,10,9,112,114,111,106,101,99,116,101,100,46,120,121,32,61,32,112,114,111,106,101,99,116,101,100,46,120,121,32,42,32,48,46,53,32,43,32,48,46,53,59,10,9,119,32,61,32,112,114,111,106,101,99,116,101,100,46,119,59,10,9,114,101,116,117,114,110,32,112,114,111,106,101,99,116,101,100,46,120,121,59,10,125,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,52,32,100,105,102,102,117,115,101,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,100,105,102,102,117,115,101,44,32,117,118,95,105,110,116,101,114,112,41,59,10,9,118,101,99,52,32,110,111,114,109,97,108,95,114,111,117,103,104,110,101,115,115,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,110,111,114,109,97,108,95,114,111,117,103,104,110,101,115,115,44,32,117,118,95,105,110,116,101,114,112,41,59,10,10,9,118,101,99,51,32,110,111,114,109,97,108,59,10,9,110,111,114,109,97,108,32,61,32,110,111,114,109,97,108,95,114,111,117,103,104,110,101,115,115,46,120,121,122,32,42,32,50,46,48,32,45,32,49,46,48,59,10,10,9,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,32,61,32,110,111,114,109,97,108,95,114,111,117,103,104,110,101,115,115,46,119,59,10,10,9,102,108,111,97,116,32,100,101,112,116,104,95,116,101,120,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,100,101,112,116,104,44,32,117,118,95,105,110,116,101,114,112,41,46,114,59,10,10,9,118,101,99,52,32,119,111,114,108,100,95,112,111,115,32,61,32,105,110,118,101,114,115,101,95,112,114,111,106,101,99,116,105,111,110,32,42,32,118,101,99,52,40,117,118,95,105,110,116,101,114,112,32,42,32,50,46,48,32,45,32,49,46,48,44,32,100,101,112,116,104,95,116,101,120,32,42,32,50,46,48,32,45,32,49,46,48,44,32,49,46,48,41,59,10,9,118,101,99,51,32,118,101,114,116,101,120,32,61,32,119,111,114,108,100,95,112,111,115,46,120,121,122,32,47,32,119,111,114,108,100,95,112,111,115,46,119,59,10,10,9,118,101,99,51,32,118,105,101,119,95,100,105,114,32,61,32,110,111,114,109,97,108,105,122,101,40,118,101,114,116,101,120,41,59,10,9,118,101,99,51,32,114,97,121,95,100,105,114,32,61,32,110,111,114,109,97,108,105,122,101,40,114,101,102,108,101,99,116,40,118,105,101,119,95,100,105,114,44,32,110,111,114,109,97,108,41,41,59,10,10,9,105,102,32,40,100,111,116,40,114,97,121,95,100,105,114,44,32,110,111,114,109,97,108,41,32,60,32,48,46,48,48,49,41,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,48,46,48,41,59,10,9,9,114,101,116,117,114,110,59,10,9,125,10,9,47,47,114,97,121,95,100,105,114,32,61,32,110,111,114,109,97,108,105,122,101,40,118,105,101,119,95,100,105,114,32,45,32,110,111,114,109,97,108,32,42,32,100,111,116,40,110,111,114,109,97,108,44,118,105,101,119,95,100,105,114,41,32,42,32,50,46,48,41,59,10,9,47,47,114,97,121,95,100,105,114,32,61,32,110,111,114,109,97,108,105,122,101,40,118,101,99,51,40,49,46,48,44,32,49,46,48,44,32,45,49,46,48,41,41,59,10,10,9,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,10,10,9,47,47,32,109,97,107,101,32,114,97,121,32,108,101,110,103,116,104,32,97,110,100,32,99,108,105,112,32,105,116,32,97,103,97,105,110,115,116,32,116,104,101,32,110,101,97,114,32,112,108,97,110,101,32,40,100,111,110,39,116,32,119,97,110,116,32,116,111,32,116,114,97,99,101,32,98,101,121,111,110,100,32,118,105,115,105,98,108,101,41,10,9,102,108,111,97,116,32,114,97,121,95,108,101,110,32,61,32,40,118,101,114,116,101,120,46,122,32,43,32,114,97,121,95,100,105,114,46,122,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,41,32,62,32,45,99,97,109,101,114,97,95,122,95,110,101,97,114,32,63,32,40,45,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,118,101,114,116,101,120,46,122,41,32,47,32,114,97,121,95,100,105,114,46,122,32,58,32,99,97,109,101,114,97,95,122,95,102,97,114,59,10,9,118,101,99,51,32,114,97,121,95,101,110,100,32,61,32,118,101,114,116,101,120,32,43,32,114,97,121,95,100,105,114,32,42,32,114,97,121,95,108,101,110,59,10,10,9,102,108,111,97,116,32,119,95,98,101,103,105,110,59,10,9,118,101,99,50,32,118,112,95,108,105,110,101,95,98,101,103,105,110,32,61,32,118,105,101,119,95,116,111,95,115,99,114,101,101,110,40,118,101,114,116,101,120,44,32,119,95,98,101,103,105,110,41,59,10,9,102,108,111,97,116,32,119,95,101,110,100,59,10,9,118,101,99,50,32,118,112,95,108,105,110,101,95,101,110,100,32,61,32,118,105,101,119,95,116,111,95,115,99,114,101,101,110,40,114,97,121,95,101,110,100,44,32,119,95,101,110,100,41,59,10,9,118,101,99,50,32,118,112,95,108,105,110,101,95,100,105,114,32,61,32,118,112,95,108,105,110,101,95,101,110,100,32,45,32,118,112,95,108,105,110,101,95,98,101,103,105,110,59,10,10,9,47,47,32,119,101,32,110,101,101,100,32,116,111,32,105,110,116,101,114,112,111,108,97,116,101,32,119,32,97,108,111,110,103,32,116,104,101,32,114,97,121,44,32,116,111,32,103,101,110,101,114,97,116,101,32,112,101,114,115,112,101,99,116,105,118,101,32,99,111,114,114,101,99,116,32,114,101,102,108,101,99,116,105,111,110,115,10,9,119,95,98,101,103,105,110,32,61,32,49,46,48,32,47,32,119,95,98,101,103,105,110,59,10,9,119,95,101,110,100,32,61,32,49,46,48,32,47,32,119,95,101,110,100,59,10,10,9,102,108,111,97,116,32,122,95,98,101,103,105,110,32,61,32,118,101,114,116,101,120,46,122,32,42,32,119,95,98,101,103,105,110,59,10,9,102,108,111,97,116,32,122,95,101,110,100,32,61,32,114,97,121,95,101,110,100,46,122,32,42,32,119,95,101,110,100,59,10,10,9,118,101,99,50,32,108,105,110,101,95,98,101,103,105,110,32,61,32,118,112,95,108,105,110,101,95,98,101,103,105,110,32,47,32,112,105,120,101,108,95,115,105,122,101,59,10,9,118,101,99,50,32,108,105,110,101,95,100,105,114,32,61,32,118,112,95,108,105,110,101,95,100,105,114,32,47,32,112,105,120,101,108,95,115,105,122,101,59,10,9,102,108,111,97,116,32,122,95,100,105,114,32,61,32,122,95,101,110,100,32,45,32,122,95,98,101,103,105,110,59,10,9,102,108,111,97,116,32,119,95,100,105,114,32,61,32,119,95,101,110,100,32,45,32,119,95,98,101,103,105,110,59,10,10,9,47,47,32,99,108,105,112,32,116,104,101,32,108,105,110,101,32,116,111,32,116,104,101,32,118,105,101,119,112,111,114,116,32,101,100,103,101,115,10,10,9,102,108,111,97,116,32,115,99,97,108,101,95,109,97,120,95,120,32,61,32,109,105,110,40,49,46,48,44,32,48,46,57,57,32,42,32,40,49,46,48,32,45,32,118,112,95,108,105,110,101,95,98,101,103,105,110,46,120,41,32,47,32,109,97,120,40,49,101,45,53,44,32,118,112,95,108,105,110,101,95,100,105,114,46,120,41,41,59,10,9,102,108,111,97,116,32,115,99,97,108,101,95,109,97,120,95,121,32,61,32,109,105,110,40,49,46,48,44,32,48,46,57,57,32,42,32,40,49,46,48,32,45,32,118,112,95,108,105,110,101,95,98,101,103,105,110,46,121,41,32,47,32,109,97,120,40,49,101,45,53,44,32,118,112,95,108,105,110,101,95,100,105,114,46,121,41,41,59,10,9,102,108,111,97,116,32,115,99,97,108,101,95,109,105,110,95,120,32,61,32,109,105,110,40,49,46,48,44,32,48,46,57,57,32,42,32,118,112,95,108,105,110,101,95,98,101,103,105,110,46,120,32,47,32,109,97,120,40,49,101,45,53,44,32,45,118,112,95,108,105,110,101,95,100,105,114,46,120,41,41,59,10,9,102,108,111,97,116,32,115,99,97,108,101,95,109,105,110,95,121,32,61,32,109,105,110,40,49,46,48,44,32,48,46,57,57,32,42,32,118,112,95,108,105,110,101,95,98,101,103,105,110,46,121,32,47,32,109,97,120,40,49,101,45,53,44,32,45,118,112,95,108,105,110,101,95,100,105,114,46,121,41,41,59,10,9,102,108,111,97,116,32,108,105,110,101,95,99,108,105,112,32,61,32,109,105,110,40,115,99,97,108,101,95,109,97,120,95,120,44,32,115,99,97,108,101,95,109,97,120,95,121,41,32,42,32,109,105,110,40,115,99,97,108,101,95,109,105,110,95,120,44,32,115,99,97,108,101,95,109,105,110,95,121,41,59,10,9,108,105,110,101,95,100,105,114,32,42,61,32,108,105,110,101,95,99,108,105,112,59,10,9,122,95,100,105,114,32,42,61,32,108,105,110,101,95,99,108,105,112,59,10,9,119,95,100,105,114,32,42,61,32,108,105,110,101,95,99,108,105,112,59,10,10,9,47,47,32,99,108,105,112,32,122,32,97,110,100,32,119,32,97,100,118,97,110,99,101,32,116,111,32,108,105,110,101,32,97,100,118,97,110,99,101,10,9,118,101,99,50,32,108,105,110,101,95,97,100,118,97,110,99,101,32,61,32,110,111,114,109,97,108,105,122,101,40,108,105,110,101,95,100,105,114,41,59,32,47,47,32,100,111,119,110,32,116,111,32,112,105,120,101,108,10,9,102,108,111,97,116,32,115,116,101,112,95,115,105,122,101,32,61,32,108,101,110,103,116,104,40,108,105,110,101,95,97,100,118,97,110,99,101,41,32,47,32,108,101,110,103,116,104,40,108,105,110,101,95,100,105,114,41,59,10,9,102,108,111,97,116,32,122,95,97,100,118,97,110,99,101,32,61,32,122,95,100,105,114,32,42,32,115,116,101,112,95,115,105,122,101,59,32,47,47,32,97,100,97,112,116,32,122,32,97,100,118,97,110,99,101,32,116,111,32,108,105,110,101,32,97,100,118,97,110,99,101,10,9,102,108,111,97,116,32,119,95,97,100,118,97,110,99,101,32,61,32,119,95,100,105,114,32,42,32,115,116,101,112,95,115,105,122,101,59,32,47,47,32,97,100,97,112,116,32,119,32,97,100,118,97,110,99,101,32,116,111,32,108,105,110,101,32,97,100,118,97,110,99,101,10,10,9,47,47,32,109,97,107,101,32,108,105,110,101,32,97,100,118,97,110,99,101,32,102,97,115,116,101,114,32,105,102,32,100,105,114,101,99,116,105,111,110,32,105,115,32,99,108,111,115,101,114,32,116,111,32,112,105,120,101,108,32,101,100,103,101,115,32,40,116,104,105,115,32,97,118,111,105,100,115,32,115,97,109,112,108,105,110,103,32,116,104,101,32,115,97,109,101,32,112,105,120,101,108,32,116,119,105,99,101,41,10,9,102,108,111,97,116,32,97,100,118,97,110,99,101,95,97,110,103,108,101,95,97,100,106,32,61,32,49,46,48,32,47,32,109,97,120,40,97,98,115,40,108,105,110,101,95,97,100,118,97,110,99,101,46,120,41,44,32,97,98,115,40,108,105,110,101,95,97,100,118,97,110,99,101,46,121,41,41,59,10,9,108,105,110,101,95,97,100,118,97,110,99,101,32,42,61,32,97,100,118,97,110,99,101,95,97,110,103,108,101,95,97,100,106,59,32,47,47,32,97,100,97,112,116,32,122,32,97,100,118,97,110,99,101,32,116,111,32,108,105,110,101,32,97,100,118,97,110,99,101,10,9,122,95,97,100,118,97,110,99,101,32,42,61,32,97,100,118,97,110,99,101,95,97,110,103,108,101,95,97,100,106,59,10,9,119,95,97,100,118,97,110,99,101,32,42,61,32,97,100,118,97,110,99,101,95,97,110,103,108,101,95,97,100,106,59,10,10,9,118,101,99,50,32,112,111,115,32,61,32,108,105,110,101,95,98,101,103,105,110,59,10,9,102,108,111,97,116,32,122,32,61,32,122,95,98,101,103,105,110,59,10,9,102,108,111,97,116,32,119,32,61,32,119,95,98,101,103,105,110,59,10,9,102,108,111,97,116,32,122,95,102,114,111,109,32,61,32,122,32,47,32,119,59,10,9,102,108,111,97,116,32,122,95,116,111,32,61,32,122,95,102,114,111,109,59,10,9,102,108,111,97,116,32,100,101,112,116,104,59,10,9,118,101,99,50,32,112,114,101,118,95,112,111,115,32,61,32,112,111,115,59,10,10,9,98,111,111,108,32,102,111,117,110,100,32,61,32,102,97,108,115,101,59,10,10,9,102,108,111,97,116,32,115,116,101,112,115,95,116,97,107,101,110,32,61,32,48,46,48,59,10,10,9,102,111,114,32,40,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,110,117,109,95,115,116,101,112,115,59,32,105,43,43,41,32,123,10,9,9,112,111,115,32,43,61,32,108,105,110,101,95,97,100,118,97,110,99,101,59,10,9,9,122,32,43,61,32,122,95,97,100,118,97,110,99,101,59,10,9,9,119,32,43,61,32,119,95,97,100,118,97,110,99,101,59,10,10,9,9,47,47,32,99,111,110,118,101,114,116,32,116,111,32,108,105,110,101,97,114,32,100,101,112,116,104,10,10,9,9,100,101,112,116,104,32,61,32,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,100,101,112,116,104,44,32,112,111,115,32,42,32,112,105,120,101,108,95,115,105,122,101,41,46,114,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,105,102,100,101,102,32,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,10,9,9,100,101,112,116,104,32,61,32,40,40,100,101,112,116,104,32,43,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,47,32,50,46,48,59,10,35,101,108,115,101,10,9,9,100,101,112,116,104,32,61,32,50,46,48,32,42,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,100,101,112,116,104,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,59,10,35,101,110,100,105,102,10,9,9,100,101,112,116,104,32,61,32,45,100,101,112,116,104,59,10,10,9,9,122,95,102,114,111,109,32,61,32,122,95,116,111,59,10,9,9,122,95,116,111,32,61,32,122,32,47,32,119,59,10,10,9,9,105,102,32,40,100,101,112,116,104,32,62,32,122,95,116,111,41,32,123,10,9,9,9,47,47,32,105,102,32,100,101,112,116,104,32,119,97,115,32,115,117,114,112,97,115,115,101,100,10,9,9,9,105,102,32,40,40,100,101,112,116,104,32,60,61,32,109,97,120,40,122,95,116,111,44,32,122,95,102,114,111,109,41,32,43,32,100,101,112,116,104,95,116,111,108,101,114,97,110,99,101,41,32,38,38,32,40,45,100,101,112,116,104,32,60,32,99,97,109,101,114,97,95,122,95,102,97,114,41,41,32,123,10,9,9,9,9,47,47,32,99,104,101,99,107,32,116,104,101,32,100,101,112,116,104,32,116,111,108,101,114,97,110,99,101,32,97,110,100,32,102,97,114,32,99,108,105,112,10,9,9,9,9,102,111,117,110,100,32,61,32,116,114,117,101,59,10,9,9,9,125,10,9,9,9,98,114,101,97,107,59,10,9,9,125,10,10,9,9,115,116,101,112,115,95,116,97,107,101,110,32,43,61,32,49,46,48,59,10,9,9,112,114,101,118,95,112,111,115,32,61,32,112,111,115,59,10,9,125,10,10,9,105,102,32,40,102,111,117,110,100,41,32,123,10,9,9,102,108,111,97,116,32,109,97,114,103,105,110,95,98,108,101,110,100,32,61,32,49,46,48,59,10,10,9,9,118,101,99,50,32,109,97,114,103,105,110,32,61,32,118,101,99,50,40,40,118,105,101,119,112,111,114,116,95,115,105,122,101,46,120,32,43,32,118,105,101,119,112,111,114,116,95,115,105,122,101,46,121,41,32,42,32,48,46,53,32,42,32,48,46,48,53,41,59,32,47,47,32,109,97,107,101,32,97,32,117,110,105,102,111,114,109,32,109,97,114,103,105,110,10,9,9,105,102,32,40,97,110,121,40,98,118,101,99,52,40,108,101,115,115,84,104,97,110,40,112,111,115,44,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,41,44,32,103,114,101,97,116,101,114,84,104,97,110,40,112,111,115,44,32,118,105,101,119,112,111,114,116,95,115,105,122,101,32,42,32,48,46,53,41,41,41,41,32,123,10,9,9,9,47,47,32,99,108,105,112,32,97,116,32,116,104,101,32,115,99,114,101,101,110,32,101,100,103,101,115,10,9,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,48,46,48,41,59,10,9,9,9,114,101,116,117,114,110,59,10,9,9,125,10,10,9,9,123,10,9,9,9,47,47,98,108,101,110,100,32,102,97,100,105,110,103,32,111,117,116,32,116,111,119,97,114,100,115,32,105,110,110,101,114,32,109,97,114,103,105,110,10,9,9,9,47,47,32,48,46,50,53,32,61,32,109,105,100,112,111,105,110,116,32,111,102,32,104,97,108,102,45,114,101,115,111,108,117,116,105,111,110,32,114,101,102,108,101,99,116,105,111,110,10,9,9,9,118,101,99,50,32,109,97,114,103,105,110,95,103,114,97,100,32,61,32,109,105,120,40,118,105,101,119,112,111,114,116,95,115,105,122,101,32,42,32,48,46,53,32,45,32,112,111,115,44,32,112,111,115,44,32,108,101,115,115,84,104,97,110,40,112,111,115,44,32,118,105,101,119,112,111,114,116,95,115,105,122,101,32,42,32,48,46,50,53,41,41,59,10,9,9,9,109,97,114,103,105,110,95,98,108,101,110,100,32,61,32,115,109,111,111,116,104,115,116,101,112,40,48,46,48,44,32,109,97,114,103,105,110,46,120,32,42,32,109,97,114,103,105,110,46,121,44,32,109,97,114,103,105,110,95,103,114,97,100,46,120,32,42,32,109,97,114,103,105,110,95,103,114,97,100,46,121,41,59,10,9,9,9,47,47,109,97,114,103,105,110,95,98,108,101,110,100,32,61,32,49,46,48,59,10,9,9,125,10,10,9,9,118,101,99,50,32,102,105,110,97,108,95,112,111,115,59,10,9,9,102,108,111,97,116,32,103,114,97,100,32,61,32,40,115,116,101,112,115,95,116,97,107,101,110,32,43,32,49,46,48,41,32,47,32,102,108,111,97,116,40,110,117,109,95,115,116,101,112,115,41,59,10,9,9,102,108,111,97,116,32,105,110,105,116,105,97,108,95,102,97,100,101,32,61,32,99,117,114,118,101,95,102,97,100,101,95,105,110,32,61,61,32,48,46,48,32,63,32,49,46,48,32,58,32,112,111,119,40,99,108,97,109,112,40,103,114,97,100,44,32,48,46,48,44,32,49,46,48,41,44,32,99,117,114,118,101,95,102,97,100,101,95,105,110,41,59,10,9,9,102,108,111,97,116,32,102,97,100,101,32,61,32,112,111,119,40,99,108,97,109,112,40,49,46,48,32,45,32,103,114,97,100,44,32,48,46,48,44,32,49,46,48,41,44,32,100,105,115,116,97,110,99,101,95,102,97,100,101,41,32,42,32,105,110,105,116,105,97,108,95,102,97,100,101,59,10,9,9,102,105,110,97,108,95,112,111,115,32,61,32,112,111,115,59,10,10,35,105,102,100,101,102,32,82,69,70,76,69,67,84,95,82,79,85,71,72,78,69,83,83,10,10,9,9,118,101,99,52,32,102,105,110,97,108,95,99,111,108,111,114,59,10,9,9,47,47,32,105,102,32,114,111,117,103,104,110,101,115,115,32,105,115,32,101,110,97,98,108,101,100,44,32,100,111,32,115,99,114,101,101,110,32,115,112,97,99,101,32,99,111,110,101,32,116,114,97,99,105,110,103,10,9,9,105,102,32,40,114,111,117,103,104,110,101,115,115,32,62,32,48,46,48,48,49,41,32,123,10,9,9,9,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,47,10,9,9,9,47,47,32,117,115,101,32,97,32,98,108,117,114,114,101,100,32,118,101,114,115,105,111,110,32,40,105,110,32,99,111,110,115,101,99,117,116,105,118,101,32,109,105,112,109,97,112,115,41,32,111,102,32,116,104,101,32,115,99,114,101,101,110,32,116,111,32,115,105,109,117,108,97,116,101,32,114,111,117,103,104,110,101,115,115,10,10,9,9,9,102,108,111,97,116,32,103,108,111,115,115,32,61,32,49,46,48,32,45,32,114,111,117,103,104,110,101,115,115,59,10,9,9,9,102,108,111,97,116,32,99,111,110,101,95,97,110,103,108,101,32,61,32,114,111,117,103,104,110,101,115,115,32,42,32,77,95,80,73,32,42,32,48,46,53,59,10,9,9,9,118,101,99,50,32,99,111,110,101,95,100,105,114,32,61,32,102,105,110,97,108,95,112,111,115,32,45,32,108,105,110,101,95,98,101,103,105,110,59,10,9,9,9,102,108,111,97,116,32,99,111,110,101,95,108,101,110,32,61,32,108,101,110,103,116,104,40,99,111,110,101,95,100,105,114,41,59,10,9,9,9,99,111,110,101,95,100,105,114,32,61,32,110,111,114,109,97,108,105,122,101,40,99,111,110,101,95,100,105,114,41,59,32,47,47,32,119,105,108,108,32,98,101,32,117,115,101,100,32,110,111,114,109,97,108,105,122,101,100,32,102,114,111,109,32,110,111,119,32,111,110,10,9,9,9,102,108,111,97,116,32,109,97,120,95,109,105,112,109,97,112,32,61,32,102,105,108,116,101,114,95,109,105,112,109,97,112,95,108,101,118,101,108,115,32,45,32,49,46,48,59,10,9,9,9,102,108,111,97,116,32,103,108,111,115,115,95,109,117,108,116,32,61,32,103,108,111,115,115,59,10,10,9,9,9,102,108,111,97,116,32,114,101,109,95,97,108,112,104,97,32,61,32,49,46,48,59,10,9,9,9,102,105,110,97,108,95,99,111,108,111,114,32,61,32,118,101,99,52,40,48,46,48,41,59,10,10,9,9,9,102,111,114,32,40,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,55,59,32,105,43,43,41,32,123,10,9,9,9,9,102,108,111,97,116,32,111,112,95,108,101,110,32,61,32,50,46,48,32,42,32,116,97,110,40,99,111,110,101,95,97,110,103,108,101,41,32,42,32,99,111,110,101,95,108,101,110,59,32,47,47,32,111,112,112,111,115,105,116,101,32,115,105,100,101,32,111,102,32,105,115,111,32,116,114,105,97,110,103,108,101,10,9,9,9,9,102,108,111,97,116,32,114,97,100,105,117,115,59,10,9,9,9,9,123,10,9,9,9,9,9,47,47,32,102,105,116,32,116,111,32,115,112,104,101,114,101,32,105,110,115,105,100,101,32,99,111,110,101,32,40,115,112,104,101,114,101,32,101,110,100,115,32,97,116,32,101,110,100,32,111,102,32,99,111,110,101,41,44,32,115,111,109,101,116,104,105,110,103,32,108,105,107,101,32,116,104,105,115,58,10,9,9,9,9,9,47,47,32,95,95,95,10,9,9,9,9,9,47,47,32,92,79,47,10,9,9,9,9,9,47,47,32,32,86,10,9,9,9,9,9,47,47,10,9,9,9,9,9,47,47,32,97,115,32,105,116,32,97,118,111,105,100,115,32,98,108,101,101,100,105,110,103,32,102,114,111,109,32,98,101,121,111,110,100,32,116,104,101,32,114,101,102,108,101,99,116,105,111,110,32,97,115,32,109,117,99,104,32,97,115,32,112,111,115,115,105,98,108,101,46,32,65,115,32,97,32,112,108,117,115,10,9,9,9,9,9,47,47,32,105,116,32,97,108,115,111,32,109,97,107,101,115,32,116,104,101,32,114,111,117,103,104,32,114,101,102,108,101,99,116,105,111,110,32,109,111,114,101,32,101,108,111,110,103,97,116,101,100,46,10,9,9,9,9,9,102,108,111,97,116,32,97,32,61,32,111,112,95,108,101,110,59,10,9,9,9,9,9,102,108,111,97,116,32,104,32,61,32,99,111,110,101,95,108,101,110,59,10,9,9,9,9,9,102,108,111,97,116,32,97,50,32,61,32,97,32,42,32,97,59,10,9,9,9,9,9,102,108,111,97,116,32,102,104,50,32,61,32,52,46,48,102,32,42,32,104,32,42,32,104,59,10,9,9,9,9,9,114,97,100,105,117,115,32,61,32,40,97,32,42,32,40,115,113,114,116,40,97,50,32,43,32,102,104,50,41,32,45,32,97,41,41,32,47,32,40,52,46,48,102,32,42,32,104,41,59,10,9,9,9,9,125,10,10,9,9,9,9,47,47,32,102,105,110,100,32,116,104,101,32,112,108,97,99,101,32,119,104,101,114,101,32,115,99,114,101,101,110,32,109,117,115,116,32,98,101,32,115,97,109,112,108,101,100,10,9,9,9,9,118,101,99,50,32,115,97,109,112,108,101,95,112,111,115,32,61,32,40,108,105,110,101,95,98,101,103,105,110,32,43,32,99,111,110,101,95,100,105,114,32,42,32,40,99,111,110,101,95,108,101,110,32,45,32,114,97,100,105,117,115,41,41,32,42,32,112,105,120,101,108,95,115,105,122,101,59,10,9,9,9,9,47,47,32,114,97,100,105,117,115,32,105,115,32,105,110,32,112,105,120,101,108,115,44,32,115,111,32,105,116,39,115,32,110,97,116,117,114,97,108,32,116,104,97,116,32,108,111,103,50,40,114,97,100,105,117,115,41,32,109,97,112,115,32,116,111,32,116,104,101,32,114,105,103,104,116,32,109,105,112,109,97,112,32,102,111,114,32,116,104,101,32,97,109,111,117,110,116,32,111,102,32,112,105,120,101,108,115,10,9,9,9,9,102,108,111,97,116,32,109,105,112,109,97,112,32,61,32,99,108,97,109,112,40,108,111,103,50,40,114,97,100,105,117,115,41,44,32,48,46,48,44,32,109,97,120,95,109,105,112,109,97,112,41,59,10,9,9,9,9,47,47,109,105,112,109,97,112,32,61,32,109,97,120,40,109,105,112,109,97,112,32,45,32,49,46,48,44,32,48,46,48,41,59,10,10,9,9,9,9,47,47,32,100,111,32,115,97,109,112,108,105,110,103,10,10,9,9,9,9,118,101,99,52,32,115,97,109,112,108,101,95,99,111,108,111,114,59,10,9,9,9,9,123,10,9,9,9,9,9,115,97,109,112,108,101,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,100,105,102,102,117,115,101,44,32,115,97,109,112,108,101,95,112,111,115,44,32,109,105,112,109,97,112,41,59,10,9,9,9,9,125,10,10,9,9,9,9,47,47,32,109,117,108,116,105,112,108,121,32,98,121,32,103,108,111,115,115,10,9,9,9,9,115,97,109,112,108,101,95,99,111,108,111,114,46,114,103,98,32,42,61,32,103,108,111,115,115,95,109,117,108,116,59,10,9,9,9,9,115,97,109,112,108,101,95,99,111,108,111,114,46,97,32,61,32,103,108,111,115,115,95,109,117,108,116,59,10,10,9,9,9,9,114,101,109,95,97,108,112,104,97,32,45,61,32,115,97,109,112,108,101,95,99,111,108,111,114,46,97,59,10,9,9,9,9,105,102,32,40,114,101,109,95,97,108,112,104,97,32,60,32,48,46,48,41,32,123,10,9,9,9,9,9,115,97,109,112,108,101,95,99,111,108,111,114,46,114,103,98,32,42,61,32,40,49,46,48,32,45,32,97,98,115,40,114,101,109,95,97,108,112,104,97,41,41,59,10,9,9,9,9,125,10,10,9,9,9,9,102,105,110,97,108,95,99,111,108,111,114,32,43,61,32,115,97,109,112,108,101,95,99,111,108,111,114,59,10,10,9,9,9,9,105,102,32,40,102,105,110,97,108,95,99,111,108,111,114,46,97,32,62,61,32,48,46,57,53,41,32,123,10,9,9,9,9,9,47,47,32,84,104,105,115,32,99,111,100,101,32,111,102,32,97,99,99,117,109,117,108,97,116,105,110,103,32,103,108,111,115,115,32,97,110,100,32,97,98,111,114,116,105,110,103,32,111,110,32,110,101,97,114,32,111,110,101,10,9,9,9,9,9,47,47,32,109,97,107,101,115,32,115,101,110,115,101,32,119,104,101,110,32,121,111,117,32,116,104,105,110,107,32,111,102,32,99,111,110,101,32,116,114,97,99,105,110,103,46,10,9,9,9,9,9,47,47,32,84,104,105,110,107,32,111,102,32,105,116,32,97,115,32,105,102,32,114,111,117,103,104,110,101,115,115,32,119,97,115,32,48,44,32,116,104,101,110,32,119,101,32,99,111,117,108,100,32,97,98,111,114,116,32,111,110,32,116,104,101,32,102,105,114,115,116,10,9,9,9,9,9,47,47,32,105,116,101,114,97,116,105,111,110,46,32,70,111,114,32,108,101,115,115,101,114,32,114,111,117,103,104,110,101,115,115,32,118,97,108,117,101,115,44,32,119,101,32,110,101,101,100,32,109,111,114,101,32,105,116,101,114,97,116,105,111,110,115,44,32,98,117,116,10,9,9,9,9,9,47,47,32,101,97,99,104,32,110,101,101,100,115,32,116,111,32,104,97,118,101,32,108,101,115,115,32,105,110,102,108,117,101,110,99,101,32,103,105,118,101,110,32,116,104,101,32,115,112,104,101,114,101,32,105,115,32,115,109,97,108,108,101,114,10,9,9,9,9,9,98,114,101,97,107,59,10,9,9,9,9,125,10,10,9,9,9,9,99,111,110,101,95,108,101,110,32,45,61,32,114,97,100,105,117,115,32,42,32,50,46,48,59,32,47,47,32,103,111,32,116,111,32,110,101,120,116,32,40,115,109,97,108,108,101,114,41,32,99,105,114,99,108,101,46,10,10,9,9,9,9,103,108,111,115,115,95,109,117,108,116,32,42,61,32,103,108,111,115,115,59,10,9,9,9,125,10,9,9,125,32,101,108,115,101,32,123,10,9,9,9,102,105,110,97,108,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,100,105,102,102,117,115,101,44,32,102,105,110,97,108,95,112,111,115,32,42,32,112,105,120,101,108,95,115,105,122,101,44,32,48,46,48,41,59,10,9,9,125,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,102,105,110,97,108,95,99,111,108,111,114,46,114,103,98,44,32,102,97,100,101,32,42,32,109,97,114,103,105,110,95,98,108,101,110,100,41,59,10,10,35,101,108,115,101,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,100,105,102,102,117,115,101,44,32,102,105,110,97,108,95,112,111,115,32,42,32,112,105,120,101,108,95,115,105,122,101,44,32,48,46,48,41,46,114,103,98,44,32,102,97,100,101,32,42,32,109,97,114,103,105,110,95,98,108,101,110,100,41,59,10,35,101,110,100,105,102,10,10,9,125,32,101,108,115,101,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,48,46,48,44,32,48,46,48,44,32,48,46,48,44,32,48,46,48,41,59,10,9,125,10,125,10,		0};

		static const int _fragment_code_start=18;
		setup(_conditional_strings,2,_uniform_strings,12,_attribute_pairs,0, _texunit_pairs,3, _shadow_texunits,0,_ubo_pairs,0,_feedbacks,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

