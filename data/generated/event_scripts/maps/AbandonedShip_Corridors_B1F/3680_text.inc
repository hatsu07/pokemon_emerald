	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:59 AbandonedShip_Corridors_B1F_Text_DuncanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21ACC7
gText_Rom_21ACC7: @ 0x0821ACC7
	.string "こりゃ まいった"
	.byte EOS
	.if (. - gText_Rom_21ACC7) != 0x9
	.error "gText_Rom_21ACC7 must retain its original byte length"
	.endif
	.globl gText_Rom_21ACCB
	.set gText_Rom_21ACCB, gText_Rom_21ACC7 + 0x4
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:62 AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
	.globl gText_Rom_21ACD0
gText_Rom_21ACD0: @ 0x0821ACD0
	.string "ふなぞこが みずの なかに\nしずんで いるんだよ\pポケモンが みずに もぐれる わざを\nつかえたら さきに すすめるんだがな……"
	.byte EOS
	.if (. - gText_Rom_21ACD0) > 0x41
	.error "gText_Rom_21ACD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21ACD0) < 0x41
	.space 0x41 - (. - gText_Rom_21ACD0)
	.endif
