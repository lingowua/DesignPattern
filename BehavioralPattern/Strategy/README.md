### 策略模式(Strategy Pattern)

策略模式(Strategy Pattern)：定义一系列算法，将每一个算法封装起来，并让它们可以相互替换。策略模式让算法独立于使用它的客户而变化，也称为政策模式(Policy)

**优点**：

1. 开闭原则。 用户可以在不修改原有系统的基础上选择算法或行为，也可以灵活地增加新的算法或行为
2. 在运行时切换对象内的算法
3. 算法的实现和使用算法的代码隔离

**缺点**: 

1. 客户端必须知道所有的策略类，并自行决定使用哪一个策略类
2. 策略模式将造成产生很多策略类