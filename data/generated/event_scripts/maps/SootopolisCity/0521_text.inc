	@ data/maps/SootopolisCity/scripts.inc:1420 SootopolisCity_Text_DoYouKnowMonNames
	.globl gText_Rom_1E2E55
gText_Rom_1E2E55: @ 0x081E2E55
	.string "…… …… ……\pきみ あそこで たたかってる\nポケモンたちの なまえ しってる?{EOS}"
	.if (. - gText_Rom_1E2E55) > 0x2a
	.error "gText_Rom_1E2E55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E55) < 0x2a
	.space 0x2a - (. - gText_Rom_1E2E55)
	.endif
