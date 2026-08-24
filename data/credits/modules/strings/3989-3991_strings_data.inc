	@ src/strings.c:967 gJPText_Player
	.globl gJPText_Player
gJPText_Player: @ 0x085C8BA8
	.string "プレイヤー{EOS}"
	.if (. - gJPText_Player) > 0x6
	.error "gJPText_Player may not grow beyond its original slot"
	.endif
	.if (. - gJPText_Player) < 0x6
	.space 0x6 - (. - gJPText_Player)
	.endif
	.globl gText_Rom_5C8BAE
gText_Rom_5C8BAE: @ 0x085C8BAE
	@ Decoded text from ROM range: offset=0x5C8BAE, size=0x3
	.string "さま{EOS}"
	.globl gText_Rom_5C8BB1

	@ src/pokedex_plus_hgss.c:6706 pokedex_plus_hgss_line_6706 (+1 aliases)
	.globl gText_Rom_5C8BB1
gText_Rom_5C8BB1: @ 0x085C8BB1
	.string "ホウエン{EOS}"
	.if (. - gText_Rom_5C8BB1) > 0x5
	.error "gText_Rom_5C8BB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BB1) < 0x5
	.space 0x5 - (. - gText_Rom_5C8BB1)
	.endif
	.globl gText_DexNational

	@ src/strings.c:970 gText_DexNational
	.globl gText_DexNational
gText_DexNational: @ 0x085C8BB6
	.string "ぜんこく{EOS}"
	.if (. - gText_DexNational) > 0x5
	.error "gText_DexNational may not grow beyond its original slot"
	.endif
	.if (. - gText_DexNational) < 0x5
	.space 0x5 - (. - gText_DexNational)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C8BBB: option_menu.s: DisplayDiplomaText
	.globl gOptionMenuData_085C8BBB
gOptionMenuData_085C8BBB: @ 0x085C8BBB
	@ analyzed canonical ROM range 0x085C8BBB-0x085C8BED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x33 bytes=51
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x3E, 0x06, 0x2E, 0x2D, 0xFE, 0x20, 0x3B
	.byte 0x14, 0x00, 0x06, 0x2E, 0x0E, 0x02, 0x00, 0x0B, 0x0E, 0x10, 0xFE, 0x02, 0x41, 0x02, 0x15, 0x0A
	.byte 0x03, 0x0E, 0x07, 0x2D, 0x00, 0x10, 0x10, 0x04, 0xFE, 0x0A, 0x0A, 0x16, 0x00, 0x0C, 0x36, 0x03
	.byte 0x22, 0x02, 0x00
	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5C8BEE
gText_Rom_5C8BEE: @ 0x085C8BEE
	.string "します{EOS}"
	.if (. - gText_Rom_5C8BEE) > 0x4
	.error "gText_Rom_5C8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BEE) < 0x4
	.space 0x4 - (. - gText_Rom_5C8BEE)
	.endif
	.globl gJPText_GameFreak

	@ src/strings.c:972 gJPText_GameFreak
	.globl gJPText_GameFreak
gJPText_GameFreak: @ 0x085C8BF2
	.string "{COLOR RED}{SHADOW LIGHT_RED}ゲームフリーク{EOS}"
	.if (. - gJPText_GameFreak) > 0xe
	.error "gJPText_GameFreak may not grow beyond its original slot"
	.endif
	.if (. - gJPText_GameFreak) < 0xe
	.space 0xe - (. - gJPText_GameFreak)
	.endif

	@ src/strings.c:973 gText_DiplomaEmpty
	.globl gText_DiplomaEmpty
gText_DiplomaEmpty: @ 0x085C8C00
	.string "{COLOR RED}{SHADOW LIGHT_RED}{EOS}"
	.if (. - gText_DiplomaEmpty) > 0x7
	.error "gText_DiplomaEmpty may not grow beyond its original slot"
	.endif
	.if (. - gText_DiplomaEmpty) < 0x7
	.space 0x7 - (. - gText_DiplomaEmpty)
	.endif
	.space 0x1, 0x00
