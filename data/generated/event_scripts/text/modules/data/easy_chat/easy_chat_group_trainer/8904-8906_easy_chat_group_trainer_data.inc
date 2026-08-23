	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255C12
gText_Rom_255C12: @ 0x08255C12
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255C12) > 0x6
	.error "gText_Rom_255C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255C12) < 0x6
	.space 0x6 - (. - gText_Rom_255C12)
	.endif
	@ analyzed canonical ROM range 0x08255C18-0x08255C7D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255C18: @ 0x08255C18
	.string "ポロックを　つくった{EOS}"
EventText_JP_08255C23: @ 0x08255C23
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}かいも\nポロックを　つくった　そうだ!\p{STR_VAR_3}に　きのみブレンダーを\nつかわせたら　みぎに　でるものは　ないな!{EOS}"
	.byte 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_255C7E
gText_Rom_255C7E: @ 0x08255C7E
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255C7E) > 0x6
	.error "gText_Rom_255C7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255C7E) < 0x6
	.space 0x6 - (. - gText_Rom_255C7E)
	.endif
	@ analyzed canonical ROM range 0x08255C84-0x08255CEC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08255C84: @ 0x08255C84
.Lbatch81_text_start_EventText_JP_08255C84: @ 0x08255C84
	.string "コンテストに　さんか　した{EOS}"
EventText_JP_08255C92: @ 0x08255C92
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}かいも\nコンテストに　さんか　した　そうだ!\p{STR_VAR_3}は　じぶんの　ポケモンを\nひとに　みせるのが　だいすき　なんだろう!{EOS}"
	.byte 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x19, 0x00
