var app = getApp();
var server = require('../../utils/server');
Page({
  data: {
    img_url: 'http://appuat.huihuishenghuo.com/img/',
    filterdata: {},  //筛选条件数据
    showfilter: false, //是否显示下拉筛选
    showfilterindex: null, //显示哪个筛选类目
    cateindex: 0,  //一级分类索引
    cateid: null,  //一级分类id
    subcateindex: 0, //二级分类索引
    subcateid: null, //二级分类id
    areaindex: 0,  //一级城市索引
    areaid: null,  //一级城市id
    subareaindex: 0,  //二级城市索引
    subareaid: null, //二级城市id
    typeindex: 0,  //排序类型索引
    typeaid: null,  //排序类型id
    testdata: [], //服务集市列表
    scrolltop: null, //滚动位置
    page: 0  //分页
  },
}


