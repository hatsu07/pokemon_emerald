	@ data/text/trainers.inc:701 Route109_Text_ChandlerIntro (+1 aliases)
	.globl gText_Rom_25B2A2
gText_Rom_25B2A2: @ 0x0825B2A2
	.string "じゃーん!\nボクの うきわ まるいでしょーっ!{EOS}"
	.if (. - gText_Rom_25B2A2) > 0x18
	.error "gText_Rom_25B2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2A2) < 0x18
	.space 0x18 - (. - gText_Rom_25B2A2)
	.endif
