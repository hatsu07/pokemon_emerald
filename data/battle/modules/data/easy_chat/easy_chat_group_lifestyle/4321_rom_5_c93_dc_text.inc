	.globl sInfoText_ChoiceBack

	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl sInfoText_ChoiceBack
sInfoText_ChoiceBack: @ 0x085C93C4
	.string "もどる{EOS}"
	.if (. - sInfoText_ChoiceBack) > 0x4
	.error "sInfoText_ChoiceBack may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceBack) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceBack)
	.endif
	@ asm/field_specials.s:6023 sub_0813AAAC (+11 aliases)
	.globl gText_Exit
gText_Exit: @ 0x085C93C8
	.string "やめる{EOS}"
	.if (. - gText_Exit) > 0x4
	.error "gText_Exit may not grow beyond its original slot"
	.endif
	.if (. - gText_Exit) < 0x4
	.space 0x4 - (. - gText_Exit)
	.endif
	@ src/item_menu.c:304 item_menu_line_304
	.globl gText_Rom_5C93CC
gText_Rom_5C93CC: @ 0x085C93CC
	.string "みせる{EOS}"
	.if (. - gText_Rom_5C93CC) > 0x4
	.error "gText_Rom_5C93CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93CC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93CC)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C93D0: battle_setup.s: ReturnEmptyStringIfNull
	.globl gBattleSetupData_085C93D0
gBattleSetupData_085C93D0:
	.globl gBattleSetupData_085C93D0
	@ analyzed canonical ROM range 0x085C93D0-0x085C93D6
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x7 bytes=7
	.byte 0xFF, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0xFF
	@ src/battle_debug.c:236 sText_HeldItem (+4 aliases)
	.globl sText_HeldItem
sText_HeldItem: @ 0x085C93D7
	.string "もちもの{EOS}"
	.if (. - sText_HeldItem) > 0x5
	.error "sText_HeldItem may not grow beyond its original slot"
	.endif
	.if (. - sText_HeldItem) < 0x5
	.space 0x5 - (. - sText_HeldItem)
	.endif
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_5C93DC
gText_Rom_5C93DC: @ 0x085C93DC
	.string "メール{EOS}"
	.if (. - gText_Rom_5C93DC) > 0x4
	.error "gText_Rom_5C93DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93DC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93DC)
	.endif

