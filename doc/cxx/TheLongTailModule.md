### ***The Long Tail Module***
经济学理论 The Long Tail
![img](http://img.mp.itc.cn/upload/20160527/70648737a66e43b3adf624bcdcd91042_th.jpg)
互联网领域：最热的那一小部分资源得到绝大部分的关注，而剩下的很大一部分资源却鲜少有人问津，这不仅成了资源利用上的浪费，也让很多口味偏小众的用户无法找到自己感兴趣的内容。

***推荐算法***
![img](http://img.mp.itc.cn/upload/20160527/386703906c8c4e418fd6006d20fad4f5_th.jpg)
输入参数是用户和item的各种属性和特征，包括年龄、性别、地域、商品的类别、发布时间等等。经过推荐算法处理后，返回一个按照用户喜好度排序的item列表
### 推荐算法大致分类
+ 基于流行度的算法
+ 协同过滤算法
+ 基于内容的算法
+ 基于模型的算法
+ 混合算法
#### 基于流行度的算法

暴力流行度推荐

#### 协同过滤算法（Collaborative Filtering,CF）

![img](http://img.mp.itc.cn/upload/20160527/643c952cd50e47cdb336f178ba7dd896_th.jpg)

+ 基于用户(user-based CF)
    - 分析各个用户对item的评价（通过浏览记录、购买记录等）；   
    
    - 依据用户对item的评价计算得出所有用户之间的相似度；    
    
- 选出与当前用户最相似的N个用户；    
    
    - 将这N个用户评价最高并且当前用户又没有浏览过的item推荐给当前用户
    
      ![img](http://img.mp.itc.cn/upload/20160527/765df80e9b2b450e8e7c13ba190165a6_th.jpg)
    
+ 基于物品(item-based CF)

  + 分析各个用户对item的浏览记录。
  + 依据浏览记录分析得出所有item之间的相似度；
  + 对于当前用户评价高的item，找出与之相似度最高的N个item；
  + 将这N个item推荐给用户。

