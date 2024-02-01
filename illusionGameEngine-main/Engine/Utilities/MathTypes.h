#pragma once
#include "..\Common\CommonHeaders.h"

// The namespace 'illusion::math' is used for mathematical constants and aliases for vector and matrix types, 
// specifically tailored for graphics operations using DirectX.
namespace illusion::math
{
    // Mathematical constants
    constexpr double pi = 3.14159265358979323846; // Pi, used in trigonometric calculations. 'double' for better precision.
    constexpr float epsilon = 1e-5f; // Epsilon, used for floating-point comparisons.

    // Only define these aliases if compiling for a 64-bit Windows platform, where DirectX is used.
#if defined(_WIN64)

// Alias definitions for DirectX simple math types for 2D, 3D, and 4D vectors.
    using v2 = DirectX::XMFLOAT2; // 2D vector
    using v2a = DirectX::XMFLOAT2A; // 2D vector (aligned)
    using v3 = DirectX::XMFLOAT3; // 3D vector
    using v3a = DirectX::XMFLOAT3A; // 3D vector (aligned)
    using v4 = DirectX::XMFLOAT4; // 4D vector
    using v4a = DirectX::XMFLOAT4A; // 4D vector (aligned)

    // Alias definitions for DirectX types representing vectors of unsigned 32-bit integers.
    using u32v2 = DirectX::XMUINT2; // 2D vector
    using u32v3 = DirectX::XMUINT3; // 3D vector
    using u32v4 = DirectX::XMUINT4; // 4D vector

    // Alias definitions for DirectX types representing vectors of signed 32-bit integers.
    using s32v2 = DirectX::XMINT2; // 2D vector
    using s32v3 = DirectX::XMINT3; // 3D vector
    using s32v4 = DirectX::XMINT4; // 4D vector

    // Alias definitions for DirectX matrix types. Matrices are fundamental in graphics for representing transformations.
    using m3x3 = DirectX::XMFLOAT3X3; // 3x3 matrix. Note: DirectX does not provide aligned 3x3 matrices.
    using m4x4 = DirectX::XMFLOAT4X4; // 4x4 matrix
    using m4x4a = DirectX::XMFLOAT4X4A; // 4x4 matrix (aligned)

    // End of the conditional compilation block for _WIN64.
#endif
}
