	@ data/text/trainers.inc:1787 Route117_Text_MegIntro (+1 aliases)
	.globl gText_Rom_25E05B
gText_Rom_25E05B: @ 0x0825E05B
	.string "リコ『すてきな センパイとの タッグで\nあなたを まかしちゃうから!{EOS}"
	.if (. - gText_Rom_25E05B) > 0x23
	.error "gText_Rom_25E05B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E05B) < 0x23
	.space 0x23 - (. - gText_Rom_25E05B)
	.endif
