@ struct CompressedSpriteSheet
@ {
@     const u8 *pic;
@     u16 size;
@     u16 species;
@ };

.macro mon_pic_entry pic:req, size:req, species:req
    .4byte \pic
    .2byte \size
    .2byte \species
.endm

@ 1エントリ8バイト
@   palette: 圧縮パレットへのポインタ
@   tag:     species番号
@   padding: 0
.macro mon_palette_entry palette:req, tag:req, padding=0
	.4byte \palette
	.2byte \tag
	.2byte \padding
.endm

.macro mon_icon_palette pointer:req, number:req
	.4byte \pointer
	.2byte 0xDAC0 + \number
	.2byte 0
.endm
