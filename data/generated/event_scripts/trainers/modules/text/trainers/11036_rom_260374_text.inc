	@ data/text/trainers.inc:2639 Route124_Text_LilaIntro (+1 aliases)
	.globl gText_Rom_260374
gText_Rom_260374: @ 0x08260374
	.string "カコ『はーあ\pせっかくの うみ なのに\nいっしょに いるのが おとうと なんて……\pあなた きばらしに ポケモン しようか!?$"
	.if (. - gText_Rom_260374) > 0x40
	.error "gText_Rom_260374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260374) < 0x40
	.space 0x40 - (. - gText_Rom_260374)
	.endif
