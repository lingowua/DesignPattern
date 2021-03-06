### 桥接模式(Bridge Pattern)

桥接模式(Bridge Pattern)：将抽象部分与它的实现部分分离，使它们都可以独立地变化。它是一种对象结构型模式，又称为柄体(Handle and Body)模式或接口(Interface)模式。
抽象和具体实现分离，同等级的接口可以互相组合

组合/聚合复用原则：优先使用组合/聚合，而不是类继承

**优点**：

1. 分离抽象接口及其实现部分，提供了比继承更好的解决方案
2. 桥接模式提高了系统的可扩充性，在两个变化维度中任意扩展一个维度，都不需要修改原有系统
3. 实现细节对客户透明，可以对用户隐藏实现细节

**缺点**: 

1. 桥接模式的引入会增加系统的理解与设计难度，由于聚合关联关系建立在抽象层，要求开发者针对抽象进行设计与编程
2. 桥接模式要求正确识别出系统中两个独立变化的维度，因此其使用范围具有一定的局限性
