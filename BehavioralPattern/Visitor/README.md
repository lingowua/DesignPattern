### 访问者模式(Visitor Pattern)

访问者模式(Visitor Pattern) : 表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作

**优点**：

1. 开闭原则。 你可以引入在不同类对象上执行的新行为， 且无需对这些类做出修改
2. 单一职责原则。 可将同一行为的不同版本移到同一个类中

**缺点**: 

1. 每次在元素层次结构中添加或移除一个类时， 你都要更新所有的访问者
2. 在访问者同某个元素进行交互时， 它们可能没有访问元素私有成员变量和方法的必要权限