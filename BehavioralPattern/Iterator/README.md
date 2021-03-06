### 迭代器模式(Iterator Pattern)

迭代器模式(Iterator Pattern): 提供一种方法访问一个容器对象中各个元素，而又不需暴露该对象的内部细节


**优点**：

1. 它支持以不同的方式遍历一个聚合对象
2. 满足单一职责原则和开闭原则
3. 更安全地访问内部数据

**缺点**: 

1. 由于迭代器模式将存储数据和遍历数据的职责分离，增加新的聚合类需要对应增加新的迭代器类，类的个数成对增加，这在一定程度上增加了系统的复杂性
