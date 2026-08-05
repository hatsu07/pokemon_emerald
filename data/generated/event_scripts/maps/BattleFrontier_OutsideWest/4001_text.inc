	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:330 BattleFrontier_OutsideWest_Text_LilycoveItIs (+1 aliases)
	.globl gText_Rom_21EFDD
gText_Rom_21EFDD: @ 0x0821EFDD
	.string "ミナモシティ ですね!"
	.byte EOS
	.if (. - gText_Rom_21EFDD) > 0xc
	.error "gText_Rom_21EFDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFDD) < 0xc
	.space 0xc - (. - gText_Rom_21EFDD)
	.endif
