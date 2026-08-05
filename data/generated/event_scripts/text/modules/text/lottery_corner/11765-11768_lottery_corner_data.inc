	@ data/text/lottery_corner.inc:73 LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26343A
gText_Rom_26343A: @ 0x0826343A
	.string "{PLAYER}さん ですね\nおまちして おりました!\pでは しょうひんを\nおわたし いたします$"
	.if (. - gText_Rom_26343A) != 0x2b
	.error "gText_Rom_26343A must retain its original byte length"
	.endif
	.globl gText_Rom_26345F
	.set gText_Rom_26345F, gText_Rom_26343A + 0x25
	.globl gText_Rom_263461
	.set gText_Rom_263461, gText_Rom_26343A + 0x27

	@ data/text/lottery_corner.inc:17 LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain (+1 aliases)
	.globl gText_Rom_263465
gText_Rom_263465: @ 0x08263465
	.string "それでは また おこし ください$"
	.if (. - gText_Rom_263465) > 0x11
	.error "gText_Rom_263465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263465) < 0x11
	.space 0x11 - (. - gText_Rom_263465)
	.endif
