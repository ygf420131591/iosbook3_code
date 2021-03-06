//
//  CitiesViewController.h
//  JiaGeXian4iPhone
//
//  Created by 关东升 on 13-1-24.
//  本书网站：http://www.iosbook3.com
//  智捷iOS课堂：http://www.51work6.com
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  QQ：1575716557 邮箱：jylong06@163.com
//

#import <UIKit/UIKit.h>

@protocol CitiesViewControllerDelegate

- (void)closeCitiesView:(NSDictionary*)info;

@end

@interface CitiesViewController : UITableViewController
    <UISearchBarDelegate, UISearchDisplayDelegate>

//所有城市信息列表
@property (nonatomic,strong) NSArray* cities;
//过滤后的城市信息列表
@property (nonatomic, strong) NSMutableArray *listFilterCities;

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;

@property (weak, nonatomic) id<CitiesViewControllerDelegate> delegate;

- (void)filterContentForSearchText:(NSString*)searchText;


- (IBAction)cancel:(id)sender;

@end
