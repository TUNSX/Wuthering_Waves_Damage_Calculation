#include<iostream>
#include<string>
#include "Character_Lib.h"
using namespace std;
struct Character_Data
{
    double Character_Value;//��ɫ������ֵ
    double Weapon_Value;//����������ֵ
    double Percent_Weapon_Extra_Value;//��������ӳ���ֵ�ٷֱ�
    double Percent_Value;//�ٷֱ���ֵ�ӳ�
    double Fixed_Value;//�̶���ֵ�ӳ�
    double Percent_Critical_Chance;//������
    double Percent_Critical_Value;//�����˺�
    double Percent_Stat;//��ɫ��Ӧ���԰ٷֱȼӳ�
    double Percent_Skill_Boost;//��ɫ���ܰٷֱȼӳ�
    double Percent_Skill_Rate;//��Ӧ���ܱ��ʰٷֱ�
    double Percent_Rate_add;//���ܱ��������ٷֱ�
    double Percent_Hurt_Deeper;//��ɫ�˺�����ٷֱ�
    int    Character_Level;//��ɫ�ȼ�
    int    Character_Skill_Level;//��ɫ���ܵȼ�
    string Character_Name;//��ɫ����

};
int main()
{
    Character_Data C1;
    int C_Rarity = 0;
    int C_Num = 0;
    C1 = Character_Name(C_Rarity, C_Num);
    double Final_Value = (1 + C1.Percent_Value) * (C1.Weapon_Value + C1.Character_Value) + C1.Fixed_Value;
    cout << "��ѡ��Ľ�ɫ����Ϊ��" << C1.Character_Name << endl;
    cout << "�ý�ɫ�ȼ�Ϊ��" << C1.Character_Level << endl;
    cout << "�ý�ɫ�Ļ���������Ϊ��" << C1.Character_Value << endl;
    cout << "�ý�ɫ�ı�����Ϊ��" << C1.Percent_Critical_Chance << endl;
    cout << "�ý�ɫ�ı����˺�Ϊ��" << C1.Percent_Critical_Value << endl;
    cout << "�ý�ɫ����������������Ϊ��" << C1.Weapon_Value << endl;
    cout << "�ý�ɫʹ�õ���������Ķ�������Ϊ��" << C1.Percent_Weapon_Extra_Value << endl;
    cout << "�ý�ɫ�Ĺ̶��������ӳ�Ϊ��" << C1.Fixed_Value << endl;
    cout << "�ý�ɫ����幥����Ϊ��" << Final_Value << endl;
    cout << "�ý�ɫ�ļ��ܵȼ�Ϊ:" << C1.Character_Skill_Level << endl;
    cout << "�ý�ɫ�ļ��ܱ���Ϊ��" << C1.Percent_Skill_Rate << endl;

    return 0;
}