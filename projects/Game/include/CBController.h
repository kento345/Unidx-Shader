#pragma once

#include <UniDx.h>
#include <UniDx/Rigidbody.h>


class CBController : public UniDx::Behaviour
{
public:
    virtual void Start() override;
    virtual void Update() override;

private:
    UniDx::ComPtr<ID3D11Buffer> constantBuffer;    // シェーダー定数バッファ
    int colorIndex = 0;
	float waveHeight = 1.0f;
	float padding[3] = { 0.5f, 0.5f, 0.5f }; 
};


