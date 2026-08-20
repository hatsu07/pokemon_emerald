	@ data/text/trainers.inc:464 Route107_Text_BethIntro (+1 aliases)
	.globl gText_Rom_25A98C
gText_Rom_25A98C: @ 0x0825A98C
	.string "わたしと しょうぶが したいの?\nいいわ! あいてに なって あげる!{EOS}"
	.if (. - gText_Rom_25A98C) > 0x24
	.error "gText_Rom_25A98C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A98C) < 0x24
	.space 0x24 - (. - gText_Rom_25A98C)
	.endif
