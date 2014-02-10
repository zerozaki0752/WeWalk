//
//  AsyncImageView.M
//  Musiline
//
//  Created by fuacici on 10-5-27.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ImageManager.h"
#import "CHAvatarView.h"

//static const NSString * gDefaultImages[];
enum _EImageIndex
{
	kSCar66x44=0,
	
	
}EImageIndex;

@interface AsyncImageView : UIButton <NSFetchedResultsControllerDelegate,ImageLoaderDelegate>
{
	NSString *urlString; 
	int defaultImage;
	ImageManager * manager;
	UIImageView * imageView;
	int selectedRow;
	int selectedSection;
	BOOL isImage;	//判断是不是加载了除默认图以外的图
	BOOL autoImage;  //判断是不是根据图片本身的比例来展示。
	
	int imageViewBorderWidth;
	UIColor * imageViewBorderColor;
	int imageViewCornerRadius;
	BOOL imageViewMasksToBounds;
    BOOL layerRadius;
    
    int _imageState;
    CHAvatarView *chavatarView;

    UIImage *_downimage;
    UIImageView *autoImageView;
    NSIndexPath *_indexPath;
    
}
@property(nonatomic,assign)BOOL layerRadius;
@property(nonatomic,retain)NSIndexPath *indexPath;
@property (atomic,retain) UIImage *downimage;
@property (nonatomic,assign)int imageState;
@property (nonatomic, retain) NSString *urlString;
@property (assign) int defaultImage;
@property (nonatomic,assign) ImageManager * manager;
@property (nonatomic,assign)int selectedRow;
@property (nonatomic,assign)int selectedSection;
@property int imageViewBorderWidth;
@property (nonatomic,retain) UIColor * imageViewBorderColor;
@property BOOL originalImage;
@property int imageViewCornerRadius;
@property BOOL imageViewMasksToBounds;
@property (nonatomic,assign)BOOL userCache;
@property(nonatomic,assign)BOOL completeDownload;

@property(nonatomic,assign)int scaleState;

- (id)initWithFrame:(CGRect)frame ImageState:(int)state;
- (void)setImage:(UIImage*)_image;
- (UIImage*)image;

@end
