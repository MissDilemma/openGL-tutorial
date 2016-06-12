//
//  LoadShader.h
//  test
//
//  Created by zctech on 16/3/29.
//  Copyright (c) 2016年 ltaosd. All rights reserved.
//

#ifndef __test__LoadShader__
#define __test__LoadShader__

#include <gl/glew.h>
#include <iostream>

#endif /* defined(__test__LoadShader__) */


using namespace std;
typedef struct {
    GLenum	   type;
    const char*  filename;
    GLuint	   shader;
} ShaderInfo;
GLuint LoadShaders(ShaderInfo*);