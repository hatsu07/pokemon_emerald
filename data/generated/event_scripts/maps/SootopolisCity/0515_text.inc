	@ data/maps/SootopolisCity/scripts.inc:1411 SootopolisCity_Text_ThisIsWicked
	.globl gText_Rom_1E2E17
gText_Rom_1E2E17: @ 0x081E2E17
	.string "すげー だいはくりょく!$"
	.if (. - gText_Rom_1E2E17) > 0xd
	.error "gText_Rom_1E2E17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E17) < 0xd
	.space 0xd - (. - gText_Rom_1E2E17)
	.endif
