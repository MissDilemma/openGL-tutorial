//
//  camera.cpp
//  tutorial02
//
//  Created by zctech on 16/6/12.
//  Copyright (c) 2016年 ltaosd. All rights reserved.
//

#include "camera.h"

Camera::Camera(){
    this->m_vCameraPosition = glm::vec3(0.0f, 0.0f,  1.0f);
    this->m_vTargetPosition = glm::vec3(0.0f, 0.0f, 0.0f);
    this->m_vLookVector = glm::vec3(0.0f, 0.0f, -1.0f);
    this->m_vUpVector   = glm::vec3(0.0f, 1.0f,  0.0f);
    this->m_vRightVector = glm::vec3(0.0f, 0.0f, 1.0f);

}

void Camera::setCameraPosition(glm::vec3 *pVector)
{
    this->m_vLookVector = *pVector;
}

void Camera::setTargetPosition(glm::vec3 *pVector)
{
    this->m_vTargetPosition = *pVector;
}

void Camera::setViewMatrix(glm::mat4x4 *pMatrix)
{
    this->m_matView = *pMatrix;
    
}

void Camera::setProjMatrix(glm::mat4x4 *pMatrix)
{
    this->m_matProj = *pMatrix;
}

void Camera::moveAlongLookVec(GLfloat fUnits)
{
    m_vCameraPosition += m_vLookVector * fUnits;
    m_vTargetPosition += m_vLookVector * fUnits;
}

void Camera::moveAlongRightVec(GLfloat fUnits)
{
    m_vCameraPosition += m_vRightVector * fUnits;
    m_vTargetPosition += m_vRightVector * fUnits;
}

void Camera::moveAlongUpVec(GLfloat fUnits)
{
    m_vCameraPosition += m_vUpVector * fUnits;
    m_vTargetPosition += m_vUpVector * fUnits;
}

void Camera::rotationLookVec(GLfloat fAngle)
{
    
}

void Camera::rotationRightVec(GLfloat fAngle)
{
    
}

void Camera::rotationUpVec(GLfloat fAngle)
{
    
}

