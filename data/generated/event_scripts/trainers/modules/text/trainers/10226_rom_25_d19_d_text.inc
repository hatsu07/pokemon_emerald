	@ data/text/trainers.inc:1451 Route115_Text_TimothyPostRematch
	.globl gText_Rom_25D19D
gText_Rom_25D19D: @ 0x0825D19D
	.string "どりょく あるのみ!\pまけたのは まだまだ\nどりょくが たりないからだ!{EOS}"
	.if (. - gText_Rom_25D19D) > 0x25
	.error "gText_Rom_25D19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D19D) < 0x25
	.space 0x25 - (. - gText_Rom_25D19D)
	.endif
