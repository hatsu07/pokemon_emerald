@ Daycare menu data and compatibility messages.

	@ 0x082FC04A-0x082FC04B alignment after egg_moves.inc
	.2byte 0

	.globl gUnknown_82FC04C
sDaycareLevelMenuWindowTemplate: @ 0x082FC04C
gUnknown_82FC04C:
	@ JP layout differs from upstream: left=12, width=17.
	window_template 0, 12, 1, 17, 6, 15, 8

sLevelMenuItems: @ 0x082FC054
	rodata_list_menu_item 0x085C8C24, 0 @ gText_ExpandedPlaceholder_Empty
	rodata_list_menu_item 0x085C8C24, 1 @ gText_ExpandedPlaceholder_Empty
	rodata_list_menu_item 0x085C93C8, 5 @ gText_Exit / DAYCARE_LEVEL_MENU_EXIT

	.globl gUnknown_82FC06C
sDaycareListMenuLevelTemplate: @ 0x082FC06C
gUnknown_82FC06C:
	@ items, cursor callback, item printer, counts, coordinates and packed style fields.
	rodata_list_menu_template sLevelMenuItems, ListMenuDefaultCursorMoveFunc, DaycarePrintMonInfo, 3, 3, 0, 2, 12, 1, 0, 2, 1, 3, 1, 0, 0, FONT_NORMAL, 0


	.globl gText_Rom_2FC084
gText_Rom_2FC084: @ 0x082FC084
	.string "2ひきの　なかは\nとっても　よい　ようじゃ$"
	.if (. - gText_Rom_2FC084) > 0x16
	.error "gText_Rom_2FC084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC084) < 0x16
	.space 0x16 - (. - gText_Rom_2FC084)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC09A
gText_Rom_2FC09A: @ 0x082FC09A
	.string "2ひきの　なかは\nまずまずの　ようじゃ$"
	.if (. - gText_Rom_2FC09A) > 0x14
	.error "gText_Rom_2FC09A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC09A) < 0x14
	.space 0x14 - (. - gText_Rom_2FC09A)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0AE
gText_Rom_2FC0AE: @ 0x082FC0AE
	.string "2ひきの　なかは\nそれほど　よくないがなぁ$"
	.if (. - gText_Rom_2FC0AE) > 0x16
	.error "gText_Rom_2FC0AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0AE) < 0x16
	.space 0x16 - (. - gText_Rom_2FC0AE)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0C4
gText_Rom_2FC0C4: @ 0x082FC0C4
	.string "2ひきは　おたがいに\nちがう　ポケモンたちと\lあそんでおるがなあ$"
	.if (. - gText_Rom_2FC0C4) > 0x21
	.error "gText_Rom_2FC0C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0C4) < 0x21
	.space 0x21 - (. - gText_Rom_2FC0C4)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_82FC0E8
gUnknown_82FC0E8: @ 0x082FC0E8
	.4byte gText_Rom_2FC084
	.4byte gText_Rom_2FC09A
	.4byte gText_Rom_2FC0AE
	.4byte gText_Rom_2FC0C4
	@ pret/pokeemerald-jp direct xref for 0x082FC0F8: daycare.s: GetDaycareLevelMenuLevelText, GetDaycareLevelMenuText
	.globl gDaycareData_082FC0F8
gDaycareData_082FC0F8:
	.globl gUnknown_82FC0F8
gUnknown_82FC0F8: @ 0x082FC0F8
	@ analyzed canonical ROM range 0x082FC0F8-0x082FC0F9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFE, 0xFF
