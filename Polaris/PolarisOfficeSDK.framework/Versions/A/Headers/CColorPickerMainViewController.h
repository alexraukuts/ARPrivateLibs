//
//  CColorPickerViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 11. 29..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"

#define NO_SELECT_COLOR 0x01010101

typedef enum {
    ColorPickerNoType_None,     // 색,선 없음 사용하지 않음
    ColorPickerNoType_NoColor,  // 색 없음 사용
    ColorPickerNoType_NoLine,   // 선 없음 사용
    ColorPickerNoType_NoNeon,   // 객체 네온 없음 사용
    ColorPickerNoType_NoGradation,   // 도형 그라데이션 없음 사용
} ColorPickerNoSwitchType;

@protocol CColorPickerMainViewControllerDelegate <NSObject>

- (void)changeColorPickerModeWithSender:(id)sender selectedColor:(UIColor *)selectedColor;

@end

@interface CColorPickerMainViewController : CPropertyMenuControlContainerViewController <UICollectionViewDelegate, UICollectionViewDataSource>

//색없음, 선없음 등등의 타입 상단 enum참조
@property (nonatomic, assign) ColorPickerNoSwitchType pickerNoSwitchType;

// 하단 컬러 컬렉션 뷰의 enable 처리
@property (assign, nonatomic) BOOL enableColorArea;

// font backgound select
@property (assign, nonatomic) BOOL backgoundSelect;

// 하단 컬러 컬렉션 뷰의 enable에 따른 콜백, 컬러 영역이 enable, disable될 때 콜백이 필요할 경우 이것을 사용
@property (strong, nonatomic) void(^onEnableColorArea)(BOOL isEnableColorArea, long color);

// 컬러값을 사용 안함 했다가 다시 사용할 떄 마지막 선택되어있던 컬러값을 곧바로 선택시켜야 할 경우 이 플래그를 설정
@property (nonatomic) BOOL remainLastColorWhenDisable;



// 컬러 피커에 선택해야 할 컬러값을 전달, 해당 컬러값이 있으면 선택 없으면 컬러 추가
- (void) setColor:(NSInteger)color;

// font backgound select
- (void)setFontBackground;

/**
 *  초기화 함수 - 파라미터의 자세한 정보는 함수 선언부로 이동하시면 확인할 수 있습니다.
 *  @param type                     색없음 등등 없음에 대한 타입, 상단 enum참조
 *  @param color                    최초 실행 시 선택되어있어야 할 컬러값, 투명값은 0x00, 아무것도 선택하지 않으려면 NO_SELECT_COLOR 상수 사용
 *  @param onColorSelected          컬러값이 선택되었을 때 호출되어야 할 콜백 블록
 *  @param remain                   컬러값을 사용 안함 했다가 다시 사용할 때 마지막으로 선택되었던 컬러값을 선택시켜야 할 경우 이 플래그를 설정
 *  @param onEnableColorAreaChanged 하단 컬러 컬랙션 뷰의 enable값이 변경될 때 호출되어야 할 콜백 블록, 필요없다면 nil
 */

- (void) initWithNoSwitchType:(ColorPickerNoSwitchType)type delegate:(id<CColorPickerMainViewControllerDelegate>)delegate color:(NSInteger)color onColorSelected:(void (^)(int rgba))onColorSelected remainLastColorWhenDisable:(BOOL)remain onEnableColorAreaChanged:(void (^)(BOOL isEnableColorArea, long selectedColor))onEnableColorAreaChanged;

// 스위치를 제외하고 컬러 컬렉션 뷰의 enable을 셋팅하는 메소드 일반적으로 외부에서 스위치를 세팅하기 위해 사용
- (void) setEnableColorArea:(BOOL)enableColorArea;

// 스위치를 포함한 컬러피커 전체 enable을 셋팅하는 메소드
- (void) setEnableColorContoller:(BOOL) isEnable;

// 스위치의 on/off 값을 return해주는 메소드
- (BOOL) isSwitchOn;
- (void)reloadData;

@end
