	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_2559F5
gText_Rom_2559F5: @ 0x082559F5
	.string "かった"
	.byte EOS
	.if (. - gText_Rom_2559F5) > 0x4
	.error "gText_Rom_2559F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2559F5) < 0x4
	.space 0x4 - (. - gText_Rom_2559F5)
	.endif
	@ analyzed canonical ROM range 0x082559F9-0x08255A4D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082559F9: @ 0x082559F9
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nはねるを　つかった　らしい!\p{STR_VAR_3}は　はねる　のが\nとっても　すきな　トレーナー　なのだ!$"
	.byte 0x01, 0x07, 0x27, 0x22, 0x15, 0x02, 0x00
