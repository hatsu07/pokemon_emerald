	@ data/text/trainers.inc:668 Route109_Text_CarterIntro (+1 aliases)
	.globl gText_Rom_25B117
gText_Rom_25B117: @ 0x0825B117
	.string "わはは!\nおじさん おおもの つっちゃうぞ!{EOS}"
	.if (. - gText_Rom_25B117) > 0x17
	.error "gText_Rom_25B117 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B117) < 0x17
	.space 0x17 - (. - gText_Rom_25B117)
	.endif
