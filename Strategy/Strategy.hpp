#ifndef _STRATEGY_HPP_
#define _STRATEGY_HPP_

class Strategy {
public:
    Strategy();
    virtual ~Strategy();
    virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();
    void AlgorithmInterface();
};

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();
    void AlgorithmInterface();
};

#endif  /* _STRATEGY_HPP_ */
