	@ src/battle_main.c:312 battle_main_line_312
	.globl gText_Rom_255CED
gText_Rom_255CED: @ 0x08255CED
	.string "たつじん"
	.byte EOS
	.if (. - gText_Rom_255CED) > 0x5
	.error "gText_Rom_255CED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255CED) < 0x5
	.space 0x5 - (. - gText_Rom_255CED)
	.endif
	@ analyzed canonical ROM range 0x08255CF2-0x08255D5C
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08255CF2: @ 0x08255CF2
EventText_JP_08255CF2: @ 0x08255CF2
	.string "コンテストで　ゆうしょう　した$"
EventText_JP_08255D02: @ 0x08255D02
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nコンテストで　ゆうしょう　した　そうだ!\p{STR_VAR_3}は　とてつも　ない\nコンテスト　マスター　だろう!$"
	.byte 0x06, 0x02, 0x23, 0x19, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
