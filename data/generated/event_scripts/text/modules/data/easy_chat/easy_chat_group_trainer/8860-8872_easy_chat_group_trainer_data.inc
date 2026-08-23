	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255323
gText_Rom_255323: @ 0x08255323
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255323) > 0x6
	.error "gText_Rom_255323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255323) < 0x6
	.space 0x6 - (. - gText_Rom_255323)
	.endif
	@ analyzed canonical ROM range 0x08255329-0x08255386
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255329: @ 0x08255329
	.string "レポートを　かいた{EOS}"
EventText_JP_08255333: @ 0x08255333
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}かいも\nレポートを　かいた　らしい!\p{STR_VAR_3}ほど　ようじん　ぶかい\nトレーナーは　いない　だろう!{EOS}"
	.byte 0x28, 0x35, 0x03, 0x0A, 0x03, 0x00, 0x1A, 0x50, 0x0C, 0x2E, 0x00
	.globl gText_Rom_255387
gText_Rom_255387: @ 0x08255387
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255387) > 0x6
	.error "gText_Rom_255387 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255387) < 0x6
	.space 0x6 - (. - gText_Rom_255387)
	.endif
	@ analyzed canonical ROM range 0x0825538D-0x082553F4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0825538D: @ 0x0825538D
.Lbatch81_text_start_EventText_JP_0825538D: @ 0x0825538D
	.string "りゅうこうを　つくった{EOS}"
EventText_JP_08255399: @ 0x08255399
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}かいも\nりゅうこうを　うみだした　らしい!\p{STR_VAR_3}こそが　つぎつぎと\nホウエンの　りゅうこうを　うみだしている!{EOS}"
	.byte 0x07, 0x19, 0x20, 0x2D, 0x00, 0x03, 0x04, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_2553F5
gText_Rom_2553F5: @ 0x082553F5
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2553F5) > 0x6
	.error "gText_Rom_2553F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2553F5) < 0x6
	.space 0x6 - (. - gText_Rom_2553F5)
	.endif
	@ analyzed canonical ROM range 0x082553FB-0x0825544D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082553FB: @ 0x082553FB
	.string "きのみを　うえた{EOS}"
EventText_JP_08255404: @ 0x08255404
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}かいも\nきのみを　うめた　そうだ!\p{STR_VAR_3}は　でんせつの\nきのみ　ずき　だな!{EOS}"
	.byte 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_25544E
gText_Rom_25544E: @ 0x0825544E
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25544E) > 0x6
	.error "gText_Rom_25544E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25544E) < 0x6
	.space 0x6 - (. - gText_Rom_25544E)
	.endif
	@ analyzed canonical ROM range 0x08255454-0x082554C2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255454: @ 0x08255454
	.string "じてんしゃを　こうかんした{EOS}"
EventText_JP_08255462: @ 0x08255462
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nじてんしゃを　こうかんした　そうだ!\p{STR_VAR_3}は　よほどの\nじてんしゃ　だいすき　トレーナー　だな!{EOS}"
	.byte 0x52, 0x7E, 0x60, 0x97, 0x85, 0xAE, 0x16, 0x00, 0x0A, 0x10, 0x04, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_2554C3
gText_Rom_2554C3: @ 0x082554C3
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2554C3) > 0x6
	.error "gText_Rom_2554C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2554C3) < 0x6
	.space 0x6 - (. - gText_Rom_2554C3)
	.endif
	@ analyzed canonical ROM range 0x082554C9-0x0825552D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082554C9: @ 0x082554C9
	.string "インタビューに　こたえた{EOS}"
EventText_JP_082554D6: @ 0x082554D6
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nインタビューを　うけた　そうだ!\p{STR_VAR_3}は　とても\nちゅうもく　される　トレーナー　だろう!{EOS}"
	.byte 0x0C, 0x36, 0x03, 0x48, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_25552E
gText_Rom_25552E: @ 0x0825552E
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25552E) > 0x6
	.error "gText_Rom_25552E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25552E) < 0x6
	.space 0x6 - (. - gText_Rom_25552E)
	.endif
	@ analyzed canonical ROM range 0x08255534-0x0825559C
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255534: @ 0x08255534
	.string "しょうぶ　した{EOS}"
EventText_JP_0825553C: @ 0x0825553C
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nポケモン　しょうぶを　した　そうだ!\p{STR_VAR_3}は　トレーナーを　みると\nしょうぶ　せずに　おれない　トレーナーだ!{EOS}"
	.byte 0x12, 0x06, 0x1F, 0x04, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_25559D
gText_Rom_25559D: @ 0x0825559D
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25559D) > 0x6
	.error "gText_Rom_25559D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25559D) < 0x6
	.space 0x6 - (. - gText_Rom_25559D)
	.endif
	@ analyzed canonical ROM range 0x082555A3-0x082555A8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00
