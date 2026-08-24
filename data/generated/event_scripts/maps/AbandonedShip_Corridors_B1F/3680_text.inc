	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:56 AbandonedShip_Corridors_B1F_Text_DuncanIntro (+1 aliases)
	.globl AbandonedShip_Corridors_B1F_Text_DuncanIntro
AbandonedShip_Corridors_B1F_Text_DuncanIntro: @ 0x0821AC96
	.string "ふなのりは ふねに のるとき\nかならず ポケモンを もっている!\lちょいと しょうぶ してくれ!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro) > 0x31
	.error "AbandonedShip_Corridors_B1F_Text_DuncanIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro) < 0x31
	.space 0x31 - (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro)
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:59 AbandonedShip_Corridors_B1F_Text_DuncanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Corridors_B1F_Text_DuncanDefeat
AbandonedShip_Corridors_B1F_Text_DuncanDefeat: @ 0x0821ACC7
	.string "こりゃ まいった"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanDefeat) != 0x9
	.error "AbandonedShip_Corridors_B1F_Text_DuncanDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_21ACCB
	.set gText_Rom_21ACCB, AbandonedShip_Corridors_B1F_Text_DuncanDefeat + 0x4
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:62 AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
	.globl AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle: @ 0x0821ACD0
	.string "ふなぞこが みずの なかに\nしずんで いるんだよ\pポケモンが みずに もぐれる わざを\nつかえたら さきに すすめるんだがな……"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle) > 0x41
	.error "AbandonedShip_Corridors_B1F_Text_DuncanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle) < 0x41
	.space 0x41 - (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle)
	.endif
