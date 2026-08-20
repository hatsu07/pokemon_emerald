	@ data/maps/SlateportCity/scripts.inc:961 SlateportCity_Text_HowTownIsBornAndGrows
	.globl gText_Rom_1DCAF7
gText_Rom_1DCAF7: @ 0x081DCAF7
	.string "みずの きれいな ところに\nたくさんの みのりが あつまり\pひとびとが やってくる ところに\nいちばが できる……\pこうして まちは おおきくなるのさ{EOS}"
	.if (. - gText_Rom_1DCAF7) > 0x4c
	.error "gText_Rom_1DCAF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCAF7) < 0x4c
	.space 0x4c - (. - gText_Rom_1DCAF7)
	.endif
