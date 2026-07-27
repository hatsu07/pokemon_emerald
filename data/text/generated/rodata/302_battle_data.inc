	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_66A596
gText_Rom_66A596: @ 0x0866A596
	.string "きあい$"
	.if (. - gText_Rom_66A596) > 0x4
	.error "gText_Rom_66A596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_66A596) < 0x4
	.space 0x4 - (. - gText_Rom_66A596)
	.endif
	.incbin "baserom.gba", 0x66a59a, 0x120a7

	@ src/data/easy_chat/easy_chat_group_battle.h:82 easy_chat_group_battle_line_82
	.globl gText_Rom_67C641
gText_Rom_67C641: @ 0x0867C641
	.string "きあい$"
	.if (. - gText_Rom_67C641) > 0x4
	.error "gText_Rom_67C641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_67C641) < 0x4
	.space 0x4 - (. - gText_Rom_67C641)
	.endif
	.incbin "baserom.gba", 0x67c645, 0x4222

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName
	.globl gText_Rom_680867
gText_Rom_680867: @ 0x08680867
	.string "くねもめとすてせÖM70…Mk{0xF8}{0x12}るよけwjkrÜけるぼセチニムメチぱぎらと\npK？356/Zjjnz$"
	.if (. - gText_Rom_680867) > 0x34
	.error "gText_Rom_680867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_680867) < 0x34
	.space 0x34 - (. - gText_Rom_680867)
	.endif
	.incbin "baserom.gba", 0x68089b, 0x2cb9b

