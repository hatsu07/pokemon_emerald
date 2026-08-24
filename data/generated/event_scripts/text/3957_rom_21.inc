	@ data/maps/Route119_WeatherInstitute_1F/scripts.inc:130 Route119_WeatherInstitute_1F_Text_TakeRestInBed
	.globl gText_Rom_21E5E9
gText_Rom_21E5E9: @ 0x0821E5E9
	.string "ベッドが ある……\nやすんでいこう"
	.byte EOS
	.if (. - gText_Rom_21E5E9) > 0x12
	.error "gText_Rom_21E5E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E5E9) < 0x12
	.space 0x12 - (. - gText_Rom_21E5E9)
	.endif

	@ trainerbattle-cfg:0x21E540 TrainerBattleText_21E5FB
	.globl gText_Rom_21E5FB
gText_Rom_21E5FB: @ 0x0821E5FB
	.string "ミナモシティには　よく　いくんだ\pコンテストの　けんがくが\nわたしの　たのしみ　なんだよ"
	.byte EOS
	.if (. - gText_Rom_21E5FB) > 0x2d
	.error "gText_Rom_21E5FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E5FB) < 0x2d
	.space 0x2d - (. - gText_Rom_21E5FB)
	.endif

	@ trainerbattle-cfg:0x21E540 TrainerBattleText_21E628
	.globl gText_Rom_21E628
gText_Rom_21E628: @ 0x0821E628
	.string "たのしい　しょうぶ　だったよ"
	.byte EOS
	.if (. - gText_Rom_21E628) > 0xf
	.error "gText_Rom_21E628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E628) < 0xf
	.space 0xf - (. - gText_Rom_21E628)
	.endif
