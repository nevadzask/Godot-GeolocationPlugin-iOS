/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef BLEND_SHAPE_GLSL_GEN_HGLES3_120
#define BLEND_SHAPE_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class BlendShapeShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "BlendShapeShaderGLES3"; }
public:

	enum Conditionals {
		USE_2D_VERTEX,
		ENABLE_OCTAHEDRAL_COMPRESSION,
		ENABLE_TANGENT,
		ENABLE_COLOR,
		ENABLE_UV,
		ENABLE_UV2,
		ENABLE_SKELETON,
		ENABLE_BLEND,
		ENABLE_NORMAL,
	};

	enum Uniforms {
		BLEND_AMOUNT,
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
			"#define USE_2D_VERTEX\n",
			"#define ENABLE_OCTAHEDRAL_COMPRESSION\n",
			"#define ENABLE_TANGENT\n",
			"#define ENABLE_COLOR\n",
			"#define ENABLE_UV\n",
			"#define ENABLE_UV2\n",
			"#define ENABLE_SKELETON\n",
			"#define ENABLE_BLEND\n",
			"#define ENABLE_NORMAL\n",
		};

		static const char* _uniform_strings[]={
			"blend_amount",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback _feedbacks[]={
			{"vertex_out",-1},
			{"normal_out",8},
			{"tangent_out",2},
			{"color_out",3},
			{"uv_out",4},
			{"uv2_out",5},
			{"bone_out",6},
			{"weight_out",6},
		};

		static TexUnitPair *_texunit_pairs=NULL;
		static int *_shadow_texunits=NULL;
		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,47,42,10,102,114,111,109,32,86,105,115,117,97,108,83,101,114,118,101,114,58,10,10,65,82,82,65,89,95,86,69,82,84,69,88,61,48,44,10,65,82,82,65,89,95,78,79,82,77,65,76,61,49,44,10,65,82,82,65,89,95,84,65,78,71,69,78,84,61,50,44,10,65,82,82,65,89,95,67,79,76,79,82,61,51,44,10,65,82,82,65,89,95,84,69,88,95,85,86,61,52,44,10,65,82,82,65,89,95,84,69,88,95,85,86,50,61,53,44,10,65,82,82,65,89,95,66,79,78,69,83,61,54,44,10,65,82,82,65,89,95,87,69,73,71,72,84,83,61,55,44,10,65,82,82,65,89,95,73,78,68,69,88,61,56,44,10,42,47,10,10,35,105,102,100,101,102,32,85,83,69,95,50,68,95,86,69,82,84,69,88,10,35,100,101,102,105,110,101,32,86,70,79,82,77,65,84,32,118,101,99,50,10,35,101,108,115,101,10,35,100,101,102,105,110,101,32,86,70,79,82,77,65,84,32,118,101,99,51,10,35,101,110,100,105,102,10,10,47,42,32,73,78,80,85,84,32,65,84,84,82,73,66,83,32,42,47,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,86,70,79,82,77,65,84,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,50,41,32,105,110,32,118,101,99,52,32,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,59,10,35,101,108,115,101,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,41,32,105,110,32,118,101,99,51,32,110,111,114,109,97,108,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,47,47,32,112,97,99,107,101,100,32,105,110,116,111,32,110,111,114,109,97,108,95,97,116,116,114,105,98,32,122,119,32,99,111,109,112,111,110,101,110,116,10,35,101,108,115,101,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,50,41,32,105,110,32,118,101,99,52,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,67,79,76,79,82,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,51,41,32,105,110,32,118,101,99,52,32,99,111,108,111,114,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,52,41,32,105,110,32,118,101,99,50,32,117,118,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,50,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,53,41,32,105,110,32,118,101,99,50,32,117,118,50,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,54,41,32,105,110,32,105,118,101,99,52,32,98,111,110,101,95,97,116,116,114,105,98,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,55,41,32,105,110,32,118,101,99,52,32,119,101,105,103,104,116,95,97,116,116,114,105,98,59,10,35,101,110,100,105,102,10,10,47,42,32,66,76,69,78,68,32,65,84,84,82,73,66,83,32,42,47,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,66,76,69,78,68,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,56,41,32,105,110,32,104,105,103,104,112,32,86,70,79,82,77,65,84,32,118,101,114,116,101,120,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,57,41,32,105,110,32,118,101,99,51,32,110,111,114,109,97,108,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,48,41,32,105,110,32,118,101,99,52,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,67,79,76,79,82,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,49,41,32,105,110,32,118,101,99,52,32,99,111,108,111,114,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,50,41,32,105,110,32,118,101,99,50,32,117,118,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,50,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,51,41,32,105,110,32,118,101,99,50,32,117,118,50,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,52,41,32,105,110,32,105,118,101,99,52,32,98,111,110,101,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,53,41,32,105,110,32,118,101,99,52,32,119,101,105,103,104,116,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,35,101,110,100,105,102,10,10,35,101,110,100,105,102,10,10,47,42,32,79,85,84,80,85,84,83,32,42,47,10,10,111,117,116,32,86,70,79,82,77,65,84,32,118,101,114,116,101,120,95,111,117,116,59,32,47,47,116,102,98,58,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,78,79,82,77,65,76,10,111,117,116,32,118,101,99,51,32,110,111,114,109,97,108,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,78,79,82,77,65,76,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,111,117,116,32,118,101,99,52,32,116,97,110,103,101,110,116,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,67,79,76,79,82,10,111,117,116,32,118,101,99,52,32,99,111,108,111,114,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,67,79,76,79,82,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,10,111,117,116,32,118,101,99,50,32,117,118,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,85,86,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,50,10,111,117,116,32,118,101,99,50,32,117,118,50,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,85,86,50,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,111,117,116,32,105,118,101,99,52,32,98,111,110,101,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,111,117,116,32,118,101,99,52,32,119,101,105,103,104,116,95,111,117,116,59,32,47,47,116,102,98,58,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,118,101,99,51,32,111,99,116,95,116,111,95,118,101,99,51,40,118,101,99,50,32,101,41,32,123,10,9,118,101,99,51,32,118,32,61,32,118,101,99,51,40,101,46,120,121,44,32,49,46,48,32,45,32,97,98,115,40,101,46,120,41,32,45,32,97,98,115,40,101,46,121,41,41,59,10,9,102,108,111,97,116,32,116,32,61,32,109,97,120,40,45,118,46,122,44,32,48,46,48,41,59,10,9,118,46,120,121,32,43,61,32,116,32,42,32,45,115,105,103,110,40,118,46,120,121,41,59,10,9,114,101,116,117,114,110,32,110,111,114,109,97,108,105,122,101,40,118,41,59,10,125,10,35,101,110,100,105,102,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,66,76,69,78,68,10,10,9,118,101,114,116,101,120,95,111,117,116,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,118,101,114,116,101,120,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,78,79,82,77,65,76,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,9,110,111,114,109,97,108,95,111,117,116,32,61,32,110,111,114,109,97,108,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,111,99,116,95,116,111,95,118,101,99,51,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,120,121,41,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,108,115,101,10,9,110,111,114,109,97,108,95,111,117,116,32,61,32,110,111,114,109,97,108,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,110,111,114,109,97,108,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,9,116,97,110,103,101,110,116,95,111,117,116,46,120,121,122,32,61,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,95,98,108,101,110,100,46,120,121,122,32,43,32,111,99,116,95,116,111,95,118,101,99,51,40,118,101,99,50,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,122,44,32,97,98,115,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,119,41,32,42,32,50,46,48,32,45,32,49,46,48,41,41,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,9,116,97,110,103,101,110,116,95,111,117,116,46,119,32,61,32,115,105,103,110,40,116,97,110,103,101,110,116,95,97,116,116,114,105,98,95,98,108,101,110,100,46,119,41,59,10,35,101,108,115,101,10,9,116,97,110,103,101,110,116,95,111,117,116,46,120,121,122,32,61,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,95,98,108,101,110,100,46,120,121,122,32,43,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,120,121,122,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,9,116,97,110,103,101,110,116,95,111,117,116,46,119,32,61,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,95,98,108,101,110,100,46,119,59,32,47,47,106,117,115,116,32,99,111,112,121,44,32,110,111,32,112,111,105,110,116,32,105,110,32,98,108,101,110,100,105,110,103,32,104,105,115,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,67,79,76,79,82,10,10,9,99,111,108,111,114,95,111,117,116,32,61,32,99,111,108,111,114,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,99,111,108,111,114,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,10,10,9,117,118,95,111,117,116,32,61,32,117,118,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,117,118,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,50,10,10,9,117,118,50,95,111,117,116,32,61,32,117,118,50,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,117,118,50,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,10,9,98,111,110,101,95,111,117,116,32,61,32,98,111,110,101,95,97,116,116,114,105,98,95,98,108,101,110,100,59,10,9,119,101,105,103,104,116,95,111,117,116,32,61,32,119,101,105,103,104,116,95,97,116,116,114,105,98,95,98,108,101,110,100,32,43,32,119,101,105,103,104,116,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,101,108,115,101,32,47,47,69,78,65,66,76,69,95,66,76,69,78,68,10,10,9,118,101,114,116,101,120,95,111,117,116,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,78,79,82,77,65,76,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,9,110,111,114,109,97,108,95,111,117,116,32,61,32,111,99,116,95,116,111,95,118,101,99,51,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,120,121,41,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,108,115,101,10,9,110,111,114,109,97,108,95,111,117,116,32,61,32,110,111,114,109,97,108,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,84,65,78,71,69,78,84,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,79,67,84,65,72,69,68,82,65,76,95,67,79,77,80,82,69,83,83,73,79,78,10,9,116,97,110,103,101,110,116,95,111,117,116,46,120,121,122,32,61,32,111,99,116,95,116,111,95,118,101,99,51,40,118,101,99,50,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,122,44,32,97,98,115,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,119,41,32,42,32,50,46,48,32,45,32,49,46,48,41,41,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,9,116,97,110,103,101,110,116,95,111,117,116,46,119,32,61,32,115,105,103,110,40,110,111,114,109,97,108,95,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,119,41,59,10,35,101,108,115,101,10,9,116,97,110,103,101,110,116,95,111,117,116,46,120,121,122,32,61,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,120,121,122,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,9,116,97,110,103,101,110,116,95,111,117,116,46,119,32,61,32,116,97,110,103,101,110,116,95,97,116,116,114,105,98,46,119,59,32,47,47,106,117,115,116,32,99,111,112,121,44,32,110,111,32,112,111,105,110,116,32,105,110,32,98,108,101,110,100,105,110,103,32,104,105,115,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,67,79,76,79,82,10,10,9,99,111,108,111,114,95,111,117,116,32,61,32,99,111,108,111,114,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,10,10,9,117,118,95,111,117,116,32,61,32,117,118,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,85,86,50,10,10,9,117,118,50,95,111,117,116,32,61,32,117,118,50,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,78,65,66,76,69,95,83,75,69,76,69,84,79,78,10,10,9,98,111,110,101,95,111,117,116,32,61,32,98,111,110,101,95,97,116,116,114,105,98,59,10,9,119,101,105,103,104,116,95,111,117,116,32,61,32,119,101,105,103,104,116,95,97,116,116,114,105,98,32,42,32,98,108,101,110,100,95,97,109,111,117,110,116,59,10,35,101,110,100,105,102,10,10,35,101,110,100,105,102,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,48,46,48,41,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,125,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,		0};

		static const int _fragment_code_start=221;
		setup(_conditional_strings,9,_uniform_strings,1,_attribute_pairs,0, _texunit_pairs,0, _shadow_texunits,0,_ubo_pairs,0,_feedbacks,8,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

