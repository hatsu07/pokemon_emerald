	@ data/text/trainers.inc:2654 Route124_Text_RoyDefeat (+1 aliases)
	.globl gText_Rom_260454
gText_Rom_260454: @ 0x08260454
	.string "コウ『うわぁ……\nあとで ねえちゃんに おこられる……{EOS}"
	.if (. - gText_Rom_260454) > 0x1c
	.error "gText_Rom_260454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260454) < 0x1c
	.space 0x1c - (. - gText_Rom_260454)
	.endif
