//
//  main.cpp
//  TemplateMethod
//
//  Created by lingowu on 2021/5/14.
//

#include "TemplateMethod.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main(int argc, const char * argv[]) {
    
    Company *alibaba = new Alibaba();
    alibaba->Recruit();
    
    cout << endl << endl;
    Company *bytedance = new ByteDance();
    bytedance->Recruit();

    SAFE_DELETE(alibaba);
    SAFE_DELETE(bytedance);
    
    return 0;
}
