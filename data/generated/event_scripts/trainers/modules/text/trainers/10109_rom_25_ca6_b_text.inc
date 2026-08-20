	@ data/text/trainers.inc:1277 Route113_Text_WyattIntro (+1 aliases)
	.globl gText_Rom_25CA6B
gText_Rom_25CA6B: @ 0x0825CA6B
	.string "ぼ ボクと たたかうって いうんですか!\nまだ つかまえた ばかりなのに!{EOS}"
	.if (. - gText_Rom_25CA6B) > 0x26
	.error "gText_Rom_25CA6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA6B) < 0x26
	.space 0x26 - (. - gText_Rom_25CA6B)
	.endif
