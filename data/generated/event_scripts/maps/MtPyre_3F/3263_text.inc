	@ data/maps/MtPyre_3F/scripts.inc:48 MtPyre_3F_Text_KaylaIntro (+1 aliases)
	.globl gText_Rom_2166EA
gText_Rom_2166EA: @ 0x082166EA
	.string "おほほほほっ!\pここは あなたの ような こどもが\nくる ばしょ では ないのよっ!{EOS}"
	.if (. - gText_Rom_2166EA) > 0x2b
	.error "gText_Rom_2166EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166EA) < 0x2b
	.space 0x2b - (. - gText_Rom_2166EA)
	.endif
