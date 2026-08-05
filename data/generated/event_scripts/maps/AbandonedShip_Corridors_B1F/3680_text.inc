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
