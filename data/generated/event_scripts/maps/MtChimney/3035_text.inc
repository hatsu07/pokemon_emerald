	@ data/maps/MtChimney/scripts.inc:544 MtChimney_Text_MeteoriteWillActivateVolcano
	.globl gText_Rom_21503D
gText_Rom_21503D: @ 0x0821503D
	.string "いんせきに ひめられた ちから\pこの そうちで ぞうふく すれば\nたちまちの うちに えんとつやまの\lかざん かつどうは かっぱつになる……\pその エネルギーが\nかこうの おくふかくに はたらきかけ\lそして ふふふ……{EOS}"
	.if (. - gText_Rom_21503D) > 0x6e
	.error "gText_Rom_21503D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21503D) < 0x6e
	.space 0x6e - (. - gText_Rom_21503D)
	.endif
