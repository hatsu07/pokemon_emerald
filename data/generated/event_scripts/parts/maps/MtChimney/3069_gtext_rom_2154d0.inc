	@ data/maps/MtChimney/scripts.inc:658 MtChimney_Text_DouseThemInFire
	.globl gText_Rom_2154D0
gText_Rom_2154D0: @ 0x082154D0
	.string "よーし!\nほのおを ぶっかけてやれー!!$"
	.if (. - gText_Rom_2154D0) > 0x15
	.error "gText_Rom_2154D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2154D0) < 0x15
	.space 0x15 - (. - gText_Rom_2154D0)
	.endif
