/*C++���������-��װ
* ���Ժ���Ϊ
*/
#include <iostream>
using namespace std;

class Hero {
public:
    int   m_Id;
    int   m_Hp;

    void addHp(int hp) {
        m_Hp += hp;
    }

    void subHp(int hp) {
        m_Hp -= hp;
    }
};

int main() {

    Hero h;

    h.m_Id = 5;
    h.m_Hp = 100;
    h.addHp(100);
    cout << "Id Ϊ" << h.m_Id << "��Ӣ�ۣ�Ѫ����" << h.m_Hp << endl;
    h.subHp(100);
    cout << "Id Ϊ" << h.m_Id << "��Ӣ�ۣ�Ѫ����" << h.m_Hp << endl;

    return 0;
}
/*C++���������-��װ
* ����Ȩ��
*/
#include <iostream>
using namespace std;

class People {
public:
    int m_Id;

protected:
    int m_HouseId;

private:
    int m_PayPass;

public:
    void work() {
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }
private:
    void work1() {
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }

};


class Son : public People {
    void func() {
        m_Id = 1;
        m_HouseId = 4;
    }
};

int main() {
    People p;
    p.m_Id = 1;
    p.work();
    return 0;
}


/*C++���������-��װ
* class��struct
*/
#include <iostream>
using namespace std;

class C {
    int m_a;
};

struct S {
    int m_a;

    void func() {
        m_a = 666;
    }
};

int main() {
    C c;
    S s;
    s.m_a = 4;
    s.func();
    cout << s.m_a << endl;

    return 0;
}
/*C++���������-��װ
* ����˽�л�
*/
#include <iostream>
#include <string>
using namespace std;

class Hero {
public:
    void SetName(string name) {
        m_Name = name;
    }
    string GetName() {
        return m_Name;
    }

    int GetSkillCount() {
        return m_SkillCount;
    }

    void SetSpeed(int speed) {
        if (speed < 100 || speed > 500) {
            cout << "�ٶ����ò��Ϸ�" << endl;
            return;
        }
        m_Speed = speed;
    }

private:
    string   m_Name;
    int      m_SkillCount = 4;
    int      m_Speed;
};

int main() {
    Hero h;

    h.SetName("��ʥ");
    cout << "Ӣ�۵����ֽУ�" << h.GetName() << endl;
    cout << "Ӣ�۵ļ������ǣ�" << h.GetSkillCount() << endl;
    h.SetSpeed(666);


    return 0;
}
