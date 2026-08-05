	@ data/maps/MtPyre_Summit/scripts.inc:534 MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs
	.globl gText_Rom_2174D8
gText_Rom_2174D8: @ 0x082174D8
	.string "ふたつのたまを うばった おとこたちが\nみずから かえしに くるとは……\pあの ふたり……\nあんがい わるいやつでは ないのかもな$"
	.if (. - gText_Rom_2174D8) > 0x42
	.error "gText_Rom_2174D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2174D8) < 0x42
	.space 0x42 - (. - gText_Rom_2174D8)
	.endif
