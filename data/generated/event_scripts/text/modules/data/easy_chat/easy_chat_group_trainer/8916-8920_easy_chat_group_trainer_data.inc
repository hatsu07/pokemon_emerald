	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255E3A
gText_Rom_255E3A: @ 0x08255E3A
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255E3A) > 0x6
	.error "gText_Rom_255E3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255E3A) < 0x6
	.space 0x6 - (. - gText_Rom_255E3A)
	.endif
	@ analyzed canonical ROM range 0x08255E40-0x08255EAA
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255E40: @ 0x08255E40
	.string "あめに　ふられた{EOS}"
EventText_JP_08255E49: @ 0x08255E49
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nあめで　ずぶぬれに　なった　らしい!\p{STR_VAR_3}は　みずも　したたる\nいい　トレーナーっていう　かんじ　だな!{EOS}"
	.byte 0x3E, 0x06, 0x2E, 0x44, 0x00, 0x0C, 0x27, 0x49, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_255EAB
gText_Rom_255EAB: @ 0x08255EAB
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255EAB) > 0x6
	.error "gText_Rom_255EAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255EAB) < 0x6
	.space 0x6 - (. - gText_Rom_255EAB)
	.endif
	@ analyzed canonical ROM range 0x08255EB1-0x08255F19
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255EB1: @ 0x08255EB1
	.string "ずかんを　みた{EOS}"
EventText_JP_08255EB9: @ 0x08255EB9
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nずかんを　みた　そうだ!\p{STR_VAR_3}は　ずかんで　ポケモンを\nしらべるのが　だいすきな　トレーナーだな!{EOS}"
	.byte 0x78, 0x9A, 0x7E, 0x2D, 0x00, 0x10, 0x08, 0x0B, 0x2E, 0x00, 0x01, 0x12, 0x22, 0x10, 0x00
	.globl gText_Rom_255F1A
gText_Rom_255F1A: @ 0x08255F1A
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255F1A) > 0x6
	.error "gText_Rom_255F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255F1A) < 0x6
	.space 0x6 - (. - gText_Rom_255F1A)
	.endif
	@ analyzed canonical ROM range 0x08255F20-0x08255F24
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x78, 0x9A, 0x7E, 0x2D, 0x00
