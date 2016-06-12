#version 410 core

/*
    test-1
 */
//uniform vec4 color;
in vec4 ourColor;
in vec2 TexCoord;
out vec4 color;
uniform sampler2D ourTexture;
void
main()
{
    color = texture(ourTexture, TexCoord);
//    outFcolor = vec4(0.0f, 1.0f, 0.0f, 1.0f);
}

/*
    test-2 uniform block
 */

//uniform color{
//    float r;
//    float g;
//    float b;
//    float p;
//};
//
//out vec4 outFcolor;
//
//void main()
//{
//    outFcolor = vec4(r, g, b, p);
//}