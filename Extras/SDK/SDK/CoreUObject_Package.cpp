/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Static Fields
	// --------------------------------------------------
	class TUObjectArray*                                        UObject::GObjects = nullptr;                             // 0x0000(0x0008) PREDEFINED PROPERTY

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FRotator::FRotator()
	{
		Pitch = 0;
		Yaw = 0;
		Roll = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              pitch
	 * 		float                                              yaw
	 * 		float                                              roll
	 */
	FRotator::FRotator(float pitch, float yaw, float roll)
	{
		Pitch = pitch;
		Yaw = yaw;
		Roll = roll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator +(const FRotator& other) const
	{
		return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator -(const FRotator& other) const
	{
		return FRotator(Pitch - other.Pitch, Yaw - other.Yaw, Roll - other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator *(float scalar) const
	{
		return FRotator(Pitch * scalar, Yaw * scalar, Roll * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator *(const FRotator& other) const
	{
		return FRotator(Pitch * other.Pitch, Yaw * other.Yaw, Roll * other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator /(float scalar) const
	{
		return FRotator(Pitch / scalar, Yaw / scalar, Roll / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator /(const FRotator& other) const
	{
		return FRotator(Pitch / other.Pitch, Yaw / other.Yaw, Roll / other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator =(const FRotator& other)
	{
		Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator +=(const FRotator& other)
	{
		Pitch += other.Pitch;
		Yaw += other.Yaw;
		Roll += other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator -=(const FRotator& other)
	{
		Pitch -= other.Pitch;
		Yaw -= other.Yaw;
		Roll -= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const float                                        other
	 */
	FRotator& FRotator::operator *=(const float other)
	{
		Pitch *= other;
		Yaw *= other;
		Roll *= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	float FRotator::Size() const
	{
		return sqrt(Pitch * Pitch + Yaw * Yaw + Roll * Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FRotator FRotator::Clamp() const
	{
		FRotator r = { Pitch, Yaw, Roll };
		if (r.Yaw > 180.f)
			r.Yaw -= 360.f;
		else if (r.Yaw < -180.f)
			r.Yaw += 360.f;
		if (r.Pitch > 180.f)
			r.Pitch -= 360.f;
		else if (r.Pitch < -180.f)
			r.Pitch += 360.f;
		if (r.Pitch < -89.f)
			r.Pitch = -89.f;
		else if (r.Pitch > 89.f)
			r.Pitch = 89.f;
		r.Roll = 0.f;
		return r;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FVector::FVector()
	{
		X = 0;
		Y = 0;
		Z = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              x
	 * 		float                                              y
	 * 		float                                              z
	 */
	FVector::FVector(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator +(const FVector& other) const
	{
		return FVector(X + other.X, Y + other.Y, Z + other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator -(const FVector& other) const
	{
		return FVector(X - other.X, Y - other.Y, Z - other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator *(float scalar) const
	{
		return FVector(X * scalar, Y * scalar, Z * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator *(const FVector& other) const
	{
		return FVector(X * other.X, Y * other.Y, Z * other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator /(float scalar) const
	{
		return FVector(X / scalar, Y / scalar, Z / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator /(const FVector& other) const
	{
		return FVector(X / other.X, Y / other.Y, Z / other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator =(const FVector& other)
	{
		X = other.X;
		Y = other.Y;
		Z = other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator +=(const FVector& other)
	{
		X += other.X;
		Y += other.Y;
		Z += other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator -=(const FVector& other)
	{
		X -= other.X;
		Y -= other.Y;
		Z -= other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const float                                        other
	 */
	FVector& FVector::operator *=(const float other)
	{
		X *= other;
		Y *= other;
		Z *= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     b
	 */
	float FVector::Dot(const FVector& b) const
	{
		return (X * b.X) + (Y * b.Y) + (Z * b.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	float FVector::MagnitudeSqr() const
	{
		return Dot(*this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	float FVector::Magnitude() const
	{
		return std::sqrtf(MagnitudeSqr());
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FVector FVector::Unit() const
	{
		const float fMagnitude = Magnitude();
		return FVector(X / fMagnitude, Y / fMagnitude, Z / fMagnitude);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FRotator FVector::ToRotator() const
	{
		static constexpr float PI = 3.14159265359f;
		// Pitch, Yaw, Roll
		return FRotator(asinf(Z / Magnitude()) * 180.0f / PI, atan2f(Y, X) * 180.0f / PI, 0.0f);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     v
	 */
	float FVector::Distance(const FVector& v) const
	{
		return float(sqrtf(powf(v.X - X, 2.0) + powf(v.Y - Y, 2.0) + powf(v.Z - Z, 2.0)));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FVector2D::FVector2D()
	{
		X = 0;
		Y = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              x
	 * 		float                                              y
	 */
	FVector2D::FVector2D(float x, float y)
	{
		X = x;
		Y = y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator +(const FVector2D& other) const
	{
		return FVector2D(X + other.X, Y + other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator -(const FVector2D& other) const
	{
		return FVector2D(X - other.X, Y - other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator *(float scalar) const
	{
		return FVector2D(X * scalar, Y * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator *(const FVector2D& other) const
	{
		return FVector2D(X * other.X, Y * other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator /(float scalar) const
	{
		return FVector2D(X / scalar, Y / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator /(const FVector2D& other) const
	{
		return FVector2D(X / other.X, Y / other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator =(const FVector2D& other)
	{
		X = other.X;
		Y = other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator +=(const FVector2D& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator -=(const FVector2D& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const float                                        other
	 */
	FVector2D& FVector2D::operator *=(const float other)
	{
		X *= other;
		Y *= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FLinearColor::FLinearColor()
	{
		R = 0;
		G = 0;
		B = 0;
		A = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              r
	 * 		float                                              g
	 * 		float                                              b
	 * 		float                                              a
	 */
	FLinearColor::FLinearColor(float r, float g, float b, float a)
	{
		R = r;
		G = g;
		B = b;
		A = a;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FMatrix&                                     other
	 */
	FMatrix FMatrix::operator *(const FMatrix& other) const
	{
		FMatrix ret;
		
		ret.XPlane.X = XPlane.X * other.XPlane.X + XPlane.Y * other.YPlane.X + XPlane.Z * other.ZPlane.X + XPlane.W * other.WPlane.X;
		ret.XPlane.Y = XPlane.X * other.XPlane.Y + XPlane.Y * other.YPlane.Y + XPlane.Z * other.ZPlane.Y + XPlane.W * other.WPlane.Y;
		ret.XPlane.Z = XPlane.X * other.XPlane.Z + XPlane.Y * other.YPlane.Z + XPlane.Z * other.ZPlane.Z + XPlane.W * other.WPlane.Z;
		ret.XPlane.W = XPlane.X * other.XPlane.W + XPlane.Y * other.YPlane.W + XPlane.Z * other.ZPlane.W + XPlane.W * other.WPlane.W;
		
		ret.YPlane.X = YPlane.X * other.XPlane.X + YPlane.Y * other.YPlane.X + YPlane.Z * other.ZPlane.X + YPlane.W * other.WPlane.X;
		ret.YPlane.Y = YPlane.X * other.XPlane.Y + YPlane.Y * other.YPlane.Y + YPlane.Z * other.ZPlane.Y + YPlane.W * other.WPlane.Y;
		ret.YPlane.Z = YPlane.X * other.XPlane.Z + YPlane.Y * other.YPlane.Z + YPlane.Z * other.ZPlane.Z + YPlane.W * other.WPlane.Z;
		ret.YPlane.W = YPlane.X * other.XPlane.W + YPlane.Y * other.YPlane.W + YPlane.Z * other.ZPlane.W + YPlane.W * other.WPlane.W;
		
		ret.ZPlane.X = ZPlane.X * other.XPlane.X + ZPlane.Y * other.YPlane.X + ZPlane.Z * other.ZPlane.X + ZPlane.W * other.WPlane.X;
		ret.ZPlane.Y = ZPlane.X * other.XPlane.Y + ZPlane.Y * other.YPlane.Y + ZPlane.Z * other.ZPlane.Y + ZPlane.W * other.WPlane.Y;
		ret.ZPlane.Z = ZPlane.X * other.XPlane.Z + ZPlane.Y * other.YPlane.Z + ZPlane.Z * other.ZPlane.Z + ZPlane.W * other.WPlane.Z;
		ret.ZPlane.W = ZPlane.X * other.XPlane.W + ZPlane.Y * other.YPlane.W + ZPlane.Z * other.ZPlane.W + ZPlane.W * other.WPlane.W;
		
		ret.WPlane.X = WPlane.X * other.XPlane.X + WPlane.Y * other.YPlane.X + WPlane.Z * other.ZPlane.X + WPlane.W * other.WPlane.X;
		ret.WPlane.Y = WPlane.X * other.XPlane.Y + WPlane.Y * other.YPlane.Y + WPlane.Z * other.ZPlane.Y + WPlane.W * other.WPlane.Y;
		ret.WPlane.Z = WPlane.X * other.XPlane.Z + WPlane.Y * other.YPlane.Z + WPlane.Z * other.ZPlane.Z + WPlane.W * other.WPlane.Z;
		ret.WPlane.W = WPlane.X * other.XPlane.W + WPlane.Y * other.YPlane.W + WPlane.Z * other.ZPlane.W + WPlane.W * other.WPlane.W;
		
		return ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	FMatrix FTransform::ToMatrixWithScale() const
	{
		FMatrix OutMatrix;
		OutMatrix.WPlane.X = Translation.X;
		OutMatrix.WPlane.Y = Translation.Y;
		OutMatrix.WPlane.Z = Translation.Z;
		
		const float x2 = Rotation.X + Rotation.X;
		const float y2 = Rotation.Y + Rotation.Y;
		const float z2 = Rotation.Z + Rotation.Z;
		
		{
			const float xx2 = Rotation.X * x2;
			const float yy2 = Rotation.Y * y2;
			const float zz2 = Rotation.Z * z2;
		
			OutMatrix.XPlane.X = (1.0f - (yy2 + zz2)) * Scale3D.X;
			OutMatrix.YPlane.Y = (1.0f - (xx2 + zz2)) * Scale3D.Y;
			OutMatrix.ZPlane.Z = (1.0f - (xx2 + yy2)) * Scale3D.Z;
		}
		
		{
			const float yz2 = Rotation.Y * z2;
			const float wx2 = Rotation.W * x2;
		
			OutMatrix.ZPlane.Y = (yz2 - wx2) * Scale3D.Z;
			OutMatrix.YPlane.Z = (yz2 + wx2) * Scale3D.Y;
		}
		
		{
			const float xy2 = Rotation.X * y2;
			const float wz2 = Rotation.W * z2;
		
			OutMatrix.YPlane.X = (xy2 - wz2) * Scale3D.Y;
			OutMatrix.XPlane.Y = (xy2 + wz2) * Scale3D.X;
		}
		
		{
			const float xz2 = Rotation.X * z2;
			const float wy2 = Rotation.W * y2;
		
			OutMatrix.ZPlane.X = (xz2 + wy2) * Scale3D.Z;
			OutMatrix.XPlane.Z = (xz2 - wy2) * Scale3D.X;
		}
		
		OutMatrix.XPlane.W = 0.0f;
		OutMatrix.YPlane.W = 0.0f;
		OutMatrix.ZPlane.W = 0.0f;
		OutMatrix.WPlane.W = 1.0f;
		
		return OutMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	TUObjectArray& UObject::GetGlobalObjects()
	{
		return *GObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	std::string UObject::GetName() const
	{
		std::string name(Name.GetName());
		if (Name.Number > 0)
			name += '_' + std::to_string(Name.Number);
		auto pos = name.rfind('/');
		if (pos == std::string::npos)
			return name;
		return name.substr(pos + 1);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	std::string UObject::GetFullName() const
	{
		std::string name;
		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = Outer; p; p = p->Outer)
			{
				temp = p->GetName() + "." + temp;
			}
			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}
		return name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const std::string&                                 name
	 */
	UClass* UObject::FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		UClass*                                            cmp
	 */
	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
		{
			if (super == cmp)
				return true;
		}
		
		return false;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreUObject.Object.ExecuteUbergraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObject::ExecuteUbergraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFunction*                                   function
	 * 		void*                                              parms
	 */
	void UObject::ProcessEvent(class UFunction* function, void* parms)
	{
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 67)(this, function, parms);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGCObjectReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGCObjectReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextBuffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBuffer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStruct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScriptStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptStruct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 */
	UObject* UClass::CreateDefaultObject()
	{
		// return nullptr;
		return GetVFunction<UObject*(*)(UClass*)>(this, 115)(this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDelegateFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelegateFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USparseDelegateFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparseDelegateFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPackageMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPackageMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULinkerPlaceholderClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerPlaceholderClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULinkerPlaceholderExportObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerPlaceholderExportObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULinkerPlaceholderFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerPlaceholderFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectRedirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectRedirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEnumProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnumProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArrayProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArrayProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectPropertyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectPropertyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoolProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNumericProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNumericProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UByteProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UByteProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDoubleProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoubleProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFloatProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIntProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInt8Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt8Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt16Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt64Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInterfaceProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterfaceProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULazyObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULazyObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMapProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMulticastDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMulticastInlineDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastInlineDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMulticastSparseDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastSparseDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastSparseDelegateProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNameProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNameProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USetProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.SetProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoftObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoftClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftClassProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStrProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStrProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStructProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt16Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUInt32Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt32Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUInt64Property::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeakObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeakObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.PropertyWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMulticastDelegatePropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastDelegatePropertyWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastDelegatePropertyWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMulticastInlineDelegatePropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastInlineDelegatePropertyWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegatePropertyWrapper");
		return ptr;
	}

}


