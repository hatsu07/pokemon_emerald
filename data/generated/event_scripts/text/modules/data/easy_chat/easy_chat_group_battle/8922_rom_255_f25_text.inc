	@ src/data/easy_chat/easy_chat_group_battle.h:334 easy_chat_group_battle_line_334
	.globl gText_Rom_255F25
gText_Rom_255F25: @ 0x08255F25
	.string "もらった"
	.byte EOS
	.if (. - gText_Rom_255F25) > 0x5
	.error "gText_Rom_255F25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255F25) < 0x5
	.space 0x5 - (. - gText_Rom_255F25)
	.endif
	@ analyzed canonical ROM range 0x08255F2A-0x08255F89
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08255F2A: @ 0x08255F2A
EventText_JP_08255F2A: @ 0x08255F2A
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nリボンを　もらった　らしい!\p{STR_VAR_3}は　リボンを　あつめるのが\nとても　だいすきな　トレーナーだな!$"
	.byte 0x41, 0x2E, 0x0B, 0x2D, 0x00, 0x14, 0x47, 0x05, 0x28, 0x1F, 0x08, 0x50, 0x10, 0x00
