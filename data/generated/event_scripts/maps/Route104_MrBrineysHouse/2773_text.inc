	@ data/maps/Route104_MrBrineysHouse/scripts.inc:101 Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford
	.globl gText_Rom_211749
gText_Rom_211749: @ 0x08211749
	.string "おや? きみは たしか ピーコちゃんを\nたすけて くれた {PLAYER}{KUN}!\lそのせつは せわに なったのう!\p……なぬ? ふねに のりたい とな?\pふむふむ?\nムロに てがみを とどけて\lカイナへ にもつを とどける……\lなんだか いそがしいのう きみは\pじゃが それくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - gText_Rom_211749) > 0xb5
	.error "gText_Rom_211749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211749) < 0xb5
	.space 0xb5 - (. - gText_Rom_211749)
	.endif
