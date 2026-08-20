	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255A4E
gText_Rom_255A4E: @ 0x08255A4E
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255A4E) > 0x6
	.error "gText_Rom_255A4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255A4E) < 0x6
	.space 0x6 - (. - gText_Rom_255A4E)
	.endif
	@ analyzed canonical ROM range 0x08255A54-0x08255AB7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08255A54: @ 0x08255A54
EventText_JP_08255A54: @ 0x08255A54
	.string "わるあがき　した{EOS}"
EventText_JP_08255A5D: @ 0x08255A5D
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nわるあがきを　した　らしい!\p{STR_VAR_3}は　どんな　じょうきょう　でも\nけっして　あきらめない　トレーナーだ!{EOS}"
	.byte 0x5D, 0x7B, 0xA0, 0x64, 0x19, 0x00
