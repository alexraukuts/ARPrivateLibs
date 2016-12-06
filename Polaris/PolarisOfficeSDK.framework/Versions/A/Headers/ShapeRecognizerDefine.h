//
//  ShapeRecognizerBlocks.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

typedef void (^onClearDrawing)(void);
typedef void (^onShowShapeRecommandation)(CGRect recognizingRect, int typeArray[], int typeArraySize);
typedef void (^onRecommandTypeSelected)(int type);

#define SHAPE_LINE              101
#define SHAPE_RECT              201
#define SHAPE_PARALLEL          304
#define SHAPE_DIAMOND           306
#define SHAPE_CIRCLE            1000
#define SHAPE_TRI               302
#define SHAPE_TRI_90            1302
#define SHAPE_TRI_180           2302
#define SHAPE_TRI_270           3302
#define SHAPE_LEFTTRI           303
#define SHAPE_LEFTTRI_90        1303
#define SHAPE_LEFTTRI_180       2303
#define SHAPE_LEFTTRI_270       3303
#define SHAPE_OVAL              301
#define SHAPE_HEXAGON           308
#define SHAPE_CROSS             320
#define SHAPE_PENTAGON          307
#define SHAPE_RIGHTPENTA        419
#define SHAPE_RIGHTPENTA_180    2419
#define SHAPE_DOWNPENTA         614
#define SHAPE_DOWNPENTA_180     2614
#define SHAPE_HEART             330
#define SHAPE_STAR              704
#define SHAPE_STAR_180          2704