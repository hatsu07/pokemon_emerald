	@ data/maps/BattleFrontier_Lounge5/scripts.inc:83 BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound
	.globl gText_Rom_23956A
gText_Rom_23956A: @ 0x0823956A
	.string "じぶん あのこが すごく だいじなことを\nいっている きが するで あります!"
	.byte EOS
	.if (. - gText_Rom_23956A) > 0x28
	.error "gText_Rom_23956A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23956A) < 0x28
	.space 0x28 - (. - gText_Rom_23956A)
	.endif
