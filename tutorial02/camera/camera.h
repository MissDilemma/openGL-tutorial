//
//  camera.h
//  tutorial02
//
//  Created by zctech on 16/6/12.
//  Copyright (c) 2016年 ltaosd. All rights reserved.
//

#ifndef __tutorial02__camera__
#define __tutorial02__camera__

#include <stdio.h>

#endif /* defined(__tutorial02__camera__) */

#include <gl/glew.h>
#include "../glm/glm.hpp"
class Camera
{
private:
    glm::vec3             m_vRightVector;        // 右分量向量
    glm::vec3             m_vUpVector;           // 上分量向量
    glm::vec3             m_vLookVector;         // 观察方向向量
    glm::vec3             m_vCameraPosition;     // 摄像机位置的向量
    glm::vec3             m_vTargetPosition;     // 目标观察位置的向量
    glm::mat4x4           m_matView;             // 取景变换矩阵
    glm::mat4x4           m_matProj;             // 投影变换矩阵

public:
    
    //四个Get系列函数
    void getProjMatrix(glm::mat4x4 *pMatrix)  { *pMatrix = m_matProj; }  //返回当前投影矩阵
    void getViewMatrix(glm::mat4x4 *pMatrix)  { *pMatrix = m_matView; }  //返回当前的取景变换矩阵
    void getCameraPosition(glm::vec3 *pVector)  { *pVector = m_vCameraPosition; } //返回当前摄像机位置矩阵
    void getLookVector(glm::vec3 *pVector) { *pVector = m_vLookVector; }  //返回当前的观察矩阵
    
    //四个Set系列函数，参数默认值NULL的，
    void setTargetPosition(glm::vec3 *pLookat = NULL);  //设置摄像机的目标观察位置向量
    void setCameraPosition(glm::vec3 *pVector = NULL); //设置摄像机所在的位置向量
    void setViewMatrix(glm::mat4x4 *pMatrix = NULL);  //设置取景变换矩阵
    void setProjMatrix(glm::mat4x4 *pMatrix = NULL);  //设置投影变换矩阵
    
public:
    // 沿各分量平移的三个函数
    void moveAlongRightVec(GLfloat fUnits);   // 沿right向量移动
    void moveAlongUpVec(GLfloat fUnits);      // 沿up向量移动
    void moveAlongLookVec(GLfloat fUnits);    // 沿look向量移动
    
    // 绕各分量旋转的三个函数
    void rotationRightVec(GLfloat fAngle);    // 绕right向量选择
    void rotationUpVec(GLfloat fAngle);       // 绕up向量旋转
    void rotationLookVec(GLfloat fAngle);     // 绕look向量旋转
    
public:
    //构造函数和析构函数
    Camera();  //构造函数
    virtual ~Camera(void);  //析构函数
    
};