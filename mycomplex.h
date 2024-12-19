#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>
using namespace std;

/**
 * @class Complex
 * @brief ����� ��� ������������� � ������ � ������������ �������.
 *
 * ���� ����� ������������� ���������� ��� ���������� �������������� ��������
 * ��� ������������ �������, ������� ��������, ���������, ���������, ������� � ������.
 * ����� ������� ������ ��� ��������� �������� � ���������� ������ ������������ �����.
 */
class Complex {
    double Re; ///< ������������ ����� ������������ �����
    double Im; ///< ������ ����� ������������ �����

public:
    /**
     * @brief �����������, ���������������� ����������� �����.
     *
     * @param aRe ������������ ����� ������������ ����� (�� ��������� 0)
     * @param aIm ������ ����� ������������ ����� (�� ��������� 0)
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief ����������� �����������.
     *
     * @param aRval ����������� �����, ������� ���������� �����������
     */
    Complex(const Complex& aRval);

    /**
     * @brief ����������.
     * ���������� ������������ � ������ ����� �� 0.
     */
    ~Complex();

    /**
     * @brief ������������� ����� �������� ��� ������������ � ������ ������.
     *
     * @param aRe ������������ �����
     * @param aIm ������ ����� (�� ��������� 0)
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief �������� ���������� � ���� double.
     * ���������� ������ ������������ �����.
     *
     * @return ������ ������������ �����.
     */
    operator double();

    /**
     * @brief ��������� ������ ������������ �����.
     *
     * @return ������ ������������ �����.
     */
    double abs();

    /**
     * @brief �������� ����� ������������ �����.
     *
     * @param stream ����� �����
     * @param a ����������� �����
     * @return ����� �����
     */
    friend istream& operator>>(istream& stream, Complex& a);

    /**
     * @brief �������� ������ ������������ �����.
     *
     * @param stream ����� ������
     * @param a ����������� �����
     * @return ����� ������
     */
    friend ostream& operator<<(ostream& stream, Complex& a);

    /**
     * @brief �������� �������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, ������� ����� ��������
     * @return ��������� ��������
     */
    Complex operator+(const Complex& aRval);

    /**
     * @brief �������� ��������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, ������� ����� �������
     * @return ��������� ���������
     */
    Complex operator-(const Complex& aRval);

    /**
     * @brief �������� �������� ������������ ����� � ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ��������� ��������
     */
    Complex operator+(const double& aRval);

    /**
     * @brief �������� �������� ����� ���� double � ������������ �����.
     *
     * @param aLval ����� ���� double
     * @param aRval ����������� �����
     * @return ��������� ��������
     */
    friend Complex operator+(const double& aLval, const Complex& aRval);

    /**
     * @brief �������� ��������� ����� ���� double �� ������������ �����.
     *
     * @param aRval ����� ���� double
     * @return ��������� ���������
     */
    Complex operator-(const double& aRval);

    /**
     * @brief �������� ��������� ����� ���� double �� ������������ ����� (�������� �������).
     *
     * @param aLval ����� ���� double
     * @param aRval ����������� �����
     * @return ��������� ���������
     */
    friend Complex operator-(const double& aLval, const Complex& aRval);

    /**
     * @brief �������� ��������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, � ������� ����� ��������
     * @return ��������� ���������
     */
    Complex operator*(const Complex& aRval);

    /**
     * @brief �������� ��������� ������������ ����� �� ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ��������� ���������
     */
    Complex operator*(const double& aRval);

    /**
     * @brief �������� ��������� ����� ���� double �� ����������� �����.
     *
     * @param aLval ����� ���� double
     * @param aRval ����������� �����
     * @return ��������� ���������
     */
    friend Complex operator*(const double& aLval, const Complex& aRval);

    /**
     * @brief �������� ������� ������������ ����� �� ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ��������� �������
     */
    Complex operator/(const double& aRval);

    /**
     * @brief �������� ������������ ��� �������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, ������� ����� ��������
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator+=(const Complex& aRval);

    /**
     * @brief �������� ������������ ��� ��������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, ������� ����� �������
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator-=(const Complex& aRval);

    /**
     * @brief �������� ������������ ��� ��������� ���� ����������� �����.
     *
     * @param aRval ����������� �����, � ������� ����� ��������
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator*=(const Complex& aRval);

    /**
     * @brief �������� ������������ ��� �������� ������������ ����� � ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator+=(const double& aRval);

    /**
     * @brief �������� ������������ ��� ��������� ����� ���� double �� ������������ �����.
     *
     * @param aRval ����� ���� double
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator-=(const double& aRval);

    /**
     * @brief �������� ������������ ��� ��������� ������������ ����� �� ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator*=(const double& aRval);

    /**
     * @brief �������� ������������ ��� ������� ������������ ����� �� ����� ���� double.
     *
     * @param aRval ����� ���� double
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator/=(const double& aRval);

    /**
     * @brief �������� ������������ ��� ����������� ������ ������������ ����� � ������.
     *
     * @param aRval ����������� �����, ������� ����� �����������
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator=(const Complex& aRval);

    /**
     * @brief �������� ������������ ��� ����������� ����� ���� double � ����������� �����.
     *
     * @param aRval ����� ���� double
     * @return ������ �� ������� ����������� �����
     */
    Complex& operator=(const double& aRval);
};

#endif
