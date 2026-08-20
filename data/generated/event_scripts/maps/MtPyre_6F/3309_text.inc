	@ data/maps/MtPyre_6F/scripts.inc:58 MtPyre_6F_Text_CedricIntro (+1 aliases)
	.globl gText_Rom_216AE8
gText_Rom_216AE8: @ 0x08216AE8
	.string "きみ まいごなのか?\nおれが きた からには あんしんだ!{EOS}"
	.if (. - gText_Rom_216AE8) > 0x1e
	.error "gText_Rom_216AE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216AE8) < 0x1e
	.space 0x1e - (. - gText_Rom_216AE8)
	.endif
