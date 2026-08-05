	@ data/maps/FortreeCity_House4/scripts.inc:65 FortreeCity_House4_Text_BringsWorldCloserTogether
	.globl gText_Rom_205255
gText_Rom_205255: @ 0x08205255
	.string "ポケモンと いることで\nなかの いい ともだちが ふえていく……\pこうして せかいは つながって いくのね!\nすてきだわ!$"
	.if (. - gText_Rom_205255) > 0x3e
	.error "gText_Rom_205255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205255) < 0x3e
	.space 0x3e - (. - gText_Rom_205255)
	.endif
