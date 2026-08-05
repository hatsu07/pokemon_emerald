	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:251 BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain
	.globl gText_Rom_238C3B
gText_Rom_238C3B: @ 0x08238C3B
	.string "エニシダ『わが ブレーンたち から\nフロンティアパスの シンボルは\lもう もらったかな?\pわたしが みいだした\nさいきょうの フロンティアブレーンも\lきみの つよさを みたら\lおそらく おどろく だろうね!"
	.byte EOS
	.if (. - gText_Rom_238C3B) > 0x68
	.error "gText_Rom_238C3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238C3B) < 0x68
	.space 0x68 - (. - gText_Rom_238C3B)
	.endif
