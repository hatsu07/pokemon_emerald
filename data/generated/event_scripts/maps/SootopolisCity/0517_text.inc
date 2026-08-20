	@ data/maps/SootopolisCity/scripts.inc:1414 SootopolisCity_Text_ThatWasWicked
	.globl gText_Rom_1E2E24
gText_Rom_1E2E24: @ 0x081E2E24
	.string "すげー だいはくりょく だった!{EOS}"
	.if (. - gText_Rom_1E2E24) > 0x11
	.error "gText_Rom_1E2E24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E24) < 0x11
	.space 0x11 - (. - gText_Rom_1E2E24)
	.endif
