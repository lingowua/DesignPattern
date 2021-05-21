//
//  main.cpp
//  Composite
//
//  Created by lingowu on 2021/5/14.
//

#include "Composite.h"
#include "SafeComposite.h"

void Invoke(Component & c){
    c.process(0);
    cout << endl;
}

void Invoke(SafeComponent & c){
    c.process(0);
    cout << endl;
}

void safeTest() {
    SafeComposite root("root");
    SafeComposite treeNode1("treeNode1");
    SafeComposite treeNode2("treeNode2");
    SafeComposite treeNode3("treeNode3");
    SafeComposite treeNode4("treeNode4");
    SafeLeaf leaf1("leaf1");
    SafeLeaf leaf2("leaf2");
    
    root.add(&treeNode1);
    treeNode1.add(&treeNode2);
    treeNode2.add(&leaf1);
    root.add(&treeNode3);
    treeNode3.add(&treeNode4);
    treeNode4.add(&leaf2);
    
    //leaf1.add(&leaf2);
    
    Invoke(root);
    Invoke(leaf2);
    Invoke(treeNode3);
}

int main() {
    Composite root("root");
    Composite treeNode1("treeNode1");
    Composite treeNode2("treeNode2");
    Composite treeNode3("treeNode3");
    Composite treeNode4("treeNode4");
    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");
    
    root.add(&treeNode1);
    treeNode1.add(&treeNode2);
    treeNode2.add(&leaf1);
    root.add(&treeNode3);
    treeNode3.add(&treeNode4);
    treeNode4.add(&leaf2);
    
    leaf1.add(&leaf2);
    
    Invoke(root);
    Invoke(leaf2);
    Invoke(treeNode3);
    
    safeTest();
}
