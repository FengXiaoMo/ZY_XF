//
//  RWRequestIndex.h
//  ZhongYuSubjectHubKY
//
//  Created by zhongyu on 16/6/21.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#ifndef RWRequestIndex_h
#define RWRequestIndex_h

#define APP_ID @"1133369306"

#define APP_STORE_URL @"http://itunes.apple.com/cn/lookup?id="APP_ID
#define TO_APP_STORE @"itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id="APP_ID

#define UMengCommunityAppkey @"5780521867e58e49280043b0"
#define UMengCommunityAppSecret @"f1b6300f5e970785faef0055a18e3a0e"

#define MOB_CLICK @"5780521867e58e49280043b0"

#define NAV_TITLE @"消防资讯"

#define MAIN_INDEX [NSURL URLWithString:@"http://jz.zhongyuedu.com/list.php?fid=55"]
//>> 资讯
#define SERVERS_INDEX @"http://api.zhongyuedu.com/tik/xf/examtype.php"
//>> 题库目录
#define YY_INDEX @"http://api.zhongyuedu.com/tik/xf/yy_list.php"
//>> 预约列表
#define RECOMMEND @"http://www.zhongyuedu.com/api/tuijian.php"
//>> 推荐列表
#define UPDATE_USERNAME @"http://api.zhongyuedu.com/tik/xf/yy_post.php"
//>> 上传
#define EXPERIENCE_TIMES_URL @"http://api.zhongyuedu.com/tik/xf/limit.php"
//>> 天王盖地虎
#define RECEIVE_PUSH @"http://www.zhongyuedu.com/api/url.php"
//>> push
#define LOGIN_URL @"http://api.zhongyuedu.com/tik/xf/login.php"
//>> 登录
#define REGISTER_URL @"http://api.zhongyuedu.com/tik/xf/register.php"
//>> 注册
#define REPLACE_PASSWORD_URL @"http://api.zhongyuedu.com/tik/xf/change_pwd.php"
//>> 重置密码
#define ABOUT_US @"http://www.zhongyuedu.com/api/tk_aboutUs.html"
//>> 关于我们
#define README @"http://www.zhongyuedu.com/api/tk_yj/tk_ios_usage.htm"
//>> 使用说明
#define VERIFICATION_PHONENUMBER @"http://api.zhongyuedu.com/comm/code.php"

#endif /* RWRequestIndex_h */
