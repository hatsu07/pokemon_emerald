	@ data/text/trainers.inc:1019 Route111_Text_BrookeRematchIntro (+1 aliases)
	.globl gText_Rom_25C00A
gText_Rom_25C00A: @ 0x0825C00A
	.string "ポケモンは つかう わざによって\nつよくなったり よわくなったりも するわ!\pあなたの ポケモン\nどんな わざを おぼえているの?{EOS}"
	.if (. - gText_Rom_25C00A) > 0x42
	.error "gText_Rom_25C00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C00A) < 0x42
	.space 0x42 - (. - gText_Rom_25C00A)
	.endif
