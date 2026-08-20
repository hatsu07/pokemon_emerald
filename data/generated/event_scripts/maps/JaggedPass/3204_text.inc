	@ data/maps/JaggedPass/scripts.inc:255 JaggedPass_Text_AutumnIntro (+1 aliases)
	.globl gText_Rom_2160AC
gText_Rom_2160AC: @ 0x082160AC
	.string "まいにち ここを のぼっているわ\nパワーには じしん あるんだから!{EOS}"
	.if (. - gText_Rom_2160AC) > 0x23
	.error "gText_Rom_2160AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2160AC) < 0x23
	.space 0x23 - (. - gText_Rom_2160AC)
	.endif
