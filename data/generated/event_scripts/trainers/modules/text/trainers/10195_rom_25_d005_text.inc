	@ data/text/trainers.inc:1406 Route114_Text_KaiIntro (+1 aliases)
	.globl gText_Rom_25D005
gText_Rom_25D005: @ 0x0825D005
	.string "でっかいの つれたっ でっかいの!{EOS}"
	.if (. - gText_Rom_25D005) > 0x12
	.error "gText_Rom_25D005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D005) < 0x12
	.space 0x12 - (. - gText_Rom_25D005)
	.endif
