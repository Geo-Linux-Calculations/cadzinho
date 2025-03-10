#ifndef _SVG_MEDIA
#define _SVG_MEDIA

#include "nanosvg.h"
#include "nanosvgrast.h"
#include "bmp.h"

enum svg_list {
    SVG_I_SEL,
    SVG_WARNING,
    SVG_SUN,
    SVG_PLINE,
    SVG_ATRC_INS,
    SVG_MOVE,
    SVG_ZOOM_A,
    SVG_I_TEXT,
    SVG_UP,
    SVG_ATRC_END,
    SVG_EDIT,
    SVG_ATRC_OCENTER,
    SVG_DOWN,
    SVG_RIGTH,
    SVG_ATRC_INTER,
    SVG_PASTE,
    SVG_ATRC_PERP,
    SVG_TEXT_STY,
    SVG_ATRC_CENTER,
    SVG_ZOOM_M,
    SVG_RECT_SEL,
    SVG_ATRC_QUAD,
    SVG_REDO,
    SVG_CUT,
    SVG_GEAR,
    SVG_EYE,
    SVG_EXPORT,
    SVG_ATRC_MID,
    SVG_BRICK,
    SVG_PREV,
    SVG_UNDER_L,
    SVG_ATRC_NODE,
    SVG_BOOK,
    SVG_ATRC_EXT,
    SVG_PUZZLE,
    SVG_BUCKET,
    SVG_FREEZE,
    SVG_NEW,
    SVG_ELIPSE,
    SVG_LTYPE,
    SVG_IMPORT,
    SVG_LEFT,
    SVG_ARC,
    SVG_CLOSE,
    SVG_TAG_E,
    SVG_SYMBOL,
    SVG_UNDO,
    SVG_FIND,
    SVG_SCALE,
    SVG_TEXT_E,
    SVG_ROT,
    SVG_ATRC_TAN,
    SVG_SCRIPT2,
    SVG_SCRIPT1,
    SVG_STYLE,
    SVG_EXPLODE,
    SVG_OPEN,
    SVG_NEXT,
    SVG_PIECE,
    SVG_ZOOM_W,
    SVG_NO_EYE,
    SVG_FONT,
    SVG_CZ,
    SVG_TAGS,
    SVG_CIRCLE,
    SVG_LAYERS,
    SVG_RULER,
    SVG_TEXT,
    SVG_BLOCK,
    SVG_INFO,
    SVG_TRASH,
    SVG_SAVE,
    SVG_ZOOM_P,
    SVG_SPLINE,
    SVG_ATRC_AINT,
    SVG_PIECE_P,
    SVG_PRINT,
    SVG_IMAGE,
    SVG_DUPLI,
    SVG_HAND,
    SVG_HELP,
    SVG_TOOL,
    SVG_BRUSH,
    SVG_SINGLE_SEL,
    SVG_TAG,
    SVG_ATRC_PAR,
    SVG_LOCK,
    SVG_ATRC_CTRL,
    SVG_MAGNET,
    SVG_UNLOCK,
    SVG_BRAZIL,
    SVG_ATRC_ANY,
    SVG_CURSOR,
    SVG_COPY,
    SVG_RECT,
    SVG_LINE,
    SVG_MIRROR,
    SVG_HATCH,
    SVG_DIM_LINEAR,
    SVG_DIM_ANGULAR,
    SVG_DIM_RADIUS,
    SVG_DIM_ORDINATE,
    SVG_DIM_CONFIG,
    SVG_POINT,
    SVG_MEDIA_SIZE
};

NSVGimage ** i_svg_all_curves(void);

NSVGimage ** i_svg_all_curves2(char *find, char *repl);

void i_svg_free_curves(NSVGimage **curves);

bmp_img ** i_svg_all_bmp(NSVGimage **curves, int w, int h);

bmp_img * i_svg_bmp(NSVGimage *curve, int w, int h);

void i_svg_free_bmp(bmp_img **img);

#endif