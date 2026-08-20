	@ data/text/trainers.inc:506 Route108_Text_JeromeIntro (+1 aliases)
	.globl gText_Rom_25AB71
gText_Rom_25AB71: @ 0x0825AB71
	.string "オレの ユメは せかいに ある\n7つのうみ すべてで およぐこと!{EOS}"
	.if (. - gText_Rom_25AB71) > 0x22
	.error "gText_Rom_25AB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AB71) < 0x22
	.space 0x22 - (. - gText_Rom_25AB71)
	.endif
