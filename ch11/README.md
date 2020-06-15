#### 11_10
vector的iterator支持<操作<br/>
list的iterator不支持<操作<br/>

#### 11_17
copy(v.begin(),v.end(),inserter(c,c.end()));//正确 <br/>
copy(v.begin(),v.end(),back_inserter(c)); //错误      multiset没有push_back这个操作，尾插法不适合 <br/>
copy(c.begin(),c.end(),inserter(v,v.end()));//正确 <br/>
copy(c.begin(),c.end(),back_inserter(v));//正确 <br/>
