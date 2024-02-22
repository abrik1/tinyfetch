/* note: here in SHOW_$CATEGORY the values are 0 and 1
 0 = False
 1 = True
 */

#define SHOW_USER 1
#define SHOW_SH 1
#define SHOW_TERM 1
#define SHOW_LOCALE 1
#define SHOW_COLS 1

// note: for COL_BLOCKS_COL here putting 1 will use terminal foreground as background and 0 will use terminal backgroud as background and colors as foreground
#define COL_BLOCKS_COL 1 // requires SHOW_COLS as 1

#define col_block "  " // here instead of two blank spaces you can enter any char you want
