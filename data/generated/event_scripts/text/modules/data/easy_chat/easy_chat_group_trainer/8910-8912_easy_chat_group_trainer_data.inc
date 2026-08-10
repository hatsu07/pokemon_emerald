	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255D5D
gText_Rom_255D5D: @ 0x08255D5D
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255D5D) > 0x6
	.error "gText_Rom_255D5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255D5D) < 0x6
	.space 0x6 - (. - gText_Rom_255D5D)
	.endif
	@ analyzed canonical ROM range 0x08255D63-0x08255DCD
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08255D63: @ 0x08255D63
EventScript_08255D63: @ 0x08255D63
EventText_JP_08255D63: @ 0x08255D63
	.string "かいものを　した$"
EventText_JP_08255D6C: @ 0x08255D6C
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nおみせで　かいものを　した　らしい!\p{STR_VAR_3}は　おみせに　はいると\nついつい　かいもの　する　トレーナーだな!$"
	.byte 0x91, 0x53, 0x8D, 0x7E, 0x89, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_255DCE
gText_Rom_255DCE: @ 0x08255DCE
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255DCE) > 0x6
	.error "gText_Rom_255DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255DCE) < 0x6
	.space 0x6 - (. - gText_Rom_255DCE)
	.endif
	@ analyzed canonical ROM range 0x08255DD4-0x08255DDE
sAnalyzedEventData_08255DD4: @ 0x08255DD4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x91, 0x53, 0x8D, 0x7E, 0x89, 0x6F, 0x5C, 0x7E, 0x2D, 0x00, 0x12
