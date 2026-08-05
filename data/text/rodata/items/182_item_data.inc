	@ src/item_menu.c:302 item_menu_line_302
	.globl gText_Rom_5C93B5
gText_Rom_5C93B5: @ 0x085C93B5
	.string "タグをみる$"
	.if (. - gText_Rom_5C93B5) > 0x6
	.error "gText_Rom_5C93B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93B5) < 0x6
	.space 0x6 - (. - gText_Rom_5C93B5)
	.endif
	.globl gUnknown_85C93BB
gUnknown_85C93BB: @ 0x085C93BB

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C93BB
gText_Rom_5C93BB: @ 0x085C93BB
	.string "けってい$"
	.if (. - gText_Rom_5C93BB) > 0x5
	.error "gText_Rom_5C93BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93BB) < 0x5
	.space 0x5 - (. - gText_Rom_5C93BB)
	.endif
	@ Replaced baserom.gba range: offset=0x5C93C0, size=0x4
	.byte 0x05, 0x28, 0x29, 0xFF
	.globl gUnknown_85C93C4
gUnknown_85C93C4: @ 0x085C93C4

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5C93C4
gText_Rom_5C93C4: @ 0x085C93C4
	.string "もどる$"
	.if (. - gText_Rom_5C93C4) > 0x4
	.error "gText_Rom_5C93C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93C4) < 0x4
	.space 0x4 - (. - gText_Rom_5C93C4)
	.endif
	.globl gUnknown_85C93C8
gUnknown_85C93C8: @ 0x085C93C8

