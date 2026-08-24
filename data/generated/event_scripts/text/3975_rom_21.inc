	@ field-script:0x21E5CB FieldScriptText_21E834
	.globl gText_Rom_21E834
gText_Rom_21E834: @ 0x0821E834
	.string "パパに　たのんで　ボク　せんようの\nヨットを　かってもらおうかな？\lポケモンと　いっしょに　のれる　ヨット！"
	.byte EOS
	.if (. - gText_Rom_21E834) > 0x37
	.error "gText_Rom_21E834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E834) < 0x37
	.space 0x37 - (. - gText_Rom_21E834)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E86B
	.globl gText_Rom_21E86B
gText_Rom_21E86B: @ 0x0821E86B
	.string "あら　かわいい　トレーナーさん\nおちゃに　なさる？\lそれとも　しょうぶ　かしら？"
	.byte EOS
	.if (. - gText_Rom_21E86B) > 0x29
	.error "gText_Rom_21E86B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E86B) < 0x29
	.space 0x29 - (. - gText_Rom_21E86B)
	.endif

	@ trainerbattle-cfg:0x21E5D2 TrainerBattleText_21E894
	.globl gText_Rom_21E894
gText_Rom_21E894: @ 0x0821E894
	.string "かっぱつで　いらっしゃるのね"
	.byte EOS
	.if (. - gText_Rom_21E894) > 0xf
	.error "gText_Rom_21E894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E894) < 0xf
	.space 0xf - (. - gText_Rom_21E894)
	.endif
