	@ data/text/trainers.inc:2666 Route124_Text_LilaRematchIntro (+1 aliases)
	.globl gText_Rom_2604EC
gText_Rom_2604EC: @ 0x082604EC
	.string "カコ『はーあ\pせっかくの うみ なのに\nいっしょに いるのが おとうと なんて……\pあら あなた ひさしぶりね\nきばらしに ポケモン しようか!?{EOS}"
	.if (. - gText_Rom_2604EC) > 0x4a
	.error "gText_Rom_2604EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2604EC) < 0x4a
	.space 0x4a - (. - gText_Rom_2604EC)
	.endif
