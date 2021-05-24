### 装饰模式(Decorator Pattern)

装饰模式(Decorator Pattern) ：动态地给一个对象增加一些额外的职责(Responsibility)，就增加对象功能来说，装饰模式比生成子类实现更为灵活。其别名也可以称为包装器(Wrapper)，与适配器模式的别名相同，但它们适用于不同的场合。根据翻译的不同，装饰模式也有人称之为“油漆工模式”

主要作用： 1. 增强一个类的原有功能    2. 为一个类添加新的功能
装饰模式不会改变原有的类

透明装饰模式：没有改变接口，也没有新增方法，透明装饰模式可以无限装饰
半透明装饰模式：在原有类的基础上新增方法，需要区别对待 装饰前的对象和装饰后的对象

**优点**：

1. 比继承更加灵活
2. 可以动态地拓展一个对象的功能，通过配置文件在运行时选择不同的装饰器，实现不同的行为
3. 通过不同的具体装饰来进行排列组合，可以创造出不同行为的组合
4. 具体构建类和具体装饰类可以独立变化，用户可以根据需要增加新的构建类和装饰类，在使用时再进行组合，原有代码无需改变，符合 开闭原则


**缺点**: 

1. 多层装饰会增加理解和学习的难度，过度装饰容易产生较多的小对象
2. 这种比继承更加灵活机动的特性，也同时意味着装饰模式比继承更加易于出错，排错也很困难，对于多次装饰的对象，调试时寻找错误可能需要逐级排查，较为烦琐
