#version 410 core
layout(location = 0) in vec3 vPosition;
layout(location = 1) in vec4 color;
layout (location = 2) in vec2 texCoord;

out vec4 ourColor;// 向fragment shader输出一个颜色
out vec2 TexCoord;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4(vPosition, 1.0f);
    ourColor = color;
    TexCoord = texCoord;
}