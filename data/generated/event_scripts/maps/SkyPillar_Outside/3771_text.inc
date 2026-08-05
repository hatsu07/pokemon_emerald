	@ data/maps/SkyPillar_Outside/scripts.inc:148 SkyPillar_Outside_Text_SituationGettingWorse
	.globl gText_Rom_21BDD5
gText_Rom_21BDD5: @ 0x0821BDD5
	.string "ミクリ『うーむ じょうきょうは\nだんだん わるくなって きている……"
	.byte EOS
	.if (. - gText_Rom_21BDD5) > 0x23
	.error "gText_Rom_21BDD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21BDD5) < 0x23
	.space 0x23 - (. - gText_Rom_21BDD5)
	.endif
