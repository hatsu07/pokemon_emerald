	@ data/maps/FortreeCity_House5/scripts.inc:22 FortreeCity_House5_Text_TreeHousesAreGreat
	.globl gText_Rom_205369
gText_Rom_205369: @ 0x08205369
	.string "ヒワマキの ツリーハウスって さいこう!\nポケモンと いっしょに くらすなら\lいちばんの まちだと おもっているわ!{EOS}"
	.if (. - gText_Rom_205369) > 0x3b
	.error "gText_Rom_205369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205369) < 0x3b
	.space 0x3b - (. - gText_Rom_205369)
	.endif
	@ data/maps/FortreeCity_House5/scripts.inc:25 FortreeCity_House5_Text_AdaptedToNature
	.globl gText_Rom_2053A4
gText_Rom_2053A4: @ 0x082053A4
	.string "ポケモンも ひとも\nしぜんに あわせて くらしてきたからな\pいまさら じぶんらの つごうに\nしぜんを あわせなくて いいんだよ{EOS}"
	.if (. - gText_Rom_2053A4) > 0x40
	.error "gText_Rom_2053A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053A4) < 0x40
	.space 0x40 - (. - gText_Rom_2053A4)
	.endif
	@ data/maps/FortreeCity_House5/scripts.inc:28 FortreeCity_House5_Text_Zigzagoon
	.globl gText_Rom_2053E4
gText_Rom_2053E4: @ 0x082053E4
	.string "ジグザグマ『ぶふう!!{EOS}"
	.if (. - gText_Rom_2053E4) > 0xc
	.error "gText_Rom_2053E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053E4) < 0xc
	.space 0xc - (. - gText_Rom_2053E4)
	.endif
	@ analyzed canonical ROM range 0x082053F0-0x0820545B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082053F0: @ 0x082053F0
	.byte 0x00
.globl EventScript_JP_082053F1
EventScript_JP_082053F1: @ 0x082053F1
	loadword 0x00, gText_Rom_20545C
	callstd 0x02
	end
.globl EventScript_JP_082053FA
EventScript_JP_082053FA: @ 0x082053FA
	loadword 0x00, gText_Rom_20549C
	callstd 0x02
	end
.globl EventScript_JP_08205403
EventScript_JP_08205403: @ 0x08205403
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration 0x0820541C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00
	.byte 0x09, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_08205430
EventScript_JP_08205430: @ 0x08205430
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration 0x08205448
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x0A, 0x00, 0x0B, 0x00, 0x0C, 0x00, 0x0F, 0x00, 0x0E, 0x00, 0x10, 0x00, 0x11, 0x00, 0x12
	.byte 0x00, 0x00, 0x00, 0x6C, 0x02
