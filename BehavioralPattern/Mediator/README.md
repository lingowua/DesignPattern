### 中介者模式(Mediator Pattern)

中介者模式(Mediator Pattern): 用一个中介对象来封装一系列的对象交互，中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。中介者模式又称为调停者模式。
MVC 框架，其中C（控制器）就是 M（模型）和 V（视图）的中介者。

**优点**：

1. 简化了对象之间的交互
2. 各个同事解耦，简化同事类的设计和实现
3. 减少子类生成

**缺点**: 

1. 中介者可能会成为超级类，导致中介类复杂，系统难以维护