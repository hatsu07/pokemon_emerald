	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_255B26
gText_Rom_255B26: @ 0x08255B26
	.string "めいじん"
	.byte EOS
	.if (. - gText_Rom_255B26) > 0x5
	.error "gText_Rom_255B26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255B26) < 0x5
	.space 0x5 - (. - gText_Rom_255B26)
	.endif
	@ analyzed canonical ROM range 0x08255B2B-0x08255C11
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_08255B2B: @ 0x08255B2B
	.string "ルーレットを　れんぞくで　あてた{EOS}"
EventText_JP_08255B3C: @ 0x08255B3C
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nルーレットを　れんぞくで　あてた　らしい!\p{STR_VAR_3}は　はっきり　いって\nルーレットを　みきっている　トレーナーだ!{EOS}"
EventText_JP_08255B95: @ 0x08255B95
	.string "バトルタワーの　ちょうせんしゃ{EOS}"
EventText_JP_08255BA5: @ 0x08255BA5
	.string "バトルタワーに　ちょうせん　した{EOS}"
EventText_JP_08255BB6: @ 0x08255BB6
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nバトルタワーに　いどんだ　そうだ!\p{STR_VAR_3}は　バトルタワーに\nこだわりを　もっている　トレーナーだ!{EOS}"
	.byte 0x98, 0x7A, 0x7E, 0x95, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
