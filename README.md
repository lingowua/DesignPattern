## 设计模式 by C++ in Xcode project

### 什么是设计模式

*[Design Pattern is] a solution to a problem in a context.*

设计模式是针对特定上下文的特定问题的解决方案，解决某类问题的通用模板。

#### 什么是模式

模式是一种可复用的解决方案，可用于解决软件设计中遇到的常见问题

##### 三大优点

- 模式是已经验证的解决方案
- 模式很容易被复用
- 模式富有表达力，可以帮助轻松地表达所实现的大型解决方案

### 总原则： **高内聚，低耦合**

### 设计模式六大原则

#### 1. **单一职责原则（Single Responsibility Principle, SRP）**

一个类应该只做一件事，有且仅有一个原因引起类的变更

**好处**：类的复杂度降低、可读性提高、可维护性提高、扩展性提高、降低了变更引起的风险

#### 2. **里氏替换原则（Liskov Substitution Principle, LSP）**

子类应该可以完全替换父类。也就是说在使用继承时，只扩展新功能，而不要破坏父类原有的功能。如果子类不能完整地实现父类的方法，建议通过依赖、聚合、组合等关系代替继承

**好处**：增强程序的健壮性，即使增加了子类，原有的子类还可以继续运行

#### 3. **依赖倒置原则（Dependence Inversion Principle, DIP）**

细节应该依赖于抽象，抽象不应依赖于细节。把抽象层放在程序设计的高层，并保持稳定，程序的细节变化由低层的实现层来完成。核心就是**面向接口编程**

**好处**：减少需求变化引起的工作量。使并行开发更友好

#### 4. **接口隔离原则（Interface Segregation Principle, ISP）**

客户端不应依赖它不需要的接口。一个类对另一个类的依赖应该建立在最小的接口上，重点不是隔离接口，而是分离接口

**好处**：提高内聚，减少对外交互

#### 5. **迪米特法则（Law of Demeter, LoD）**

又名「最少知道原则」，一个类不应知道自己操作的类的细节，换言之，只和朋友谈话，不和朋友的朋友谈话。核心就是类间解耦

**好处**：减少耦合，提高代码复用率

#### 6. **开放封闭原则（Open Close Principle, OCP）**

一个软件实体如类、模块和函数应该对修改封闭，对扩展开放

**好处**：提高项目稳定性和灵活性

**概括**：单一职责原则告诉我们实现类要职责单一；里氏替换原则告诉我们不要破坏继承体系；依赖倒置原则告诉我们要面向接口编程；接口隔离原则告诉我们在设计接口的时候要精简单一；迪米特法则告诉我们要降低耦合。而开闭原则是总纲，它告诉我们要对扩展开放，对修改关闭。

7. **组合/聚合复用原则（Composite/Aggregate Reuse Principle, CPR）**

优先使用组合/聚合，而不是类继承

### [创建型模式](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern)

0. [简单工厂模式（Simple Factory）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/SimpleFactory)
1. [工厂方法模式（Factory Method）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/FactoryMethod)
2. [抽象工厂模式（Abstract Factory）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/AbstractFactory)
3. [单例模式（Singleton）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/Singleton)
4. [原型模式（Prototype）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/Prototype)
5. [建造者模式（Builder）](https://github.com/ontheway12138/DesignPattern/tree/master/CreationalPattern/Builder)

### [结构型模式](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern)

1. [适配器模式（Adapter）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Adapter)
2. [桥接模式（Bridge）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Bridge)
3. [组合模式（Composite）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Composite)
4. [装饰模式（Decorator）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Decorator)
5. [外观模式（Facade）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Facade)
6. [享元模式（Flyweight）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Flyweight)
7. [代理模式（Proxy）](https://github.com/ontheway12138/DesignPattern/tree/master/StructuralPattern/Proxy)

### [行为型模式](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern)

1. [职责链模式（Chain of Responsibility）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/ChainOfResponsibility)
2. [命令模式（Command）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Command)
3. [解释器模式（Interpreter）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Interpreter)
4. [迭代器模式（Iterator）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Iterator)
5. [中介者模式（Mediator）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Mediator)
6. [备忘录模式（Memento）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Memento)
7. [观察者模式（Observer）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Observer)
8. [状态模式（State）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/State)
9. [策略模式（Strategy）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Strategy)
10. [模板方法模式（Template Method）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/TemplateMethod)
11. [访问者模式（Visitor）](https://github.com/ontheway12138/DesignPattern/tree/master/BehavioralPattern/Visitor)


#### 参考：

1. [图说设计模式](https://design-patterns.readthedocs.io/zh_CN/latest/index.html)
2. [Waleon](https://github.com/Waleon)/[DesignPatterns](https://github.com/Waleon/DesignPatterns)
3. [LeetCode 设计模式专栏](https://mp.weixin.qq.com/mp/appmsgalbum?action=getalbum&album_id=1461125104968318982)
