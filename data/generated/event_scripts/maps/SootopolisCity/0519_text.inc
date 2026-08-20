	@ data/maps/SootopolisCity/scripts.inc:1417 SootopolisCity_Text_GoRedAndBlueMon
	.globl gText_Rom_1E2E35
gText_Rom_1E2E35: @ 0x081E2E35
	.string "それいけ! あかい ポケモン!\nまけるな! あおい ポケモン!{EOS}"
	.if (. - gText_Rom_1E2E35) > 0x20
	.error "gText_Rom_1E2E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2E35) < 0x20
	.space 0x20 - (. - gText_Rom_1E2E35)
	.endif
