	@ data/text/trainers.inc:1472 Route115_Text_NobRegister
	.globl gText_Rom_25D27C
gText_Rom_25D27C: @ 0x0825D27C
	.string "きみは すげえな!\nきたえなおして もういちど しょうぶだ!$"
	.if (. - gText_Rom_25D27C) > 0x1f
	.error "gText_Rom_25D27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D27C) < 0x1f
	.space 0x1f - (. - gText_Rom_25D27C)
	.endif
