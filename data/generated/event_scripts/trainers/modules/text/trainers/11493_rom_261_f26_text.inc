	@ data/text/trainers.inc:3314 Route133_Text_WarrenDefeat (+1 aliases)
	.globl gText_Rom_261F26
gText_Rom_261F26: @ 0x08261F26
	.string "くそー!\nおれの やりかたは まだまだ あまい!{EOS}"
	.if (. - gText_Rom_261F26) > 0x19
	.error "gText_Rom_261F26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F26) < 0x19
	.space 0x19 - (. - gText_Rom_261F26)
	.endif
