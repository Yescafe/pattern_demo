#ifndef _MEDIATOR_HPP_
#define _MEDIATOR_HPP_

class Colleague;

class Mediator {
public:
    virtual ~Mediator();
    virtual void DoActionFromAtoB() = 0;
    virtual void DoActionFromBtoA() = 0;
protected:
    Mediator();
};

class ConcreteMediator : public Mediator {
public:
    ConcreteMediator();
    ConcreteMediator(Colleague* clgA, Colleague* clgB);
    ~ConcreteMediator();
    void SetConcreteColleagueA(Colleague* clgA);
    void SetConcreteColleagueB(Colleague* clgB);
    Colleague* GetConcreteColleagueA();
    Colleague* GetConcreteColleagueB();
    void IntroColleague(Colleague* clgA, Colleague* clgB);
    void DoActionFromAtoB();
    void DoActionFromBtoA();
private:
    Colleague* clgA;
    Colleague* clgB;
};

#endif  /* _MEDIATOR_HPP_ */
