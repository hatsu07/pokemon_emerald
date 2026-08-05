	@ data/text/lottery_corner.inc:73 LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26343A
gText_Rom_26343A: @ 0x0826343A
	.string "{PLAYER}さん ですね\nおまちして おりました!\pでは しょうひんを\nおわたし いたします$"
	.if (. - gText_Rom_26343A) != 0x2b
	.error "gText_Rom_26343A must retain its original byte length"
	.endif
