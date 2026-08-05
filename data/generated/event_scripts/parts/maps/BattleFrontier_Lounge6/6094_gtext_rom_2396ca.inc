	@ data/maps/BattleFrontier_Lounge6/scripts.inc:32 BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt
	.globl gText_Rom_2396CA
gText_Rom_2396CA: @ 0x082396CA
	.string "わー かわいい ですねー……!\nどうも ありがとう\lたいせつに しますよ!\pあっ {STR_VAR_2}も\nよろしく おねがい します!"
	.byte EOS
	.if (. - gText_Rom_2396CA) > 0x3c
	.error "gText_Rom_2396CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2396CA) < 0x3c
	.space 0x3c - (. - gText_Rom_2396CA)
	.endif
