/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CUBEMAP_FILTER_GLSL_GEN_HGLES2_120
#define CUBEMAP_FILTER_GLSL_GEN_HGLES2_120


#include "drivers/gles2/shader_gles2.h"


class CubemapFilterShaderGLES2 : public ShaderGLES2 {

	 virtual String get_shader_name() const { return "CubemapFilterShaderGLES2"; }
public:

	enum Conditionals {
		USE_GLES_OVER_GL,
		GL_EXT_SHADER_TEXTURE_LOD,
		GL_ARB_SHADER_TEXTURE_LOD,
		USE_SOURCE_PANORAMA,
		LOW_QUALITY,
		USE_DIRECT_WRITE,
	};

	enum Uniforms {
		FACE_ID,
		ROUGHNESS,
		Z_FLIP,
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
			"#define USE_GLES_OVER_GL\n",
			"#define GL_EXT_shader_texture_lod\n",
			"#define GL_ARB_shader_texture_lod\n",
			"#define USE_SOURCE_PANORAMA\n",
			"#define LOW_QUALITY\n",
			"#define USE_DIRECT_WRITE\n",
		};

		static const char* _uniform_strings[]={
			"face_id",
			"roughness",
			"z_flip",
		};

		static AttributePair _attribute_pairs[]={
			{"vertex",0},
			{"uv",4},
		};

		static TexUnitPair _texunit_pairs[]={
			{"source_panorama",0},
			{"source_cube",0},
			{"radical_inverse_vdc_cache",1},
		};

		static const char _vertex_code[]={
10,35,105,102,100,101,102,32,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,35,100,101,102,105,110,101,32,108,111,119,112,10,35,100,101,102,105,110,101,32,109,101,100,105,117,109,112,10,35,100,101,102,105,110,101,32,104,105,103,104,112,10,35,101,108,115,101,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,105,110,116,59,10,35,101,110,100,105,102,10,10,97,116,116,114,105,98,117,116,101,32,104,105,103,104,112,32,118,101,99,50,32,118,101,114,116,101,120,59,32,47,47,32,97,116,116,114,105,98,58,48,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,97,116,116,114,105,98,117,116,101,32,104,105,103,104,112,32,118,101,99,50,32,117,118,59,32,47,47,32,97,116,116,114,105,98,58,52,10,10,118,97,114,121,105,110,103,32,104,105,103,104,112,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,117,118,95,105,110,116,101,114,112,32,61,32,117,118,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,118,101,114,116,101,120,44,32,48,44,32,49,41,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,47,47,32,116,101,120,116,117,114,101,50,68,76,111,100,69,88,84,32,97,110,100,32,116,101,120,116,117,114,101,67,117,98,101,76,111,100,69,88,84,32,97,114,101,32,102,114,97,103,109,101,110,116,32,115,104,97,100,101,114,32,115,112,101,99,105,102,105,99,46,10,47,47,32,68,111,32,110,111,116,32,99,111,112,121,32,116,104,101,115,101,32,100,101,102,105,110,101,115,32,105,110,32,116,104,101,32,118,101,114,116,101,120,32,115,101,99,116,105,111,110,46,10,35,105,102,110,100,101,102,32,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,35,105,102,100,101,102,32,71,76,95,69,88,84,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,69,88,84,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,32,58,32,101,110,97,98,108,101,10,35,100,101,102,105,110,101,32,116,101,120,116,117,114,101,50,68,76,111,100,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,32,116,101,120,116,117,114,101,50,68,76,111,100,69,88,84,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,10,35,100,101,102,105,110,101,32,116,101,120,116,117,114,101,67,117,98,101,76,111,100,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,32,116,101,120,116,117,114,101,67,117,98,101,76,111,100,69,88,84,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,10,35,101,110,100,105,102,10,35,101,110,100,105,102,32,47,47,32,33,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,10,35,105,102,100,101,102,32,71,76,95,65,82,66,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,65,82,66,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,32,58,32,101,110,97,98,108,101,10,35,101,110,100,105,102,10,10,35,105,102,32,33,100,101,102,105,110,101,100,40,71,76,95,69,88,84,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,41,32,38,38,32,33,100,101,102,105,110,101,100,40,71,76,95,65,82,66,95,115,104,97,100,101,114,95,116,101,120,116,117,114,101,95,108,111,100,41,10,35,100,101,102,105,110,101,32,116,101,120,116,117,114,101,50,68,76,111,100,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,32,116,101,120,116,117,114,101,50,68,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,10,35,100,101,102,105,110,101,32,116,101,120,116,117,114,101,67,117,98,101,76,111,100,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,32,116,101,120,116,117,114,101,67,117,98,101,40,105,109,103,44,32,99,111,111,114,100,44,32,108,111,100,41,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,35,100,101,102,105,110,101,32,108,111,119,112,10,35,100,101,102,105,110,101,32,109,101,100,105,117,109,112,10,35,100,101,102,105,110,101,32,104,105,103,104,112,10,35,101,108,115,101,10,35,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,72,73,71,72,80,95,80,82,69,67,73,83,73,79,78,41,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,105,110,116,59,10,35,101,108,115,101,10,112,114,101,99,105,115,105,111,110,32,109,101,100,105,117,109,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,109,101,100,105,117,109,112,32,105,110,116,59,10,35,101,110,100,105,102,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,83,79,85,82,67,69,95,80,65,78,79,82,65,77,65,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,112,97,110,111,114,97,109,97,59,32,47,47,116,101,120,117,110,105,116,58,48,10,35,101,108,115,101,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,67,117,98,101,32,115,111,117,114,99,101,95,99,117,98,101,59,32,47,47,116,101,120,117,110,105,116,58,48,10,35,101,110,100,105,102,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,117,110,105,102,111,114,109,32,105,110,116,32,102,97,99,101,95,105,100,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,59,10,118,97,114,121,105,110,103,32,104,105,103,104,112,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,114,97,100,105,99,97,108,95,105,110,118,101,114,115,101,95,118,100,99,95,99,97,99,104,101,59,32,47,47,32,116,101,120,117,110,105,116,58,49,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,35,105,102,100,101,102,32,76,79,87,95,81,85,65,76,73,84,89,10,10,35,100,101,102,105,110,101,32,83,65,77,80,76,69,95,67,79,85,78,84,32,54,52,10,10,35,101,108,115,101,10,10,35,100,101,102,105,110,101,32,83,65,77,80,76,69,95,67,79,85,78,84,32,53,49,50,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,83,79,85,82,67,69,95,80,65,78,79,82,65,77,65,10,10,118,101,99,52,32,116,101,120,116,117,114,101,80,97,110,111,114,97,109,97,40,115,97,109,112,108,101,114,50,68,32,112,97,110,111,44,32,118,101,99,51,32,110,111,114,109,97,108,41,32,123,10,9,118,101,99,50,32,115,116,32,61,32,118,101,99,50,40,10,9,9,9,97,116,97,110,40,110,111,114,109,97,108,46,120,44,32,110,111,114,109,97,108,46,122,41,44,10,9,9,9,97,99,111,115,40,110,111,114,109,97,108,46,121,41,41,59,10,10,9,105,102,32,40,115,116,46,120,32,60,32,48,46,48,41,10,9,9,115,116,46,120,32,43,61,32,77,95,80,73,32,42,32,50,46,48,59,10,10,9,115,116,32,47,61,32,118,101,99,50,40,77,95,80,73,32,42,32,50,46,48,44,32,77,95,80,73,41,59,10,10,9,114,101,116,117,114,110,32,116,101,120,116,117,114,101,50,68,76,111,100,40,112,97,110,111,44,32,115,116,44,32,48,46,48,41,59,10,125,10,10,35,101,110,100,105,102,10,10,118,101,99,51,32,116,101,120,101,108,67,111,111,114,100,84,111,86,101,99,40,118,101,99,50,32,117,118,44,32,105,110,116,32,102,97,99,101,73,68,41,32,123,10,9,109,97,116,51,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,54,93,59,10,10,9,47,47,32,45,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,47,47,32,117,32,45,62,32,43,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,47,47,32,118,32,45,62,32,45,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,50,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,45,120,32,102,97,99,101,10,10,9,47,47,32,43,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,47,47,32,117,32,45,62,32,45,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,47,47,32,118,32,45,62,32,45,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,50,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,43,120,32,102,97,99,101,10,10,9,47,47,32,45,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,117,32,45,62,32,43,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,47,47,32,118,32,45,62,32,45,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,47,47,32,45,121,32,102,97,99,101,10,10,9,47,47,32,43,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,117,32,45,62,32,43,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,47,47,32,118,32,45,62,32,43,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,49,46,48,44,32,48,46,48,41,59,32,47,47,32,43,121,32,102,97,99,101,10,10,9,47,47,32,45,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,48,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,117,32,45,62,32,45,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,47,47,32,118,32,45,62,32,45,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,47,47,32,45,122,32,102,97,99,101,10,10,9,47,47,32,43,122,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,47,47,32,117,32,45,62,32,43,120,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,47,47,32,118,32,45,62,32,45,121,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,47,47,32,43,122,32,102,97,99,101,10,10,9,47,47,32,111,117,116,32,61,32,117,32,42,32,115,95,102,97,99,101,85,118,91,48,93,32,43,32,118,32,42,32,115,95,102,97,99,101,85,118,91,49,93,32,43,32,115,95,102,97,99,101,85,118,91,50,93,46,10,9,118,101,99,51,32,114,101,115,117,108,116,59,10,9,102,111,114,32,40,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,54,59,32,105,43,43,41,32,123,10,9,9,105,102,32,40,105,32,61,61,32,102,97,99,101,73,68,41,32,123,10,9,9,9,114,101,115,117,108,116,32,61,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,105,93,91,48,93,32,42,32,117,118,46,120,41,32,43,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,105,93,91,49,93,32,42,32,117,118,46,121,41,32,43,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,105,93,91,50,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,125,10,9,125,10,9,114,101,116,117,114,110,32,110,111,114,109,97,108,105,122,101,40,114,101,115,117,108,116,41,59,10,125,10,10,118,101,99,51,32,73,109,112,111,114,116,97,110,99,101,83,97,109,112,108,101,71,71,88,40,118,101,99,50,32,88,105,44,32,102,108,111,97,116,32,82,111,117,103,104,110,101,115,115,44,32,118,101,99,51,32,78,41,32,123,10,9,102,108,111,97,116,32,97,32,61,32,82,111,117,103,104,110,101,115,115,32,42,32,82,111,117,103,104,110,101,115,115,59,32,47,47,32,68,73,83,78,69,89,39,83,32,82,79,85,71,72,78,69,83,83,32,91,115,101,101,32,66,117,114,108,101,121,39,49,50,32,115,105,103,103,114,97,112,104,93,10,10,9,47,47,32,67,111,109,112,117,116,101,32,100,105,115,116,114,105,98,117,116,105,111,110,32,100,105,114,101,99,116,105,111,110,10,9,102,108,111,97,116,32,80,104,105,32,61,32,50,46,48,32,42,32,77,95,80,73,32,42,32,88,105,46,120,59,10,9,102,108,111,97,116,32,67,111,115,84,104,101,116,97,32,61,32,115,113,114,116,40,40,49,46,48,32,45,32,88,105,46,121,41,32,47,32,40,49,46,48,32,43,32,40,97,32,42,32,97,32,45,32,49,46,48,41,32,42,32,88,105,46,121,41,41,59,10,9,102,108,111,97,116,32,83,105,110,84,104,101,116,97,32,61,32,115,113,114,116,40,49,46,48,32,45,32,67,111,115,84,104,101,116,97,32,42,32,67,111,115,84,104,101,116,97,41,59,10,10,9,47,47,32,67,111,110,118,101,114,116,32,116,111,32,115,112,104,101,114,105,99,97,108,32,100,105,114,101,99,116,105,111,110,10,9,118,101,99,51,32,72,59,10,9,72,46,120,32,61,32,83,105,110,84,104,101,116,97,32,42,32,99,111,115,40,80,104,105,41,59,10,9,72,46,121,32,61,32,83,105,110,84,104,101,116,97,32,42,32,115,105,110,40,80,104,105,41,59,10,9,72,46,122,32,61,32,67,111,115,84,104,101,116,97,59,10,10,9,118,101,99,51,32,85,112,86,101,99,116,111,114,32,61,32,97,98,115,40,78,46,122,41,32,60,32,48,46,57,57,57,32,63,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,32,58,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,10,9,118,101,99,51,32,84,97,110,103,101,110,116,88,32,61,32,110,111,114,109,97,108,105,122,101,40,99,114,111,115,115,40,85,112,86,101,99,116,111,114,44,32,78,41,41,59,10,9,118,101,99,51,32,84,97,110,103,101,110,116,89,32,61,32,99,114,111,115,115,40,78,44,32,84,97,110,103,101,110,116,88,41,59,10,10,9,47,47,32,84,97,110,103,101,110,116,32,116,111,32,119,111,114,108,100,32,115,112,97,99,101,10,9,114,101,116,117,114,110,32,84,97,110,103,101,110,116,88,32,42,32,72,46,120,32,43,32,84,97,110,103,101,110,116,89,32,42,32,72,46,121,32,43,32,78,32,42,32,72,46,122,59,10,125,10,10,102,108,111,97,116,32,114,97,100,105,99,97,108,95,105,110,118,101,114,115,101,95,86,100,67,40,105,110,116,32,105,41,32,123,10,9,114,101,116,117,114,110,32,116,101,120,116,117,114,101,50,68,40,114,97,100,105,99,97,108,95,105,110,118,101,114,115,101,95,118,100,99,95,99,97,99,104,101,44,32,118,101,99,50,40,102,108,111,97,116,40,105,41,32,47,32,53,49,50,46,48,44,32,48,46,48,41,41,46,120,59,10,125,10,10,118,101,99,50,32,72,97,109,109,101,114,115,108,101,121,40,105,110,116,32,105,44,32,105,110,116,32,78,41,32,123,10,9,114,101,116,117,114,110,32,118,101,99,50,40,102,108,111,97,116,40,105,41,32,47,32,102,108,111,97,116,40,78,41,44,32,114,97,100,105,99,97,108,95,105,110,118,101,114,115,101,95,86,100,67,40,105,41,41,59,10,125,10,10,117,110,105,102,111,114,109,32,98,111,111,108,32,122,95,102,108,105,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,51,32,99,111,108,111,114,32,61,32,118,101,99,51,40,48,46,48,41,59,10,10,9,118,101,99,50,32,117,118,32,61,32,40,117,118,95,105,110,116,101,114,112,32,42,32,50,46,48,41,32,45,32,49,46,48,59,10,9,118,101,99,51,32,78,32,61,32,116,101,120,101,108,67,111,111,114,100,84,111,86,101,99,40,117,118,44,32,102,97,99,101,95,105,100,41,59,10,10,35,105,102,100,101,102,32,85,83,69,95,68,73,82,69,67,84,95,87,82,73,84,69,10,10,35,105,102,100,101,102,32,85,83,69,95,83,79,85,82,67,69,95,80,65,78,79,82,65,77,65,10,10,9,103,108,95,70,114,97,103,67,111,108,111,114,32,61,32,118,101,99,52,40,116,101,120,116,117,114,101,80,97,110,111,114,97,109,97,40,115,111,117,114,99,101,95,112,97,110,111,114,97,109,97,44,32,78,41,46,114,103,98,44,32,49,46,48,41,59,10,35,101,108,115,101,10,10,9,103,108,95,70,114,97,103,67,111,108,111,114,32,61,32,118,101,99,52,40,116,101,120,116,117,114,101,67,117,98,101,40,115,111,117,114,99,101,95,99,117,98,101,44,32,78,41,46,114,103,98,44,32,49,46,48,41,59,10,35,101,110,100,105,102,32,47,47,85,83,69,95,83,79,85,82,67,69,95,80,65,78,79,82,65,77,65,10,10,35,101,108,115,101,10,10,9,118,101,99,52,32,115,117,109,32,61,32,118,101,99,52,40,48,46,48,41,59,10,10,9,102,111,114,32,40,105,110,116,32,115,97,109,112,108,101,95,110,117,109,32,61,32,48,59,32,115,97,109,112,108,101,95,110,117,109,32,60,32,83,65,77,80,76,69,95,67,79,85,78,84,59,32,115,97,109,112,108,101,95,110,117,109,43,43,41,32,123,10,9,9,118,101,99,50,32,120,105,32,61,32,72,97,109,109,101,114,115,108,101,121,40,115,97,109,112,108,101,95,110,117,109,44,32,83,65,77,80,76,69,95,67,79,85,78,84,41,59,10,10,9,9,118,101,99,51,32,72,32,61,32,73,109,112,111,114,116,97,110,99,101,83,97,109,112,108,101,71,71,88,40,120,105,44,32,114,111,117,103,104,110,101,115,115,44,32,78,41,59,10,9,9,118,101,99,51,32,86,32,61,32,78,59,10,9,9,118,101,99,51,32,76,32,61,32,40,50,46,48,32,42,32,100,111,116,40,86,44,32,72,41,32,42,32,72,32,45,32,86,41,59,10,10,9,9,102,108,111,97,116,32,78,100,111,116,76,32,61,32,99,108,97,109,112,40,100,111,116,40,78,44,32,76,41,44,32,48,46,48,44,32,49,46,48,41,59,10,10,9,9,105,102,32,40,78,100,111,116,76,32,62,32,48,46,48,41,32,123,10,10,35,105,102,100,101,102,32,85,83,69,95,83,79,85,82,67,69,95,80,65,78,79,82,65,77,65,10,9,9,9,118,101,99,51,32,118,97,108,32,61,32,116,101,120,116,117,114,101,80,97,110,111,114,97,109,97,40,115,111,117,114,99,101,95,112,97,110,111,114,97,109,97,44,32,76,41,46,114,103,98,59,10,35,101,108,115,101,10,9,9,9,118,101,99,51,32,118,97,108,32,61,32,116,101,120,116,117,114,101,67,117,98,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,44,32,76,44,32,48,46,48,41,46,114,103,98,59,10,35,101,110,100,105,102,10,9,9,9,47,47,109,105,120,32,117,115,105,110,103,32,76,105,110,101,97,114,44,32,116,111,32,97,112,112,114,111,120,105,109,97,116,101,32,104,105,103,104,32,101,110,100,32,98,97,99,107,45,101,110,100,10,9,9,9,118,97,108,32,61,32,109,105,120,40,112,111,119,40,40,118,97,108,32,43,32,118,101,99,51,40,48,46,48,53,53,41,41,32,42,32,40,49,46,48,32,47,32,40,49,46,48,32,43,32,48,46,48,53,53,41,41,44,32,118,101,99,51,40,50,46,52,41,41,44,32,118,97,108,32,42,32,40,49,46,48,32,47,32,49,50,46,57,50,41,44,32,118,101,99,51,40,108,101,115,115,84,104,97,110,40,118,97,108,44,32,118,101,99,51,40,48,46,48,52,48,52,53,41,41,41,41,59,10,10,9,9,9,115,117,109,46,114,103,98,32,43,61,32,118,97,108,32,42,32,78,100,111,116,76,59,10,10,9,9,9,115,117,109,46,97,32,43,61,32,78,100,111,116,76,59,10,9,9,125,10,9,125,10,10,9,115,117,109,32,47,61,32,115,117,109,46,97,59,10,10,9,118,101,99,51,32,97,32,61,32,118,101,99,51,40,48,46,48,53,53,41,59,10,9,115,117,109,46,114,103,98,32,61,32,109,105,120,40,40,118,101,99,51,40,49,46,48,41,32,43,32,97,41,32,42,32,112,111,119,40,115,117,109,46,114,103,98,44,32,118,101,99,51,40,49,46,48,32,47,32,50,46,52,41,41,32,45,32,97,44,32,49,50,46,57,50,32,42,32,115,117,109,46,114,103,98,44,32,118,101,99,51,40,108,101,115,115,84,104,97,110,40,115,117,109,46,114,103,98,44,32,118,101,99,51,40,48,46,48,48,51,49,51,48,56,41,41,41,41,59,10,10,9,103,108,95,70,114,97,103,67,111,108,111,114,32,61,32,118,101,99,52,40,115,117,109,46,114,103,98,44,32,49,46,48,41,59,10,35,101,110,100,105,102,10,125,10,		0};

		static const int _fragment_code_start=25;
		setup(_conditional_strings,6,_uniform_strings,3,_attribute_pairs,2, _texunit_pairs,3,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

