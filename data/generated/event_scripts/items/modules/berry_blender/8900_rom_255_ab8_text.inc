	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_255AB8
gText_Rom_255AB8: @ 0x08255AB8
	.string "めいじん"
	.byte EOS
	.if (. - gText_Rom_255AB8) > 0x5
	.error "gText_Rom_255AB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255AB8) < 0x5
	.space 0x5 - (. - gText_Rom_255AB8)
	.endif
	@ analyzed canonical ROM range 0x08255ABD-0x08255B25
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08255ABD: @ 0x08255ABD
.Lbatch81_text_start_EventText_JP_08255ABD: @ 0x08255ABD
	.string "スロットで　おおあたり　した{EOS}"
EventText_JP_08255ACC: @ 0x08255ACC
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nスロットで　おおあたり　した　らしい!\p{STR_VAR_3}は　スロットマシンを\nしりつくして　いる　トレーナーだ!{EOS}"
	.byte 0x79, 0xAE, 0x7A, 0xA0, 0x64, 0x19, 0x00
